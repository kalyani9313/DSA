class Solution {
public:
    int reverse(int x) {
      int revnum=0;

      while(x!=0)
      {
        int dig=x%10;
        if(revnum>INT_MAX/10 || revnum< INT_MIN/10)
        revnum=revnum*10+ dig;
        x=x/10;
    
      }  
      return revnum;
    }
};
