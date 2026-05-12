// User function template for C++

class Solution {
  public:
    vector<vector<int>> getPairs(vector<int>& arr) {
        // code here
        set<vector<int>> uniquePairs;
        unordered_set<int> seen;
        
        for(auto num:arr){
            int needed = -num;
            if(seen.find(needed)!=seen.end()){
                vector<int> pair = {min(num, needed),max(num, needed)};
                uniquePairs.insert(pair);
            }
            
            seen.insert(num);
        }
        
        vector<vector<int>> ans;
        
        for(auto num: uniquePairs){
            ans.push_back(num);
        }
        
        return ans;
    }
};
