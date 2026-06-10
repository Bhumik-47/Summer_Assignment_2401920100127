/*
Question : Given a string s, check if it can be constructed by taking a substring of it and appending multiple copies of the substring together.

Approach : Create a new string by doubling $s$ (s + s), then remove its very first and last characters to break the original boundaries.
If the original string s can still be found anywhere inside this ruined middle section, it means s is made of a repeating pattern

Time Complexitry : O(n)
Space Complexity : O(n)
*/
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string t=s+s;
        if(t.substr(1,t.size()-2).find(s)!=-1)
            return true;
        return false;
    }
};
