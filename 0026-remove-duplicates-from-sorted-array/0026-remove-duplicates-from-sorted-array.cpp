class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // set<int>st;
        // for(int i=0;i<nums.size();i++)
        // {
        //     st.insert(nums[i]);
        // }
        // int idx=0;
        // int n=st.size();
        // for(auto it:st)
        // {
        //     nums[idx++]=it;
        // }
        // return n;
        
        int i=0;
        int j=1;
        int count=0;
        while(j<nums.size())
        {
            if(nums[i]==nums[j])
            {
                ++j;
            }
            else
            {
                i++;
                nums[i]=nums[j];
                j++;
            }
        }
        return i+1;
    }
    
};