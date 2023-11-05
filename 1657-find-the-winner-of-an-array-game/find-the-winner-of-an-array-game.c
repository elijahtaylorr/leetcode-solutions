int getWinner(int* arr, int arrSize, int k) {
    int currentWinner = arr[0];
    int winCount = 0;

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
