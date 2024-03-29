class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //double for loop -> O(n2) && O(n)
        vector<int>ans;
        // for(int i=0;i<nums.size();i++)
        // {
        //     for(int j=i+1;j<nums.size();j++)
        //     {
        //         if(nums[i]+nums[j]==target)
        //         {
        //             ans.push_back(i);
        //             ans.push_back(j);
        //             break;
        //         }
        //     }
        // }
        
        //mapping -> s.c = O(n)+O(n) = O(n)
        //           t.c = O(n)+O(n) = O(n)
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++)
        {
            if(mpp.find(target-nums[i])==mpp.end())
            {
                mpp[nums[i]]=i;
            }
            else
            {
                ans.push_back(i);
                ans.push_back(mpp[target-nums[i]]);
                break;
            }
        }
        
        return ans;
    }
};