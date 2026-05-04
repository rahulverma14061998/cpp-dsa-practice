class Solution {
  public:

    string modify(string& s) {
        // your code here
        if(97<=s[0] && s[0]<=122){
            transform(s.begin(),s.end(),s.begin(),::tolower);
        }else{
            transform(s.begin(),s.end(),s.begin(),::toupper);
        }
        return s;
    }
};
