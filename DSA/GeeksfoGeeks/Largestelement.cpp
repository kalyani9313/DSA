class Solution {
  public:
    int largest(vector<int> &arr) {
        int max;
        int n=arr.size();

        for(int i = 0; i < n; i++) {
            if(max < arr[i])
                max = arr[i];  
        }

        return max; 
      }
};