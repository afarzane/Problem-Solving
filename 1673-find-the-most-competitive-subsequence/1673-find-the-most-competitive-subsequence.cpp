class Solution {
public:
    vector<int> mostCompetitive(vector<int>& nums, int k) {
        
        int size = nums.size();
        vector<int> outvec;
        
        for(int i = 0; i < size; ++i){
            
            while(!outvec.empty() && outvec.back() > nums[i] && k-outvec.size() <= size - i - 1){
                outvec.pop_back();
            }
            
            if(outvec.size() < k){
                outvec.push_back(nums[i]);
            }
            
        }
    
        return outvec;
        
    }    
    
};