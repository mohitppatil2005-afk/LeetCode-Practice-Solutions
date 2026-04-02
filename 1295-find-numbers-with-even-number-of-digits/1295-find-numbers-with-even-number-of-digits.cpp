class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n=nums.size();
        int freq=0;
        for(int i=0;i<n;i++){
            int count=0;
            while(nums[i]!=0){
                 nums[i]/=10;
                 count+=1;
            }
            if(count%2==0){
             freq++;
            }
        }
        return freq;
    }
};