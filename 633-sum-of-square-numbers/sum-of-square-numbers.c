bool judgeSquareSum(int c) {
    long int left = 0, right = sqrt(c);
    while(left <= right){
        long int guess = left*left + right*right;
        if(guess>c){
            right--;
        } else if(guess<c){
            left++;
        } else {
            return true;
        }
    }
    return false;
}