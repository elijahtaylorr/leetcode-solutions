int kthFactor(int n, int k) {
    int kCounter = 0;
    for(size_t i = 1; i <= n; i++){
        if(n % i == 0){
            kCounter++;
            if(kCounter == k){
                return i;
            }
        }
    }
    return -1;
}