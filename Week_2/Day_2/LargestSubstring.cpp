/*
Question: Given a string s, find the length of the longest substring without duplicate characters.

Approach: A sliding window technique where the right pointer expands the window and a hash map tracks each character's latest index; when a duplicate is found, the left pointer instantly jumps past its previous position to keep all characters unique.

Time complexity: O(n)
Space Complexity:O(n)

 
  
*/
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        if (n == 0) return 0;
        
        
        unordered_map<char, int> mp;
        int i = 0; 
        int gl = 0;
        
        for (int j = 0; j < n; j++) {
            
            if (mp.find(s[j]) != mp.end()) {
                
                i = max(i, mp[s[j]] + 1);
            }
            
            
            mp[s[j]] = j;
            gl = max(gl, j - i + 1);
        }
        
        return gl;
    }
};
