// The API isBadVersion is defined for you.
// bool isBadVersion(int version);
class Solution {
public:
// The API isBadVersion is defined for you.
    int firstBadVersion(int n) {
        int left = 0;
        int right = n - 1;
        int key = 0;
        while(left <= right) {
            int mid = left + (right - left) / 2;
            if (isBadVersion(mid)) {
                right = mid - 1;
            } else if(!isBadVersion(mid) && isBadVersion(mid + 1)) {
                key =  mid + 1;
                break;
            } else if(!isBadVersion(mid) && !isBadVersion(mid + 1)) {
                left = mid + 1;
            }
        }
        return key;
    }
};