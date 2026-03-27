class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1 == "0" || num2 == "0") return "0";

        int n1=num1.size();
        int n2=num2.size();
        vector<int> ans(n1+n2,0);
        int space=0;
        for(int i=n1-1;i>=0;i--){
            int carry=0;
            for(int j=n2-1;j>=0;j--){
                int d1=num1[i]-'0';
                int d2=num2[j]-'0';
                int temp=d1*d2+carry+ans[i+j+1];
                ans[i+j+1]=temp%10;
                carry=temp/10;
            }
            ans[i]+=carry;
            space++;
        }
        string res="";
        int i=0;
        while(i<num1.size() && ans[i]==0) i++;
        for(;i<(n1+n2);i++){
            res+=to_string(ans[i]);
        }
        return res;
    }
};