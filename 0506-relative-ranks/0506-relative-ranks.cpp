class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();

        vector<pair<int,int>> temp;

        for(int i=0;i<n;i++){
            temp.push_back({score[i], i});
        }

        sort(temp.rbegin(), temp.rend());

        vector<string> result(n);

        for(int i=0;i<n;i++){
            int idx = temp[i].second;

            if(i == 0) result[idx] = "Gold Medal";
            else if(i == 1) result[idx] = "Silver Medal";
            else if(i == 2) result[idx] = "Bronze Medal";
            else result[idx] = to_string(i+1);
        }

        return result;
    }
};