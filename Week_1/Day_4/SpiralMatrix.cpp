/*
Question : Given an m x n matrix, return all elements of the matrix in spiral order.

Approach : This code traverses a 2D matrix in a clockwise spiral by using four boundaries (top, bottom, left, right) that track the outer edges. It loops through the top row, right column, bottom row, and left column sequentially,
shrinking the boundaries inward after each side is completed until all elements are visited.

Time Complexity : O(row*col)
Space Complexity : O(1) [ Not considering space for storing ans ]
*/  


class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        int startingrow = 0; 
        int endingcolumn = col - 1;
        int endingrow = row - 1;
        int startingcolumn = 0;
        int total = row*col;
        int count = 0;
        vector<int>ans;
        while(count < total){
            for(int index=startingrow; count<total && index<=endingcolumn; index++){
           ans.push_back(matrix[startingrow][index]);    
                count++;
            }
            startingrow++;
            for(int index=startingrow; count<total && index<=endingrow; index++){
                ans.push_back(matrix[index][endingcolumn]);
                count++;
            }
            endingcolumn--;        
            for(int index=endingcolumn; count<total && index>=startingcolumn; index--){
                ans.push_back(matrix[endingrow][index]);
                count++;
            }
            endingrow--;
            for(int index=endingrow; count<total && index>=startingrow; index--){
                ans.push_back(matrix[index][startingcolumn]);
                count++;
            }
            startingcolumn++;
    }
        return ans;
    }
};
