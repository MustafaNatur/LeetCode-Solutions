/*You are a product manager and currently leading a team to develop a new product. Unfortunately, the latest version of your product fails the quality check. Since each version is developed based on the previous version, all the versions after a bad version are also bad.
Suppose you have n versions [1, 2, ..., n] and you want to find out the first bad one, which causes all the following ones to be bad.
You are given an API bool isBadVersion(version) which returns whether version is bad. Implement a function to find the first bad version. You should minimize the number of calls to the API.*/

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