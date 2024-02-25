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
        
        //mapping -> t.c=O(n) s.c=O(n)
        // unordered_map<int,int>mpp;
        // for(int i=0;i<nums.size();i++)
        // {
        //     mpp[nums[i]]++;
        // }
        // for(auto it:mpp)
        // {
        //     if(it.second>1)
        //     {
        //         return it.first;
        //     }
        // }
        // return -1;
        
        //sort and check if two adjacent el are equal -> t.c=O(nlogn) s.c=O(1)
        // sort(nums.begin(),nums.end());
        // for(int i=0;i<nums.size()-1;i++)
        // {
        //     if(nums[i]==nums[i+1])
        //     {
        //         return nums[i];
        //     }
        // }
        // return -1;
        
        //single pass -> t.c=O(n) s.c=O(1) 
        while(nums[0] != nums[nums[0]])
        {
            swap(nums[0],nums[nums[0]]);
        }
        return nums[0];
    }
};