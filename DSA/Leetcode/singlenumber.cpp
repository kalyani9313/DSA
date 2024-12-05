class Solution {
public:
    int singleNumber(vector<int>& nums) {
       int result = 0;
      int n=nums.size();
    for (int i = 0; i < n; i++) {
        result ^= nums[i];  // XOR all elements
    }
    return result;
 
    }
};
