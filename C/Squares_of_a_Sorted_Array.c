/* Given an integer array nums sorted in non-decreasing order, return an array of the squares
of each number sorted in non-decreasing order.*/
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* nums, int numsSize, int* returnSize){
    *returnSize = numsSize;
    int *mass = malloc(sizeof(int) * numsSize);
    
    int left = 0;
    int right = numsSize - 1;
    int a = numsSize - 1;
    
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