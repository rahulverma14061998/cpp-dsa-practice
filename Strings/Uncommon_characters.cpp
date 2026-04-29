class Solution {
  public:
    string uncommonChars(string& s1, string& s2) {
        // code here
       unordered_set<char> set1, set2;
        string ans = "";

        // Store characters of s1
        for(char ch : s1) {
            set1.insert(ch);
        }

        // Store characters of s2
        for(char ch : s2) {
            set2.insert(ch);
        }

        // Characters in s1 but not in s2
        for(char ch : set1) {
            if(set2.find(ch) == set2.end()) {
                ans += ch;
            }
        }

        // Characters in s2 but not in s1
        for(char ch : set2) {
            if(set1.find(ch) == set1.end()) {
                ans += ch;
            }
        }

        sort(ans.begin(), ans.end());

        return ans;
    }
};
