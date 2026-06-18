
class Solution {
public:
    int evalRPN(std::vector<std::string>& tokens) {
        stack<int> st;
        
        for (const std::string& token : tokens) {
            
            if (token == "+" || token == "-" || token == "*" || token == "/") {
               
                int n2 = st.top(); st.pop();
               
                int n1 = st.top(); st.pop();
                
                if (token == "+") st.push(n1 + n2);
                else if (token == "-") st.push(n1 - n2);
                else if (token == "*") st.push(n1 * n2);
                else if (token == "/") st.push(n1 / n2);
            } else {
                
                st.push(stoi(token));
            }
        }
        
        return st.top();
    }
};

/*
Time complexity : O(n)
Space complexity : O(n)

*/