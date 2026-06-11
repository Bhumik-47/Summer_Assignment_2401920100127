/*
Question: Given an encoded string, return its decoded string.
The encoding rule is: k[encoded_string], where the encoded_string inside the square brackets is being repeated exactly k times. Note that k is guaranteed to be a positive integer.

Approach: using a recursive DFS approach, where meeting a [ triggers a new recursive call to decode the inner nested substring. When a matching ] is hit, it returns the decoded segment back to the parent call, which multiplies it by the parsed coefficient and appends it to the result.

Time Complexity: O(n) where n is the final decoded length
Space Complexity: O(n) for recursion stack and result string


*/

class Solution {
public:
    string decodeString(string s) {
        int i = 0;
        return decode(s, i);
    }

    string decode(const string& s, int& i) {
      string result = "";
      int num = 0;
      while(i < s.size()) {
        char c = s[i];
        if (isdigit(c)) {
          num = num * 10 + (c - '0'); 
          i++;
        } else if (c == '[') {
          i++;
          string inner = decode(s, i);
          for (int k = 0; k < num; k++) result += inner;
          num = 0;
        } else if (c == ']') {
          i++;
          return result;
        } else {
          result += c;
          i++;
        }
      }
      return result;
    }
};
