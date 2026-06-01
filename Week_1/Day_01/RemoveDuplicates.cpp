/* 
Question : Given an integer array nums sorted in non-decreasing order,
remove the duplicates in-place such that each unique element appears only once.
The relative order of the elements should be kept the same.

Time Complexity : O(n)
Space Complexity : O(n)

*/


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0) return 0;

        vector<int> expectedNums;
        expectedNums.push_back(nums[0]);  // first element is always unique

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i - 1]) {
                expectedNums.push_back(nums[i]);  // store unique only
            }
        }

        // copy back unique elements
        for (int i = 0; i < expectedNums.size(); i++) {
            nums[i] = expectedNums[i];
        }

        return expectedNums.size();  // number of unique elements
    }
};
