class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int n=operations.size();
        int X=0;
        for(int i=0;i<n;i++){
            for(char c: operations[i]){
                if(c=='+'){
                    X++;
                    break;
                }
                else if(c=='-'){
                   X--;
                    break;
                }
            }
        }
        return X;
    }
};