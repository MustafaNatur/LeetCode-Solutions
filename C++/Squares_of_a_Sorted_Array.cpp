/* Given an integer array nums sorted in non-decreasing order, return an array of the squares
of each number sorted in non-decreasing order.*/
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> mass(nums.size());
        int left = 0;
        int right = nums.size() - 1;
        int a = nums.size() - 1;
        while(left != right) {
            if (nums[left]*nums[left] > nums[right]*nums[right]) {
                mass[a] = nums[left]*nums[left];
                left++;
            } else if (nums[left]*nums[left] < nums[right]*nums[right]) {
                mass[a] = nums[right] * nums[right];
                right--;
            } else if (nums[left]*nums[left] == nums[right]*nums[right]) {
                mass[a] = nums[right] * nums[right];
                left++;
            }
            a--;
        }
        mass[0] = nums[right] * nums[right];
        return mass;
    }
};


// Second interesting solution
class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        for(auto& i : A){
            i *= i;
        }
        
        sort(A.begin(), A.end());
        
        return A;
    }
};
