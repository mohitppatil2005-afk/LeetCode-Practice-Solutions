class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()==t.size()){
            int arrs[26]={0};
            int arrt[26]={0};
            for(char c:s){
                arrs[c-'a']+=1;
            }
            for(char c:t){
                arrt[c-'a']+=1;
            }
            for(int i=0;i<26;i++){
                if(arrs[i]!=arrt[i]){
                    return false;
                }
            }
            return true;
        }
        else{
           return false;
        }
    }
};