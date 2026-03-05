class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        char arr[s.size()];
        for(int i=0;i<indices.size();i++){
            arr[indices[i]]=s[i];
        }
        string res="";
        for(int i=0;i<s.size();i++){
            res+=arr[i];
        }
        return res;
    }
};