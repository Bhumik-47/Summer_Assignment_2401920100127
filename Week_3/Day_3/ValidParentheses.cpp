class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        int x=s.size();
        for(int i=0;i<x;i++){
            if(!st.empty()){
              if(s[i]==')')
               {
                if(st.top()=='(')
                st.pop();
                else 
                return false;
               }
               else if(s[i]=='}')
               {
                if(st.top()=='{')
                st.pop();
                else 
                return false;
               }
               else if(s[i]==']')
               {
                if(st.top()=='[')
                st.pop();
                else
                return false;
            }
            else 
            st.push(s[i]);
            }
            else
            st.push(s[i]);
        }
        if(st.empty())return true;
        return false;
    }
};
/*
Time complexity : O(n)
Space complexity : O(n)
*/