// User function Template for C++

class Solution {
  public:
    vector<int> removeDuplicate(vector<int>& arr) {
        // code here
        unordered_set<int> s;
        vector<int> ans;
        for(auto x:arr){
            if(!s.count(x)){
                s.insert(x);
                ans.push_back(x);
            }
        }
        return ans;
    }
};
