int smallestEqual(int* nums, int numsSize){
    int idx = 101;
    int min = INT_MIN;
    for(size_t i = 0; i < numsSize; i++){
        if (i%10==nums[i]){
            if(i < idx){
                idx = i;
            }
        }
    }
    if(idx == 101){
        idx = -1;
    }
    return idx;
}