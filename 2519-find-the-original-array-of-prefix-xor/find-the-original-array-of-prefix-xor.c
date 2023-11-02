/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findArray(int* pref, int prefSize, int* returnSize){
    int *rtn = malloc(prefSize*sizeof(int));
    rtn[0] = pref[0];
    for(size_t i = 1; i < prefSize; i++){
        rtn[i] = pref[i] ^ pref[i-1];
    }
    *returnSize = prefSize;
    return rtn;
}