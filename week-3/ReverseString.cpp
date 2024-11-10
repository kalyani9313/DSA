class Solution {
  public:
    string reverseString(string& s) {
        // code here
    string reversed_s = "";
    for (int i = s.length(); i >= 0; --i) {
        reversed_s += s[i];  // Add each character from the end of `s` to `reversed_s`
    }
    return reversed_s;

    }
};