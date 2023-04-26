class Solution {
public:
    
     vector<int> mostCompetitive(vector<int>& nums, int k) {
        int size = nums.size();
        vector<int> outvec;
        for(int i = 0; i < size; ++i){
            while(!outvec.empty() && outvec.back() < nums[i] && k-outvec.size() <= size - i - 1){
                outvec.pop_back();
            }
            
            if(outvec.size() < k){
                outvec.push_back(nums[i]);
            }
        }
        return outvec; 
    }    
    
    bool greaterthan(vector<int>& vec1, vector<int>& vec2, int a, int b){
        while(a < vec1.size() || b < vec2.size()){
            if(a >= vec1.size()){return false;}
            else if(b >= vec2.size()){return true;}
            else if(vec1[a] < vec2[b]){return false;}
            else if(vec1[a] > vec2[b]){return true;}
            else{++a;++b;}
        }
        return true;
    }
    
    vector<int> maxNumber(vector<int>& nums1, vector<int>& nums2, int k) {
        
        vector<int> final_vec(k, 0);
        
        for(int i = 0; i <= k; ++i){
            int j = k - i;
            if(i > nums1.size() || j > nums2.size()){continue;}
            vector<int> vec1 = mostCompetitive(nums1, i);
            vector<int> vec2 = mostCompetitive(nums2, j);
            vector<int> output;
            int a = 0;
            int b = 0;
            while(a < vec1.size() || b < vec2.size()){
                if(a >= vec1.size()){output.push_back(vec2[b++]);}
                else if(b >= vec2.size()){output.push_back(vec1[a++]);}
                else if(vec1[a] < vec2[b]){output.push_back(vec2[b++]);}
                else if(vec1[a] > vec2[b]){output.push_back(vec1[a++]);}
                else if(greaterthan(vec1,vec2,a,b)){output.push_back(vec1[a++]);}
                else{output.push_back(vec2[b++]);}
            }   
            
            if(output > final_vec){
                final_vec = output;
            }
        }
        
        return final_vec;
        
    }
};