class Solution {
  public:
    int firstRepeated(vector<int> &arr) {
        // code here
        unordered_map<int, int>freq;
        for(auto num:arr){
            freq[num]++;
        }
        
        for(int i=0;i<arr.size();i++){
            if(freq[arr[i]]>1){
                return i+1;
            }
        }
        
        return -1;
        
    }
};
