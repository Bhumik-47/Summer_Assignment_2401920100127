/*
Question: Given two strings s and p, return an array of all the start indices of p's anagrams in s. You may return the answer in any order.

Approach: It uses a fixed-size sliding window matching the length of string p to track character frequencies in s. 
As the window slides forward by one character, it includes the new character, discards the trailing one, and directly compares the frequency arrays to find matching anagram positions.

Time complexity: O(n) [n is the length of s]
Soace Complexity: O(1)
*/
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

        vector<int> ans;

        if(s.size() < p.size())
            return ans;

        vector<int> a(26,0), b(26,0);

        for(char ch : p)
            b[ch-'a']++;

        int k = p.size();

        for(int i=0;i<k;i++)
            a[s[i]-'a']++;

        if(a==b)
            ans.push_back(0);

        for(int i=k;i<s.size();i++) {

            a[s[i]-'a']++;

            a[s[i-k]-'a']--;

            if(a==b)
                ans.push_back(i-k+1);
        }

        return ans;
    }
};
