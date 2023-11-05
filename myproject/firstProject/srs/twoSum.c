#include<stdio.h>
#include<stdlib.h>

int* twoSum(int* nums,int numsSize, int target, int* returnSize) {
    int* result = malloc(2 * sizeof(int)); // Allocate memory for the result array
    // Code to find two numbers that add up to the target value

    *returnSize = 2; // Set the size of the returned array
    for (int i = 0; i < numsSize; i++){
        for (int j = i + 1; j < numsSize; j++){
            if (nums[i] + nums[j] == target){
                
                result[0] = i;
                result[1] = j;
                return result;
            }
            
        }
    }
    return NULL;
}

int main() {
    int nums[] = {7, 4, 5, 6, 7, 8};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int target = 184;
    int returnSize = 0;
    int* result = twoSum(nums, numsSize, target, &returnSize);

    // Code to use the result array
    printf("[%d,%d]",result[0],result[1]);
    free(result); // Remember to free the allocated memory
    return 0;
}