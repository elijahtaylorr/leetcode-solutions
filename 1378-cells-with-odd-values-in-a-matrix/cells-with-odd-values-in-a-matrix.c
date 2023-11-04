int oddCells(int m, int n, int** indices, int indicesSize, int* indicesColSize) {
    int rtn = 0;
    int **intArr = malloc(m*sizeof(int *));
    for(size_t i = 0; i < m; i++){
        intArr[i] = malloc(n*sizeof(int));
    }
    for(size_t i = 0;i < indicesSize; i++){
        int rowNum = indices[i][0];
        int colNum = indices[i][1];
        for(size_t col = 0;col < n; col++){
            intArr[rowNum][col]++;
            if(intArr[rowNum][col] % 2 == 0){
                rtn--;
            }else{
                rtn++;
            }
        }
        for(size_t row = 0;row < m; row++){
            intArr[row][colNum]++;
            if(intArr[row][colNum] % 2 == 0){
                rtn--;
            }else{
                rtn++;
            }
        }
    }
    return rtn;
}