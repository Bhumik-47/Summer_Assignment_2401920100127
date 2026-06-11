/*
Question: Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses

Approach: 
Choice-Based Exploration: At each step, you can safely append an opening parenthesis ( if you have any left, or a closing parenthesis ) if there are more open ones currently in use than closed ones.
Base Case Success: When both your remaining open and close counts reach zero, you've successfully constructed a valid, well-formed combination and can store it.

Time Complexity: O(4^N/√N)
Space Complexity: O(N)
*/  
class Solution {
public:
    void solve(string op, int open, int close, vector<string> &ans){
        if(open == 0 && close == 0){
            ans.push_back(op);
            return;
        }
        
        if(open == close){
            string op1 = op;
            op1.push_back('(');
            solve(op1, open-1, close, ans);
        }
        else if(open == 0){
            
            string op1 = op;
            op1.push_back(')');
            solve(op1, open, close-1, ans);
        }
        else if(close == 0){
            
            string op1 = op;
            op1.push_back('(');
            solve(op1, open-1, close, ans);
        }
        else{
            string op1 = op;
            string op2 = op;
            op1.push_back('(');
            solve(op1, open-1, close, ans);
            op2.push_back(')');
            
            solve(op2, open, close-1, ans);
        }
    }
    vector<string> generateParenthesis(int n) {
        int open = n;
        int close = n;
        vector<string> ans;
        string op = "";
        solve(op, open, close, ans);
        return ans;
    }
};
