/*
Question: Given an array of strings strs, group the anagrams together. You can return the answer in any order.

Approach: This approach sorts each string alphabetically to create a standardized "key" that identifies its anagram family. It then uses a hash map to group all original strings that share the same sorted key, returning the grouped values at the end.

Time complexity: O(N*Llog(L)) [N: Number of strings , L : Maximum Length of a string]
Space complexity: O(N*L)



*/
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        for(auto y:strs){
            string w = y;
            sort(w.begin(),w.end());
            mp[w].push_back(y);
        }
        vector<vector<string>>ans;
        for(auto h:mp)
            ans.push_back(h.second);
        return ans;
    }
};
