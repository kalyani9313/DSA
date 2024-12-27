class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        // Code here
        int n=arr.size();
        unordered_map<int, int> freq;
    int count = 0;

    for (int i = 0; i < n; i++) {
        int complement = target - arr[i];

        
        if (freq.find(complement) != freq.end()) {
            count += freq[complement];
        }

        freq[arr[i]]++;
    }

    return count;
    }
};
