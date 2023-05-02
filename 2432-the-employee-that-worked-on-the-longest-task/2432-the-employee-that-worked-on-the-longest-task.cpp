class Solution {
public:
    int hardestWorker(int n, vector<vector<int>>& logs) {
        
        int id = logs[0][0];
        int time = logs[0][1];
        int temp_time;
        
        for(int i = 1; i < logs.size(); i++){
            temp_time = logs[i][1]-logs[i-1][1];
            if(temp_time == time){
                if(logs[i][0] < id){
                    id = logs[i][0];
                    time = temp_time;
                }
            }else if(temp_time > time){
                id = logs[i][0];
                time = temp_time;
            }
        }
        
        return id;
    }
};