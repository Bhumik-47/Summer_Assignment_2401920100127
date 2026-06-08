/*
Question : Given two strings s and t, return true if t is an anagram of s, and false otherwise.

Approach : Created a fixed size vector of size 27 that will increase the frequency of each character in s by 1 and decrease the frequency of each 
character in t by 1 . Finally loop through the vector and return false if a mismatch is found otherwise true.

Time Complexity : O(n)
Space Complexity : O(1)



*/


class Solution {
public:
    bool isAnagram(string s, string t) {
        int n1=s.size();
        int n2=t.size();
        if(n1!=n2)return false;
        vector<int>v(27,0);
        for(int i=0;i<n1;i++){
            v[s[i]-'a']++;
            v[t[i]-'a']--;
        }
        for(int i=0;i<27;i++){
            if(v[i]!=0)return false;
        }
        return true;
    }
};
