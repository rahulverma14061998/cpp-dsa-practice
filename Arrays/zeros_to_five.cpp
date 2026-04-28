/*you are required to complete this method*/
class Solution {
  public:
    int convertFive(int n) {
        // Your code here
        if (n == 0) return 5;
        int digit = 0,place = 1;
        while(n!=0){
            int rem = n%10;
            if(rem==0){
                rem=5;
            }
            digit = digit + rem*place;
            place*=10;
            n/=10;
        }
        return digit;
    }
};
