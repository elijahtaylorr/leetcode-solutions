int getWinner(int* arr, int arrSize, int k) {
    int currentWinner = arr[0];
    int winCount = 0;

    if(k >= arrSize){
        int maxVal = 0;
        for(size_t i = 0; i < arrSize; i++){
            if(arr[i] > maxVal){
                maxVal = arr[i];
            }
        }
        return maxVal;
    }else if(k == 1){
        if(arr[0] > arr[1]){
            return arr[0];
        }
        return arr[1];
    }

    for (int i = 1; i < arrSize; i++) {
        if (arr[i] > currentWinner) {
            currentWinner = arr[i];
            winCount = 1;
        } else {
            winCount++;
        }
        
        if (winCount == k) {
            return currentWinner;
        }
    }
    
    return currentWinner;
}
