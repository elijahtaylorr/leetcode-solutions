char * mergeAlternately(char * word1, char * word2){
    int word1Len = strnlen(word1,100);
    int word2Len = strnlen(word2,100);
    char *merged = malloc((word1Len+word2Len)*sizeof(char)+1);
    bool word1Turn = true;
    int word1C = 0;
    int word2C = 0;
    int totalLen = 0;
    while(totalLen != (word1Len+word2Len)){
        if(word1Turn){
            if(word1C < word1Len){
                merged[totalLen++] = word1[word1C++];
            }
            word1Turn = false;
        }else{
            if(word2C < word2Len){
                merged[totalLen++] = word2[word2C++];
            }
            word1Turn = true;
        }
    }
    merged[(word1Len+word2Len)*sizeof(char)] = '\0';
    return merged;
}