/* Question : Given an integer array nums, move all 0's to the end of it,
while maintaining the relative order of the non-zero elements.

Approach : This code uses a **two-pointer approach** (`j` and `nonzero`) to iterate through the array and find non-zero elements. Whenever a non-zero element is encountered, 
it is swapped with the element at the `nonzero` index, 
effectively pushing all zeros to the end of the array in a single pass.

Time Complexity : O(n)
Space Complexity : O(1)

*/
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int nonzero = 0;
        for(int j=0; j<nums.size(); j++){
            if(nums[j]!=0){
                swap(nums[j],nums[nonzero++]);
                
            }
        }
    }
};
