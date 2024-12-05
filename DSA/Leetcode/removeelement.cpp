class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
           int k = 0;  
           int n=nums.size();
    for (int i = 0; i < n; ++i) {
        if (nums[i] != val) {
            //nums[i]=k;
            //k++;
           // nums[i] = val; 
           //nums[i]=nums[k];
           nums[k]=nums[i];
            //return k;
             k++;
 
        }
    }
    return k;  
 
    }
};
