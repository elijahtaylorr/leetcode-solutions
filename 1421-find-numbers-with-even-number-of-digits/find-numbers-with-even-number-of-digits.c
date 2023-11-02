int countDigits(int n)
{
    if (n == 0) {
        return 1;
    }
    int count = 0;
    while (n != 0){
        n = n / 10;
        ++count;
    }
    return count;
} 

int findNumbers(int* nums, int numsSize){
    int numCount = 0;
    for(size_t i = 0; i < numsSize; i++){
        if(countDigits(nums[i])%2 == 0) {
            numCount++;
        }
    }
    return numCount;
}

