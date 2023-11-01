int highestBelowNum(long long int num, int* array, int arraySize){
    int highestInd = -1;
    long long int highestVal = LLONG_MIN;
    for(size_t i = 0; i < arraySize; i++){
        if(array[i] > highestVal && array[i] <= num){
            highestVal = array[i];
            highestInd = i;
        }
    }
    return highestInd;
}

int compareFunction(const void * a, const void * b) {
   return (*(int*)a - *(int*)b);
}

bool asteroidsDestroyed(long long int mass, int* asteroids, int asteroidsSize){
    qsort(asteroids, asteroidsSize, sizeof(int), compareFunction);

    for (int i = 0; i < asteroidsSize; i++) {
        if (mass < asteroids[i]) {
            return false;
        }
        mass += asteroids[i]; 
    }
    return true; 
}

