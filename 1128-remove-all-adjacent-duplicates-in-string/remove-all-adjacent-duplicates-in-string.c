char* removeDuplicates(char* s) {
    size_t len = strlen(s);
    char* rtnStr = malloc((len + 1) * sizeof(char));

    int rtnLen = 0;
    for(size_t i = 0; i < len; i++) {
        if(rtnLen > 0 && rtnStr[rtnLen - 1] == s[i]) {
            rtnLen--;
        } else {
            rtnStr[rtnLen] = s[i];
            rtnLen++;
        }
    }
    rtnStr[rtnLen] = '\0';
    return rtnStr;
}
