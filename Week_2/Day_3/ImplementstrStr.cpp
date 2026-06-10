/*
  Question : Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

  Approach : uses a brute-force sliding window approach that checks every possible starting position in the haystack.
  At each position i, it uses a nested loop to compare characters one-by-one to see if they exactly match the needle.

  Time Complexity : O(n1*n2)
  Spce Complexity : O(1)
*/

class Solution {
public:
    int strStr(string haystack, string needle) {
        int n1 = haystack.size();
        int n2 = needle.size();
        
        // Edge case: if needle is empty, return 0
        if (n2 == 0) return 0;

        // Loop through haystack
        for (int i = 0; i <= n1 - n2; i++) {
            int j = 0;
            while (j < n2 && haystack[i + j] == needle[j]) {
                j++;
            }
            if (j == n2) return i; 
        }

        return -1; 
    }
};
 
