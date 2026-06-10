/*
Question : Given two strings s and t, return true if s is a subsequence of t, or false otherwise...

Approach : Used a simple iterative approach to compare characters and finally return true if all the characters are matched in the increasing order in string t.

Time Complexity : O(n2)
Spce Complexity : O(1)

*/

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n1=s.size();
        int n2=t.size();
        int j=0;
        for(int i=0;i<n2;i++){
            if(t[i]==s[j]){
              
                j++;
            }
        }
        return j==n1;
    }
};
