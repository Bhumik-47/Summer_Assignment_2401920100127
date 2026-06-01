/* 
Problem : 
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
(Two Sum Problem)

Approach: Used a hash map to store elements and their indices for efficient lookup. Hence reducing the overall time complexity of the code
and improved efficiency

Time Complexity: O(n)
Space Complexity: O(n)
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int>mp;
        vector<int>ans(2,-1);
        for(int i=0;i<n;i++){
            int t1=nums[i];
            int t2=target-t1;
            if(mp.find(t2)!=mp.end()){
                ans[0]=i;
                ans[1]=mp[t2];
                return ans;
            }
            mp[t1]=i;
        }
        return ans;
    }
};
