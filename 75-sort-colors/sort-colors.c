//Dutch national flag algorithm
void indSwap(int * arr, int ind1, int ind2) { 
    int temp = arr[ind1];
    arr[ind1] = arr[ind2];
    arr[ind2] = temp;
}   

void sortColors(int* nums, int numsSize) {
    int i = 0;
    int j = 0;
    int k = numsSize-1;
    while(j<=k){
        if(nums[j] == 0){
            indSwap(nums,i,j);
            i++;
            j++;
        }else if(nums[j] == 1){
            j++;
        }else if(nums[j] == 2){
            indSwap(nums,j,k);
            k--;
        }
    }
}