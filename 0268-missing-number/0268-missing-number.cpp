class Solution {
public:
    int missingNumber(vector<int>& nums) {
        //with mapping -> t.c=O(n)+O(n)     s.c=O(n)
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++)
        {
            mpp[nums[i]]++;
        }
        for(int i=0;i<=nums.size();i++)
        {
            if(mpp.find(i)==mpp.end())
            {
                return i;
            }
        }
        return -1;
    }
};