/**
 * The knows API is defined in the parent class VersionControl.
 *     func isBadVersion(_ version: Int) -> Bool{}
 */

class Solution : VersionControl {
    func firstBadVersion(_ n: Int) -> Int {
        var left = 0
        var key = 0
        var right = n - 1
        while(left <= right) {
            var mid = left + (right - left) / 2
            if (isBadVersion(mid)) {
                right = mid - 1
            } else if(!isBadVersion(mid) && isBadVersion(mid + 1)) {
                key =  mid + 1
                break;
            } else if(!isBadVersion(mid) && !isBadVersion(mid + 1)) {
                left = mid + 1
            }
        }
        return key
    }
}