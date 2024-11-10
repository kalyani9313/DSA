class Solution {
  public:
    
    char nonRepeatingChar(string &s) {
        for (int i = 0; i < s.length(); i++) {
            bool norepeat = true;
            

            for (int j = 0; j < s.length(); j++) {
                if (i != j && s[i] == s[j]) {
                    norepeat = false;
                    break;
                }
            }
            
            
            if (norepeat) {
                return s[i];
            }
        }
        
        
        return -1;  
        
    }
};
