/* 
Question : Given a square matrix mat, return the sum of the matrix diagonals.
Only include the sum of all the elements on the primary diagonal and all the elements on the secondary diagonal that are not part of the primary diagonal.

Approach : Iterating over all elements of matrix and applying the condition if(i==j) means it is a primary diagonal , add it to ans , simultaneously we can calculate the other diagonal element coordinates
with condition if(i != m-i-1) then include it otherwise not and finally return the ans.

Timr Complexity : O(n*m)
Space Complexity : O(1)
*/
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int ans = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(i==j){
                    ans += mat[i][j];
                    if(i == m-i-1)continue;
                    else ans += mat[i][m-i-1];
                }
            }
        }
        return ans;
    }
};
