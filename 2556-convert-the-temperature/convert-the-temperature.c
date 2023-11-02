/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
double* convertTemperature(double celsius, int* returnSize){
    double *tempArray = malloc(2*sizeof(double));
    tempArray[0] = celsius+273.15;
    tempArray[1] = celsius * 1.80 + 32.00;
    *returnSize = 2;
    return tempArray;
}