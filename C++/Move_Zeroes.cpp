/* Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements */


class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zero = 0;
        int i = 0;
        
        while (i < nums.size() - zero) {
            if (nums[i] == 0) {
                zero++;
                nums.push_back(0);
                nums.erase(nums.begin() + i);
            } else {
                i++;
            }      
        }
    }
};