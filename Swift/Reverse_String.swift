/* Write a function that reverses a string. The input string is given as an array of characters s.

You must do this by modifying the input array in-place with O(1) extra memory. */

class Solution {
    func reverseString(_ s: inout [Character]) {
        for i in 0..<s.count / 2 {
            var temp = s[i]
            s[i] = s[s.count - 1 - i];
            s[s.count - 1 - i] = temp; 
        }
    }
}