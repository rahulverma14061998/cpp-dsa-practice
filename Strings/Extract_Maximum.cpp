class Solution {
  public:

    int extractMaximum(string S) {
        // code here.
        int maxValue = -1;
        int currentValue = 0;
        bool found = false;
        
        for(int i=0;i<S.length();i++){
            if(isdigit(S[i])){
                found = true;
                currentValue= currentValue*10 + (S[i]-'0');
            }else{
                maxValue = max(maxValue,currentValue);
                currentValue = 0;
            }
        }
        maxValue = max(maxValue,currentValue);
        return found? maxValue:-1;
    }
};
