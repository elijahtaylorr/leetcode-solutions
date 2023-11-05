/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

bool* prefixesDivBy5(int* nums, int numsSize, int* returnSize) {
    bool* rtnArr = malloc(numsSize*sizeof(bool));
    int num = 0;

    for(int i = 0; i < numsSize; i++){
        num = (num * 2 + nums[i]) % 5;
        rtnArr[i] = (num == 0);
    }
    *returnSize = numsSize;
    return rtnArr;
}