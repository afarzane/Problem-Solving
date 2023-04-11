class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        // Check if strings are equal first
        if(s1 == s2){return true;}
        
        // If not equal, check to make sure theyre of equal length
        if(s1.length() != s2.length()){return false;}
        
        // Continue to check if swap is possible
        vector<int> index;
        for(int i = 0; i<s1.size(); i++){
            if(s1[i] != s2[i]){
                index.push_back(i);
            }
        }
        // If there are only two different letters...
        if(index.size() == 2){
            if(s1[index[0]]==s2[index[1]] && s1[index[1]]==s2[index[0]]){return true;}
        }
        
        return false;
    }
};