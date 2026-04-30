class Solution {
  public:
    string convert(string& s) {
        // code here
        s[0]= toupper(s[0]);
        for(size_t i{1};i<s.length();i++){
            if(s[i-1] == ' '){
                s[i]=toupper(s[i]);
            }
        }
        return s;
    }
};
