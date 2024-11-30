class Solution{
public:
    // Function is to check whether two strings are anagram of each other or not.
    bool areAnagrams(string& s1, string& s2) {
        // Your code here
        
    if (s1.length() != s2.length())
        return false;

    
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

   
    return s1 == s2;

    }
};
