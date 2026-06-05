/*
Question: 
A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.
Given a string s, return true if it is a palindrome, or false otherwise.

Approach : If given string is empty return true , after that we create another string named b which will contain all the lowercase character which were present in string s (either uppercase or lowercase)
Hence , we can apply algorithm that check palindrome and therefore return ans in boolean.

Time Complexity: O(n)
Space complexity: O(n)

 
  


*/
class Solution {
public:
    bool isPalindrome(string s) {
        if (s.empty()) {
            return true;
        }
        
        string b;
        
        for (int i = 0; i < s.size(); i++) {
            
            if (isalnum(s[i])) {
                
                b.push_back(tolower(s[i]));
            }
            
        }
        
        
        int left = 0;
        int right = b.size() - 1;
        
        while (left < right) {
            
            if (b[left] != b[right]) {
                return false;
            }
            
            left++;
            right--;
        }
        
        
        return true;
    }
};
