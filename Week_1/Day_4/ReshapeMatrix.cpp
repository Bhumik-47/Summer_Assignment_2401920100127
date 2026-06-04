/*
Question : n MATLAB, there is a handy function called reshape which can reshape an m x n matrix into a new one with a different size r x c keeping its original data....

Approach : The code flattens the original matrix into a queue row-by-row, then unloads those elements to fill a new $r \times c$ matrix; if the total element counts don't match, it returns the original.

Time Complexity : O(m*n)
Space Complexity : O(m*n)

*/
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size() , n= mat[0].size();
        vector<vector<int>>v(r,vector<int>(c));
        queue<int>q;
        if(m*n == r*c){
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    q.push(mat[i][j]);
                }
            }
            for(int i=0;i<r;i++){
                for(int j=0;j<c;j++){
                    v[i][j] = q.front();
                    q.pop();
                }
            }
            return v;
        }
        return mat;
    }
};
