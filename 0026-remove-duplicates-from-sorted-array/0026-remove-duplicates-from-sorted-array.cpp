class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>st;
        for(int i=0;i<nums.size();i++)
        {
            st.insert(nums[i]);
        }
        int idx=0;
        int n=st.size();
        for(auto it:st)
        {
            nums[idx++]=it;
        }
        return n;
    }
    
};