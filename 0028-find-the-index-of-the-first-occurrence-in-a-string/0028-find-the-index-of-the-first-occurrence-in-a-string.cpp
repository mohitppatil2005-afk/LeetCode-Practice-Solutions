class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=needle.size();
        int m=haystack.size();
        for(int i=0;i<=m-n;i++){
            bool ok=true;
            for(int j=0;j<n;j++){
                if(haystack[i+j]!=needle[j]){
                    ok=false;
                    break;
                }
            }
            if(ok){
                return i;
            }
        }   
        return -1;
    }
};