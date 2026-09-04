class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        for(auto& c : s){
            if(!stk.empty()){
                if(stk.top() =='(' && c == ')'){
                    stk.pop();
                }else if(stk.top() =='{' && c == '}'){
                    stk.pop();
                }else if(stk.top() =='[' && c == ']'){
                    stk.pop();
                }else{
                    stk.push(c);
                }
            }else{
                stk.push(c);
            }

        }
        return stk.empty();
    }
};