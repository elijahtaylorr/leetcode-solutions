// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

int firstBadVersion(int n) {
    double left = 0, right = n;
    double mid = (left + right)/2;
    while(left < right){
        bool isBad = isBadVersion(mid);
        if(isBad){
            right = mid;
        }else{
            left = mid + 1;
        }
        mid = (left + right)/2;
    }
    return (int)mid;
}