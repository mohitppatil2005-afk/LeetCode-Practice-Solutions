class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count=0;
        int freq[26]={0};
        int freq1[26]={0};
        for(char c:jewels){
             if(isupper(c)){
                freq1[c-'A']=1;
            }
            else{
                freq[c-'a']=1;
            }   
        }
        for(int i=0;i<stones.size();i++){
            if(isupper(char(stones[i])) && freq1[char(stones[i])-'A']==1){
                count++;
            }
            else if(islower(char(stones[i])) && freq[char(stones[i])-'a']==1){
                count++;
            }
        }
        return count;
    }
};