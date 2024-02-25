class Solution {
public:
    void sortColors(vector<int>& nums) {
        //inbuilt function -> )O(nlogn)
        sort(nums.begin(),nums.end());
        
        //counting method
        vector<int>ans(nums.size());
        int zero=0;
        int first=0;
        int second=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                zero++;
            }
            else if(nums[i]==1)
            {
                first++;
            }
            else
            {
                second++;
            }
        }
        int idx=0;
        while(zero--)
        {
            nums[idx++]=0;
        }
        while(first--)
        {
            nums[idx++]=1;
        }
        while(second--)
        {
            nums[idx++]=2;
        }
        
    }
};