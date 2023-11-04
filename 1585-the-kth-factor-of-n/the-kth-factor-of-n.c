int kthFactor(int n, int k) {
    for(size_t i = 1; i <= n; i++){
        if(n % i == 0){
            k--;
            if(k == 0){
                return i;
            }
        }
    }
    return -1;
}