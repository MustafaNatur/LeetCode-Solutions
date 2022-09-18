/* Given an integer array nums sorted in non-decreasing order, return an array of the squares
of each number sorted in non-decreasing order.*/

class Solution {
    func sortedSquares(_ nums: [Int]) -> [Int] {
        return nums.map({nums in nums * nums}).sorted()
    }
}