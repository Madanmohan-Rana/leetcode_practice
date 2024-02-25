class Solution {
public:
    int missingNumber(vector<int>& nums) {
        //with mapping -> t.c=O(n)+O(n)     s.c=O(n)
        // unordered_map<int,int>mpp;
        // for(int i=0;i<nums.size();i++)
        // {
        //     mpp[nums[i]]++;
        // }
        // for(int i=0;i<=nums.size();i++)
        // {
        //     if(mpp.find(i)==mpp.end())
        //     {
        //         return i;
        //     }
        // }
        // return -1;
        
        //using sum -> t.c=O(n) s.c=O(1)
        int n=nums.size();
        int total_sum=(n*(n+1))/2;
        int array_sum=0;
        for(int i=0;i<nums.size();i++)
        {
            array_sum+=nums[i];
        }
        return (total_sum-array_sum);
    }
};