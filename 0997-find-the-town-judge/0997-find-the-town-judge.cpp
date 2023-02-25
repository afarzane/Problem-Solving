class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        
        vector<pair<int,int>> counter(n+1, {0,0}); // Initialize a counter
        int whoisjudge = -1; // Initialize the judge
        
        // Count if person trusts others and if others trust them
        for(int i=0; i < trust.size(); i++){
            counter[trust[i][0]].first += 1; 
            counter[trust[i][1]].second += 1;
        }

        // Find town judge
        for(int i=1; i <= n; i++){
            if(counter[i].first == 0 && counter[i].second == n-1){
                whoisjudge = i;
            }
        }
        return whoisjudge;
    }
};