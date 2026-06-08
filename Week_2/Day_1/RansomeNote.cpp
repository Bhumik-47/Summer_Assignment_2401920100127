/*
Question : Given two strings ransomNote and magazine, return true if ransomNote can be constructed by using the letters from magazine and false otherwise.
Each letter in magazine can only be used once in ransomNote

Approach : uses a frequency array to count the required characters from ransomNote (incrementing counts) and subtracts available characters from magazine (decrementing counts), finally checking if any required character count remains above zero.

Time Complexity : O(n1+n2)
Spce Complexity : O(1)
*/
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int n1 = ransomNote.size();
        int n2 = magazine.size();
        
        if(n1>n2)return false;

        vector<int>v(26,0);
        for(int i=0; i<n1; i++){
           v[ransomNote[i]-'a']++;
        }
        for(int i=0; i<n2; i++){
            v[magazine[i]-'a']--;
        }
        for(int i=0;i<26;i++){
            if(v[i]>0)return false;
        }
        return true;
    }
};
