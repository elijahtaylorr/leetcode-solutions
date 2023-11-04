bool threeConsecutiveOdds(int* arr, int arrSize) {
    if(arrSize < 3){return false;}
    int one,two,three = 0;
    for(size_t i = 2; i < arrSize; i++){
        one = arr[i-2];
        two = arr[i-1];
        three = arr[i];
        if(one % 2 != 0 && two % 2 != 0 && three % 2 != 0){
            return true;
        }
    }
    return false;
}