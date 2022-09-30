/* Given a string s, reverse the order of characters in each word within a sentence while still preserving whitespace and initial word order. */

class Solution {
public:
    string reverseWords(string s) {
        int left = 0;
        s+=" ";
        for (int i = 0; i < s.size(); i ++) {
            if (s[i] == ' ') {
                int right = i - 1;
                while(left < right) {
                    swap(s[left++],s[right--]);
                }
                left = i + 1;
            }
        }
        s.pop_back();
        return s;
    }
};