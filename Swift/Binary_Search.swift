/*Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.
You must write an algorithm with O(log n) runtime complexity.*/

class Solution {
    func search(_ nums: [Int], _ target: Int) -> Int {
        var left = 0
        var right = nums.count - 1
        while (left <= right) {
            let mid = (right - left) / 2 + left
            guard nums[mid] != target else {return mid}
            (nums[mid] < target) ? (left = mid + 1) : (right = mid - 1)
        }
        return -1
    }
}