class Solution {

  public:
    vector<int> alternateSort(vector<int>& arr) {
        // Your code goes here
        sort(arr.begin(),arr.end());
        int left = 0;
        int right =arr.size()-1;
        vector<int> ans;
        while(left<=right){
            if(left!=right){
                ans.push_back(arr[right]);
                ans.push_back(arr[left]);
            }else{
                ans.push_back(arr[left]);
            }
            left++;
            right--;
        }
        return ans;
    }
};
