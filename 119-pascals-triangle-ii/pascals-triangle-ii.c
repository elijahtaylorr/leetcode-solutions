int* getRow(int rowIndex, int* returnSize) {
    int *arr = malloc((rowIndex + 1) * sizeof(int));
    arr[0] = 1;

    for (int line = 0; line <= rowIndex; line++) {
        long C = 1;
        for (long i = 1; i <= line; i++) {
            C = C * (line - i + 1) / i;
            arr[i] = C;
        }
    }
    *returnSize = rowIndex + 1;
    return arr;
}
