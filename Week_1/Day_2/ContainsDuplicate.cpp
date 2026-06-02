/* 
Question : Given an integer array nums, return true if any value appears at least twice in the array,
and return false if every element is distinct.

Approach : By sorting the array first, any duplicate numbers are forced to sit right next to each other. 
The code then walks through the sorted list,
and the moment it spots two identical numbers side-by-side, it immediately flags that a duplicate exists.

Time Complexity : O(nlogn)
Space Complexity : O(1)

*/


class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()==0) return false;
        if(nums.size()==1) return false;
        int count=0;
        
        for(int i=1; i<nums.size(); i++){
            if(nums[i]==nums[i-1]){
                count++;
                if(count>=1) return true;
            }
        }
        return false;
    }
};
