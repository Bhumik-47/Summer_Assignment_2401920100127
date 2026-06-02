/*Question : Given an integer array nums, find the subarray with the largest sum, and return its sum.

Approach : Using Kadane's algorithm that keep a running total as you walk through the numbers,
resetting it to zero the moment it drops below zero (since debt hurts future totals). 
Along the way, you simply remember the highest peak that running total ever reached.

Time Complexity : O(n)
Space Complexity : O(1)
  
  */


class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int Maxsum = INT_MIN;
        int curr_sum = 0;

        for (int i = 0 ; i < nums.size(); i++) {
            curr_sum += nums[i];

            Maxsum = max(Maxsum, curr_sum);
            if (curr_sum < 0)
                curr_sum = 0;
        }
        return Maxsum;
    }
};
