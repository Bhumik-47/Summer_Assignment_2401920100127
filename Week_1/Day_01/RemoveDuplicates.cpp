/* 
Question : Given an integer array nums sorted in non-decreasing order,
remove the duplicates in-place such that each unique element appears only once.
The relative order of the elements should be kept the same. Return k unique elements.

Approach : insertIndex (Slow Pointer): Tracks where the next unique element should be placed.
It starts at 1 because the first element (nums[0]) is always unique.

i (Fast Pointer): Scans the array starting from index 1.

Time Complexity : O(n)
Space Complexity : O(1)

*/


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;

        
        int insertIndex = 1; 

        for (int i = 1; i < nums.size(); i++) {
            
            if (nums[i] != nums[i - 1]) {
                nums[insertIndex] = nums[i]; 
                insertIndex++;               
            }
        }

        return insertIndex; 
    }
};
