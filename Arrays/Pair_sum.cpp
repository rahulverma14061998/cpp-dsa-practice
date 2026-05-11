class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        // code here
        unordered_set<int> s;
        for(int i=0; i<arr.size();i++){
            int needed = target - arr[i];
            if(s.find(needed)!=s.end()){
                return true;
            }
            
            s.insert(arr[i]);
        }
        return false;
    }
};
