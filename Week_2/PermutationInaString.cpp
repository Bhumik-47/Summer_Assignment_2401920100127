/*
Question: Given two strings s1 and s2, return true if s2 contains a permutation of s1, or false otherwise.
In other words, return true if one of s1's permutations is the substring of s2.

Approach: uses a fixed-size sliding window equal to the length of s1. It updates a frequency array by adding the incoming character and removing the outgoing character at each step, checking if the window's character counts perfectly match s1's counts.

Time complexity: O(n1+n2)
Space Complexity: O(1)

 

*/

class Solution {
public:
bool checkequal(int a[26], int b[26]){
            for(int i=0; i<26; i++){
                if(a[i]!=b[i])
                return 0;
            }
            return 1;
        }
        
    bool checkInclusion(string s1, string s2) {
        int count1[26]={0};
        for(int i=0; i<s1.length(); i++){
            int index = s1[i] - 'a';
            count1[index]++;
        }
        int i=0;
        int windowSize = s1.length();
        int count2[26]={0};

        while(i < windowSize && i<s2.length()){
            int index = s2[i] - 'a';
            count2[index]++;
            i++;
        }
        if (checkequal(count1,count2))
        return 1;

        while(i<s2.length()){
            char newchar = s2[i];
            int index = newchar - 'a';
            count2[index]++;

            char oldchar = s2[i-windowSize];
            index = oldchar - 'a';
            count2[index]--;

            i++;

             if (checkequal(count1,count2))
        return 1;


        }
        return 0;
        
    }
};
