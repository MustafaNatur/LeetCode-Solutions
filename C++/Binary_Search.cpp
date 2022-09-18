/*Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.
You must write an algorithm with O(log n) runtime complexity.*/

#include <vector>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        int key = -1;
        while(left <= right) {
            int middle = (right - left + 1) / 2 + left;
            if (nums[middle] > target) {
                right = middle - 1;
            } else if(nums[middle] < target) {
                left = middle + 1;
            } else {
                key = middle;
                break;
            }
        }
        return key;
    }
};