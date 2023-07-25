class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        int s=0;
        int e=n-1;
         int m=s+(e-s)/2;
         int ans=0;
        while(s<=e){
              if(arr[m-1]<arr[m] && arr[m]>arr[m+1]){
                    ans=m;
                    break;
              }
              else if(arr[m-1]>arr[m] && arr[m]>arr[m+1]){
                   e=m;
              }
              else{
                           s=m;
              }
               m=s+(e-s)/2;
        }
        return ans ;
    }
};