class Solution {
public:
    void sortColors(vector<int>& nums) {
        //inbuilt function -> )O(nlogn)
        //sort(nums.begin(),nums.end());
        
        //counting method -> t.c = O(n)
        // int zero=0;
        // int first=0;
        // int second=0;
        // for(int i=0;i<nums.size();i++)
        // {
        //     if(nums[i]==0)
        //     {
        //         zero++;
        //     }
        //     else if(nums[i]==1)
        //     {
        //         first++;
        //     }
        //     else
        //     {
        //         second++;
        //     }
        // }
        // int idx=0;
        // while(zero--)
        // {
        //     nums[idx++]=0;
        // }
        // while(first--)
        // {
        //     nums[idx++]=1;
        // }
        // while(second--)
        // {
        //     nums[idx++]=2;
        // }
        
        
        //dutch national flag algo -> 
        
        int l=0;
        int m=0;
        int h=nums.size()-1;
        while(m<=h)
        {
            if(nums[m]==1)
            {
                m++;
            }
            else if(nums[m]==0)
            {
                swap(nums[l],nums[m]);
                m++;
                l++;
            }
            else
            {
                swap(nums[m],nums[h]);
                h--;
            }
        }
        
    }
};