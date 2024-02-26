class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mpp;
        vector<int>v;
        for(int i=0;i<arr.size();i++)
        {
            mpp[arr[i]]++;
        }
        for(auto it:mpp)
        {
            v.push_back(it.second);
        }
        for(int i=0;i<v.size();i++)
        {
            for(int j=i+1;j<v.size();j++)
            {
                if(v[i]==v[j])
                {
                    return false;
                }
            }
        }
        return true;
    }
};