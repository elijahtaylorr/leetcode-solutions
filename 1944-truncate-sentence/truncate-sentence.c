char * truncateSentence(char * s, int k){
    size_t sLen = strnlen(s,500);
    int kCnt = 0;
    for(size_t i = 0; i < sLen; i++){
        if(s[i] == ' '){
            kCnt++;
        }
        if(kCnt == k){
            s[i] = '\0';
            return s;
        }
    }
    return s;
}