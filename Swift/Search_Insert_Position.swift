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