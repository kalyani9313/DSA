class Solution {
  public:
    vector<int> intersectionWithDuplicates(vector<int>& a, vector<int>& b) {
        // code here
         unordered_set<int> setA(a.begin(), a.end()); 
    unordered_set<int> result; 

    for (int element : b) {
        
        if (setA.find(element) != setA.end()) {
            result.insert(element);
        }
    }
    vector<int> intersection(result.begin(), result.end());
    return intersection;
    }
};
