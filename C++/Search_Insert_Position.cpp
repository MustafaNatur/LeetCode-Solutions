/*Given a sorted array of distinct integers and a target value, return the index if the target is found.
If not, return the index where it would be if it were inserted in order.
You must write an algorithm with O(log n) runtime complexity.*/
#include <vector>
using namespace std;
class Solution {
public:
    int searchInsert(vector<int>& nums, int target){
        int left = 0;
        int right = nums.size() - 1;
        int mid = 0;
        while(left <= right) {
            mid = left + (right - left) / 2 ;
            if (nums[mid] > target) {
                right = mid - 1;
            } else if (nums[mid] < target){
                left = mid + 1;
            } else if (nums[mid] == target ) {
                return mid;
            }
        }
        return nums[mid] > target ? mid:mid+1;
    }
};