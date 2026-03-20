class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n=candies.size();
        int maxCandie=0;
        for(int i=0;i<n;i++){
            maxCandie=max(maxCandie,candies[i]);
        }
        vector<bool> arr(n);
        for(int i=0;i<n;i++){
            if((candies[i]+extraCandies)>=maxCandie){
                arr[i]=true;
            }
            else{
                arr[i]=false;
            }
        }
        return arr;
    }
};