class Solution {
  public:
    // Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(vector<int> &arr) {
         
        int curr=0,maxsum=INT_MIN,n=arr.size();
        for(int i=0;i<n;i++)
        {
            curr += arr[i];
            maxsum=max(maxsum,curr);
            if(curr<0)
            {
                curr=0;
            }

        }
        return maxsum;
    
    }
};
