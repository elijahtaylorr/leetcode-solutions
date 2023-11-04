int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
    int left = 0, right = numsSize - 1;
    int* rtnArr = malloc(2 * sizeof(int));
    *returnSize = 2;
    rtnArr[0] = -1;
    rtnArr[1] = -1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2; 
        if (nums[mid] < target) {
            left = mid + 1;
        } else if (nums[mid] > target) {
            right = mid - 1;
        } else {
            rtnArr[0] = mid;
            right = mid - 1; 
        }
    }
    
    left = 0, right = numsSize - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] < target) {
            left = mid + 1;
        } else if (nums[mid] > target) {
            right = mid - 1;
        } else {
            rtnArr[1] = mid;
            left = mid + 1;
        }
    }
    
    return rtnArr;
}
