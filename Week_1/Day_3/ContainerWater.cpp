/*
Question : given an integer array height of length n. 
There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).
Find two lines that together with the x-axis form a container, such that the container contains the most water.
Return the maximum amount of water a container can store.

Approach : This code employs a **two-pointer approach** starting at opposite ends of the array to dynamically calculate the container's area based on the distance between the pointers and the shorter boundary height.
It greedily shifts the pointer pointing to the shorter line inward at each step to potentially find a taller boundary and maximize the water volume.

Time Complexity : O(n)
Space Complexity : O(1)

*/


class Solution {
public:
    int maxArea(vector<int>& height) {
     
    int left = 0;
    int right = height.size() - 1;
    int maxWater = 0;

    while (left < right) {
        // Calculate current area
        int w = right - left;
        int h = min(height[left], height[right]);
        maxWater = max(maxWater, w * h);

        // Move the shorter line pointer
        if (height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }
    return maxWater;
    }
    
};
