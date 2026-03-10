class Solution {
public:
    bool isValid(string s) {
        stack<char> ch;
        for(char c:s){
            if(!ch.empty() && ch.top()=='(' && c==')'){
                ch.pop();
            }
            else if(!ch.empty() && ch.top()=='{' && c=='}'){
                ch.pop();
            }
            else if(!ch.empty() && ch.top()=='[' && c==']'){
                ch.pop();
            }
            else{
                ch.push(c);
            }

        }
        if(ch.empty()){
            return true;
        }
        else{
            return false;
        }
    }
};