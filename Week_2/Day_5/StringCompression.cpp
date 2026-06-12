/*
Question : Given an array of characters chars, compress it using the following algorithm:.......

Approach : uses a two-pointer technique where one pointer (i) finds the bounds of each repeating character group, and another (ansLength) writes the character followed by its count (if greater than 1) directly back into the input array.
By updating i to the next unique character (j) at the end of each loop, it compresses the array in place without using extra space.

Time complexity : O(n)
Space complexity : O(1)

*/
class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0;
        int ansLength = 0;
        int n = chars.size();
        while(i<n){
            int j=i+1;
            while(j<n && chars[i] == chars[j]){
                  j++;
            }
            chars[ansLength++] = chars[i];

            int count = j-i;

            if(count>1){
                string cnt = to_string(count);
                for(char ch:cnt){
                    chars[ansLength++] = ch;
                }
            }
            i=j;


        }
        return ansLength;
    }
};
