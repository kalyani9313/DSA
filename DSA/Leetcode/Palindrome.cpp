class Solution {
public:
    int reverse(int x) {
        int revnum = 0;

        while (x != 0) {
            int dig = x % 10;

            //max integer in 32 bit is 7
            if (revnum > INT_MAX / 10 || (revnum == INT_MAX / 10 && dig > 7)) {
                return 0; 
            }
            //min last integer in 32 bit is  -8
            if (revnum < INT_MIN / 10 || (revnum == INT_MIN / 10 && dig < -8)) {
                return 0; 
            }

            revnum = revnum * 10 + dig;
            x = x / 10;
        }
        return revnum;
    }

    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        int revnum = reverse(x);
        return x == revnum;
    }
};
