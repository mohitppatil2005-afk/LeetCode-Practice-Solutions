class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>s1;
        stack<char>s2;
        for(char c:s){
            s1.push(c);
        }
        while(!s1.empty()){
            if(!s2.empty() && s1.top()==s2.top()){
                s2.pop();
                s1.pop();
            }
            else{
                s2.push(s1.top());
                s1.pop();
            }
        }
        string result="";
        while(!s2.empty()){
            result+=s2.top();
            s2.pop();
        }
        return result;
    }
};