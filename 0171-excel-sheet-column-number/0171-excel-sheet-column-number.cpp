class Solution {
public:
    int titleToNumber(string columnTitle) {
        int n=columnTitle.size();
        int columnNumber=0;
        int pow=0;
        for(int i=n-1;i>=0;i--){
            int num=columnTitle[i]-'A'+1;
            int temp=1;
            for(int j=1;j<=pow;j++){
                temp*=26;
            }   
            pow++;
            columnNumber+=(temp*num);
        }
        return columnNumber;
    }
};