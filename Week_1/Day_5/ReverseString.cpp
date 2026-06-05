/*
Question: Write a function that reverses a string. The input string is given as an array of characters s.
You must do this by modifying the input array in-place with O(1) extra memory.

Approach: Simply apply two pointer approach and swap the value at the pointers while i<=e as explained in the code.

Time complexity: O(n)
Space complexity: O(1)

 

*/
class Solution {
public:
    void reverseString(vector<char>& s) {
        int i=0,e=s.size()-1;
        while (i<=e){   
            swap(s[i],s[e]);
            i++;
            e--;
            
        }
    }
};
