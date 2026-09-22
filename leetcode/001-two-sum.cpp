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
        map<int,int> a;
        vector<int> b(2,-1);
        for(int i=0;i<nums.size();i++)
        {
            if(a.count(target-nums[i])>0)
            {
                b[0]=a[target-nums[i]];
                b[1]=i;
                break;
            }
            a[nums[i]]=i;
        }
        return b;
        
    }
};