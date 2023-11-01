int cmpfunc(const void * a, const void * b) {
   return ( *(int*)b - *(int*)a );
}

int minimumCost(int* cost, int costSize){
    int totalCost = 0;
    qsort(cost, costSize, sizeof(int), cmpfunc);
    for(size_t i = 0; i < costSize; i++){
        if((i+1)%3 == 0){
            continue;
        }
        totalCost+= cost[i];
    }
    return totalCost;
}