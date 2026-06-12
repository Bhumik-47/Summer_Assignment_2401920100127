/*
Question : Given a string s, return the longest palindromic substring in s.

Approach : The code uses the Expand Around Center approach. It treats every character (for odd-length) and every gap between characters (for even-length) as a potential palindrome center, expanding outward as long as the matching characters on both sides are equal.

Time Complexity : O(n*n)
Space Complexity : O(n)

*/
class Solution {
public:
    string ex(int a , int b, string&s, int&n){
        while(a>=0 && b<n && s[a]==s[b]){
            a--;
            b++;
        }
        return s.substr(a+1,b-a-1);
    }
    string longestPalindrome(string s) {
        int n=s.size();
        string maxlen = s.substr(0,1);
        for(int i=0;i<n-1;i++){
            string evenlen = ex(i,i+1,s,n);
            string oddlen = ex(i,i,s,n);
            if(evenlen.size()>maxlen.size())
            maxlen = evenlen;
            if(oddlen.size()>maxlen.size())
            maxlen=oddlen;
        }
        
      return maxlen;
    }
};
