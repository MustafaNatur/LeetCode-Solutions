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