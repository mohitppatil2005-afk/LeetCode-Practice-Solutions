class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if(n==0) return 1;
        int ans=10;
        int digits=9;
        int avaliable=9;
        for(int i=2;i<=n && avaliable>0;i++){
            digits*=avaliable;
            ans+=digits;
            avaliable--;
        }
        return ans;
    }
};