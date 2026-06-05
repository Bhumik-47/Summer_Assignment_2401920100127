/*
Question: Write a function to find the longest common prefix string amongst an array of strings.
If there is no common prefix, return an empty string "".

Approach: 
1. Sort the array: Puts the two most different strings at the absolute front and back.
 2. Compare the ends: Match the first and last strings character-by-character until they disagree.

 Time complexity : O(M*NlogN)
 Sorting N strings of max length M.
 Space Complexity:O(M)


*/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        string s = "";
        int i = 0, l= strs.size();
        while (i < strs[0].length()){
            if (strs[0][i] == strs[l-1][i]) s += strs[0][i];
            else break;
            i++;
        }
        return s;
    }
};
