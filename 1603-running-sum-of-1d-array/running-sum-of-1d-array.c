/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize){
    int sum = 0;
    int *sumArray = malloc(numsSize*sizeof(int));
    for(size_t i = 0; i < numsSize;i++){
        sumArray[i]= nums[i]+sum;
        sum+= nums[i];
    }
    *returnSize = numsSize;
    return sumArray;
}