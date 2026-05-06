/******************************************************************************************************
In this problem, a String S is composed of lowercase alphabets and wildcard characters i.e. '?'. Here, '?' can be replaced by any of the lowercase alphabets. Now you have to classify the given String on the basis of following rules:

If there are more than 3 consonants together or more than 5 vowels together, the String is considered to be "BAD". A String is considered "GOOD" only if it is not “BAD”.

NOTE: String is considered as "BAD" if the above condition is satisfied even once. Else it is "GOOD" and the task is to make the string "BAD".
 

Example 1:

Input:
S = aeioup??
Output:
1
Explanation: The String doesn't contain more
than 3 consonants or more than 5 vowels together.
So, it's a GOOD string.
Example 2:

Input:
S = bcdaeiou??
Output:
0
Explanation: The String contains the
Substring "aeiou??" which counts as 7
vowels together. So, it's a BAD string.
******************************************************************************************************************/

class Solution {
  public:
    int isGoodorBad(string S) {
        // code here
        int con = 0;
        int vovels = 0;
        for(auto ch:S){
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
                vovels++;
                con=0;
            }else if(ch=='?'){
                con++;
                vovels++;
            }else{
                con++;
                vovels=0;
            }
            if(vovels>5 || con>3){
                return 0;
            }
        }
        return 1;
    }
};
