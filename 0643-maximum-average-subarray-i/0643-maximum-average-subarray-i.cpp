class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        // double maxi=INT_MIN;
        // for(int i=0;i<nums.size()-k+1;i++)
        // {
        //     double average=0;
        //     for(int j=i;j<i+k;j++)
        //     {
        //         average+=nums[j];
        //     }
        //     average=average/k;
        //     maxi=max(maxi,average);
        // }
        // return maxi;
        
        int i=0;
        int j=0;
        double sum=0;
        double average=0;
        double maxi=INT_MIN;
        while(j<nums.size())
        {
            //running
            sum+=nums[j];
            //create a window
            if(j-i+1<k)
            {
                j++;
            }
            //maintain window
            else if(j-i+1==k)
            {
                average=sum/k;
                maxi=max(maxi,average);
                sum-=nums[i];
                j++;
                i++;
            }
        }
        return maxi;
    }
};