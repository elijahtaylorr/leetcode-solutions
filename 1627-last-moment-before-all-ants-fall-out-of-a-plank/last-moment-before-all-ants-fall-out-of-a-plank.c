int max(int one, int two){
    if(one > two){
        return one;
    }
    return two;
}

int getLastMoment(int n, int* left, int leftSize, int* right, int rightSize) {
    int time = 0;
    for(size_t i = 0; i < leftSize; i++){
        time = max(time, left[i]);
    }

    for(size_t i = 0; i < rightSize; i++){
        time = max(time, n-right[i]);
    }

    return time;
}