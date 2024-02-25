class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        //double for loop -> O(n2)
        // for(int i=0;i<nums.size()-1;i++)
        // {
        //     for(int j=i+1;j<nums.size();j++)
        //     {
        //         if(nums[i]==nums[j])
        //         {
        //             return nums[i];
        //         }
        //     }
        // }
        // return -1;
        
        //mapping
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++)
        {
            mpp[nums[i]]++;
        }
        for(auto it:mpp)
        {
            if(it.second>1)
            {
                return it.first;
            }
        }
        return -1;
    }
};