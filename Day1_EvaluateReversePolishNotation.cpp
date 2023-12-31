Problem link - https://leetcode.com/problems/evaluate-reverse-polish-notation/

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long long> st;
        int i =0;
        while(i<tokens.size()){
            if(tokens[i]=="+" || tokens[i]=="-" || tokens[i]=="*" || tokens[i]=="/"){
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                if(tokens[i]=="+") st.push(a+b);
                else if(tokens[i]=="-") st.push(b-a);
                else if(tokens[i]=="*") st.push(a*b);
                else  st.push(b/a);
            }
            else{
                st.push(stoi(tokens[i]));
            }
            i++;
        }
        return (int)st.top();
    }
};