/*Given a string s, find the length of the longest substring without repeating characters.*/


class Solution {
    func lengthOfLongestSubstring(_ s: String) -> Int {
        guard !s.isEmpty else {return 0}
        var j = 0
        var ans = 0
        var h = 0
        var mass:[Character] = []
        for i in s {
            while(mass.contains(i)) {
                mass.remove(at:0);
                j+=1
            }
            mass.append(i)
            ans = max(ans, h - j + 1)
            h+=1
        }
        return ans;
    }
}