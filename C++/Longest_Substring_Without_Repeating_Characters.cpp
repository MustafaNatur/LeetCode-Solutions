/*Given a string s, find the length of the longest substring without repeating characters.*/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.empty()) return 0;
        int i = 0, j = 0, max = 0;
        vector<char> set1;
        for (;i < s.length(); i++) {
            while (find(set1.begin(), set1.end(), s[i]) != set1.end()) {
                set1.erase(set1.begin());
                j++;                                           
            }
            set1.push_back(s[i]);
            if (i - j + 1 > max) {
                max = i - j + 1;
            }
        }
        return max;   
    }
};