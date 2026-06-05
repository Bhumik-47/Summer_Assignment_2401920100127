/*
Question: 
A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.
Given a string s, return true if it is a palindrome, or false otherwise.

Approach : Apply two-pointer technique directly on the original string s. We just need to skip any non-alphanumeric characters and check both characters after converting them into lowercase and so on.
Return true in the end if the condition satisfy till left < right.

Time Complexity: O(n)
Space complexity: O(1)

 
  


*/
class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.size() - 1;
        
        while (left < right) {
            
            while (left < right && !isalnum(s[left])) {
                left++;
            }
            
            while (left < right && !isalnum(s[right])) {
                right--;
            }
            
            
            if (tolower(s[left]) != tolower(s[right])) {
                return false;
            }
            
            left++;
            right--;
        }
        
        return true;
    }
};
