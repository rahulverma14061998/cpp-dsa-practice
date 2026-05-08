class Solution {
  public:
    int firstSearch(vector<int> &arr, int k) {
        // code here
        int low = 0,high = arr.size()-1,ans=-1;
        while(low<=high){
            int mid = low+ (high-low)/2;
            if(arr[mid]==k){
                ans = mid;
                high = mid-1;
            }
            if(arr[mid]<k){
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
        return ans;
    }
};
