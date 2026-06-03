/*
Question : Given an integer array nums sorted in non-decreasing order, 
return an array of the squares of each number sorted in non-decreasing order

Approach : This code uses a two-pointer approach (`left` and `right`) to compare the absolute values of elements from both ends of the sorted array. 
It squares the larger absolute valueand places it at the end of the result array (`res`), 
moving backwards to build the sorted squared array in O(n) time.

Time Complexity : O(n)
Space Complexity : O(1) [ except for building res vector ]

*/



class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n, 0);
        int left = 0;
        int right = n - 1;

        for (int i = n - 1; i >= 0; i--) {
            if (abs(nums[left]) > abs(nums[right])) {
                res[i] = nums[left] * nums[left];
                left++;
            } else {
                res[i] = nums[right] * nums[right];
                right--;
            }
        }
        return res;        
    }
};
