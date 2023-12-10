class Solution:
    def isPalindrome(self, x: int) -> bool:
        
        if x < 0:
            return False;
        elif len(str(x)) == 1:
            return True
        else:
            intarray = list(str(x))
            max_idx = len(intarray) - 1;
            
            for idx in range((len(intarray) // 2)):
                if intarray[idx] != intarray[max_idx - idx]:
                    return False
                
            return True
            
            
        