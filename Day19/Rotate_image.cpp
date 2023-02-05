class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
       int n=matrix.size();
       //transpose of matrix
       for(int i=0;i<n;i++)
       {
          for(int j=i+1;j<n;j++)
          {
              swap(matrix[i][j],matrix[j][i]);
          }
       }
        //reverse row
       for(int k=0;k<n;k++)
       {
           reverse(matrix[k].begin() , matrix[k].end());
       }

    }
};
