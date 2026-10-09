class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // 暴力求解
        // int i,j;
        // for(i=0;i<nums.size()-1;i++)
        // {
        //     for(j=i+1;j<nums.size();j++)
        //     {
        //         if(nums[i]+nums[j]==target)
        //         {
        //             return {i,j};
        //         }
        //     }
        // }
        // return {i,j};
        unordered_map<int,int> seen;
        vector<int> index(2,-1);
        for(int i=0;i<nums.size();i++)
        {
            if(seen.count(target-nums[i])>0)
            {
                index[0]=seen[target-nums[i]];
                index[1]=i;
                break;
            }
            seen[nums[i]]=i;
        }
        return index;
        
    }
};

"用unordered_map是因为这才是真正的哈希表，而map是红黑树"
