class Solution {
public:
    int fun(vector<int>& nums)
    {
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
        }
        return sum;
    }
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        int sum=fun(nums);
        //cout << sum;
        // for(int i=0;i<n;i++)
        // {
        //     if(sum(nums,0,i)==sum(nums,i+1,n))
        //     {
        //         return i;
        //     }
        // }
        int rsum=0;
        for(int i=0;i<n;i++)
        {
            rsum+=nums[i];
            if(rsum==sum)
            {
                return i;
            }
            sum-=nums[i];
        }
        return -1;
    }
};