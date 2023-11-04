/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
long long* sumOfThree(long long num, int* returnSize) {
    long long* threeCons = malloc(3*sizeof(long long));
    if (num % 3 != 0) {
        *returnSize = 0;
        return threeCons;
    }
    long long startNum = num-3;
    long long endNum = startNum/3;
    threeCons[0] = endNum;
    threeCons[1] = endNum+1;
    threeCons[2] = endNum+2;
    *returnSize = 3;

    return threeCons;
}