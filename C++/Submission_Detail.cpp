/* Given two strings s1 and s2, return true if s2 contains a permutation of s1, or false otherwise.

In other words, return true if one of s1's permutations is the substring of s2. */

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size()) return false;
        int arrs1[26] = {};
        int arrs2[26] = {};
        int len1 = s1.size();
        int len2 = s2.size();
        for (int i = 0; i < len1; i++) {
            arrs1[s1[i] - 'a']++;
        }
        for (int j = 0; j < len2 - len1 + 1; j++){
            for (int i = j; i < j + len1; i++) {
                arrs2[s2[i] - 'a']++;
            }
            
            if (isSame(arrs1, arrs2)) {
                return true;
            }
            fill_n(arrs2, 26, 0);
        }
        return false;
    }
    
    bool isSame(int *arr1, int *arr2) {
        for (int i = 0; i < 26; i ++) {
            if (arr1[i] != arr2[i]) {return false;}
        }
        return true;
    }
};