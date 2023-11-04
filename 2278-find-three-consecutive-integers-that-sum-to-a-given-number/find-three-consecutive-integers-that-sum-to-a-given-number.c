/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
long long* sumOfThree(long long num, int* returnSize) {
    long long* threeCons = malloc(3*sizeof(long long));
    long long divisor = num/3;
    if (num % 3 != 0) {
        *returnSize = 0;
        return threeCons;
    }
    for(long long i = divisor; i < divisor+20; i++){
        if((i-2 + i-1 + i) == num){
            threeCons[0] = i-2;
            threeCons[1] = i-1;
            threeCons[2] = i;
            *returnSize = 3;
        }
    }
    return threeCons;
}