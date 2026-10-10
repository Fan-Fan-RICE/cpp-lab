/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
 class Solution {
    public:
        ListNode* reverseList(ListNode* head) {
            // //双指针迭代
            // ListNode *cur =head,*pre = nullptr;
            // while(cur!=nullptr)
            // {
            //     ListNode *tmp = cur->next;
            //     cur->next = pre;
            //     pre = cur ;
            //     cur =tmp;
            // }
            // return pre;
    
    
            //递归
            return recur(head,nullptr); // 调用递归并返回
    
        }
    private:
        ListNode* recur(ListNode* cur,ListNode* pre)
        {
            if(cur==nullptr)
                return pre; //终止条件
            ListNode *res = recur(cur->next,cur);
            cur->next =pre;
            return res;
        }
    };