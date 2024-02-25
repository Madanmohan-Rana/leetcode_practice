class Solution {
public:
    int sum(vector<int>& nums,int s,int e)
    {
        int temp=0;
        for(int i=s;i<e;i++)
        {
            temp+=nums[i];
        }
        return temp;
    }
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(sum(nums,0,i)==sum(nums,i+1,n))
            {
                return i;
            }
        }
        return -1;
    }
};