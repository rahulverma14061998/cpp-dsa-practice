class Solution {
  public:
    string modify(string& s) {
        // code here.
        string vovels = "";
        for(int i=0; i<s.length();i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                vovels+=s[i];
                s[i]=' ';
            }
        }
        reverse(vovels.begin(),vovels.end());
        int j=0;
        for(int i=0;i<s.length();i++){
            if(s[i]==' '){
                s[i]= vovels[j];
                j++;
            }
        }
        
        return s;
    }
};
