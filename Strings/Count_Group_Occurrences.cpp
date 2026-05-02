class Solution {
  public:
    int getCount(string s, int k) {
        // code here
        unordered_map<char,int> mp;
        int ans = 0;
        
        for(int i=0;i<s.length();i++){
            if(i==0 || s[i]!=s[i-1]){
                mp[s[i]]++;
            }
        }
        
        for(auto ch:mp){
            if(ch.second==k){
                ans++;
            }
        }
        
        return ans;
    }
};
