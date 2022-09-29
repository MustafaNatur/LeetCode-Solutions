/* Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements */

class Solution {
    func moveZeroes(_ nums: inout [Int]) {
        var i = 0
        var counter = 0
        while i < nums.count - counter {
            if nums[i] == 0 {
                counter += 1
                nums.append(0)
                nums.remove(at: i)
            } else {
                i += 1
            }
        }
    }
}