/* Given a string s, reverse the order of characters in each word within a sentence while still preserving whitespace and initial word order. */


class Solution {
    func reverseWords(_ s: String) -> String {
        return s.components(separatedBy: " ").map{String($0.reversed())}.joined(separator: " ")
    }
}