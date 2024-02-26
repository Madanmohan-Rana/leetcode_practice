class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int total_count=m*n;
        int count=0;
        vector<int>ans;
        int startRow=0;
        int endCol=n-1;
        int endRow=m-1;
        int startCol=0;
        while(count<total_count)
        {
            //print starting row
            for(int i=startCol;i<=endCol && count<total_count;i++)
            {
                ans.push_back(matrix[startRow][i]);
                count++;
            }
            startRow++;
            //print ending col
            for(int i=startRow;i<=endRow && count<total_count;i++)
            {
                ans.push_back(matrix[i][endCol]);
                count++;
            }
            endCol--;
            //print ending row
            for(int i=endCol;i>=startCol && count<total_count;i--)
            {
                ans.push_back(matrix[endRow][i]);
                count++;
            }
            endRow--;
            //print starting col
            for(int i=endRow;i>=startRow && count<total_count;i--)
            {
                ans.push_back(matrix[i][startCol]);
                count++;
                
            }
            startCol++;
        }
        return ans;
    }
};