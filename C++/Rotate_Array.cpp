/*Given an array, rotate the array to the right by k steps, where k is non-negative.*/

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int size = nums.size();
        int *newmass = new int[size];
        for (int i = 0; i < size; i ++) {
            newmass[(i + k) % size] = nums[i];
        } 
    
        for (int i = 0; i < size; i ++) {
            nums[i] = newmass[i];
        }
    }
};