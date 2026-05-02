class Solution {
  public:
    string merge(string s1, string s2) {
        // code here
        string ans = "";
        int i=0,j=0;
        while(i<s1.length() && j<s2.length()){
            ans+=s1[i];
            ans+=s2[j];
            i++;
            j++;
        }
        
        while(i<s1.length()){
            ans+=s1[i];
            i++;
        }
        while(j<s2.length()){
            ans+=s2[j];
            j++;
        }
        return ans;
    }
};
