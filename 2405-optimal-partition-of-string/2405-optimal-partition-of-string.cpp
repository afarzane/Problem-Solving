class Solution {
public:
    int partitionString(string s) {
        
        vector<char> temp_str; // Temp string holder
        char temp_char; // Temp char holder for comparisons
        int counter = 0; // Final output
        
        // For each letter in the input string
        for(int i = 0; i < s.size(); i++){
            
            temp_char = s[i];
            if(temp_str.empty()){
                temp_str.push_back(temp_char);
            }else{
                for(int j = 0; j < temp_str.size(); j++){
                    if(temp_str[j] == temp_char){
                        counter++;
                        temp_str.clear();
                        break;
                    }
                }
                

                temp_str.push_back(temp_char);
                
            }
            
            
            if(i == s.size()-1){counter++;}
        }
        
        return counter;
    }
};