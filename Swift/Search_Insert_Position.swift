/*Given a sorted array of distinct integers and a target value, return the index if the target is found.
If not, return the index where it would be if it were inserted in order.
You must write an algorithm with O(log n) runtime complexity.*/

class Solution {
    func searchInsert(_ nums: [Int], _ target: Int) -> Int {
        for (i, num) in nums.enumerated() {
            if target <= num {
                return i
            }
        }
        return nums.count
    }
}