class Solution {
  public:
    int findEquilibrium(vector<int> &arr) {
        // code here
        int totalSum = 0;
        for(auto num:arr){
            totalSum+=num;
        }
        
        int leftSum=0;
        
        for(size_t i=0;i<arr.size();i++){
            int rightSum = totalSum-leftSum-arr[i];
            if(leftSum==rightSum)
                return i;
            leftSum+=arr[i];
        }
        return -1;
    }
};
