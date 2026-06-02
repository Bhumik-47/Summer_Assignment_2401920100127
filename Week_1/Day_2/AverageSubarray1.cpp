/*
Question : You are given an integer array nums consisting of n elements, and an integer k.
Find a contiguous subarray whose length is equal to k that has the maximum average value and return this value

Approach : The code creates a frame of size k and slides it across the array by adding the next incoming number and dropping the oldest outgoing number.
It tracks the highest sum trapped inside this moving frame and divides it by k at the very end.

Time Complexity : O(n)
Space Complexity : O(1)
*/
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size(); 
        double Max_sum = INT_MIN;
        double curr_sum = 0;
        int i=0,j=0;
        while(j<n){
            curr_sum+=nums[j];
            j++;
            if(j-i == k){
                Max_sum = max(Max_sum , curr_sum);
                while(j<n){
                Max_sum = max(Max_sum , curr_sum);
                curr_sum+=nums[j];
                curr_sum-=nums[i];
                j++;
                i++;
                }
            }
           
        }
         Max_sum = max(Max_sum , curr_sum);
       return Max_sum/k;
    }
};
