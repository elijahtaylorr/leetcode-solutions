/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int numsSize, int* returnSize){
    int *rtn = malloc(2 * numsSize * sizeof(int));
    for(size_t i = 0;i < numsSize;i++){
        rtn[i] = nums[i];
    }
    for(int i = numsSize;i < 2*numsSize;i++){
        rtn[i] = nums[i-numsSize];
    }
    *returnSize = (2*numsSize);
    return rtn;
}