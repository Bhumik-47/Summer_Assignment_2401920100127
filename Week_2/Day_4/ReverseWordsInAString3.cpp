/*
Question: Given a string s, reverse the order of characters in each word within a sentence while still preserving whitespace and initial word order.

Approach: The algorithm iterates through the string character by character, building individual words in a temporary buffer (current_word) until a space is encountered. Upon reaching a space (or the end of the string), the characters of the accumulated word are reversed in place and appended to the final result string.
 
Time complexity : O(n)
Soace complexity: O(n)

*/
#include <string>
#include <algorithm> // For swap

class Solution {
public:
    
    void reverse(string &n) {
        int s = 0;
        int e = n.length() - 1;
        while (s < e) {
            swap(n[s], n[e]);
            s++;
            e--;
        }
    }

    string reverseWords(string s) {
        string result = "";       
        string current_word = ""; 

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == ' ') {
                
                
                
                reverse(current_word);
                
                
                result += current_word;
                
                
                result += ' ';
                
                
                current_word = "";
            } else {
                
                current_word.push_back(s[i]);
            }
        }

    
        
        reverse(current_word);
        result += current_word;

        return result;
    }
};
