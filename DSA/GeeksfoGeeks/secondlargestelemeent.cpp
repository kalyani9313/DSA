class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        int max=-1,second=-1;
        int n=arr.size();

        for(int i = 0; i < n;i++) {
            if(max < arr[i])
                max = arr[i];  
        }

    for(int i=0;i<n;i++)
    {
        if( arr[i]>second && arr[i]<max )
        {
            second=arr[i];
        }
    }
    return second;
      }
    
};