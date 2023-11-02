/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int numsSize, int* returnSize){
    int *rtn = malloc(2 * numsSize * sizeof(int));
    for(size_t i = 0;i < numsSize;i++){
        printf("1. Setting %d to %d\n",i,nums[i]);
        rtn[i] = nums[i];
    }
    for(int i = numsSize;i < 2*numsSize;i++){
        printf("2. Setting %d to %d\n",i,nums[i-numsSize]);
        rtn[i] = nums[i-numsSize];
    }
    *returnSize = (2*numsSize);
    return rtn;
}