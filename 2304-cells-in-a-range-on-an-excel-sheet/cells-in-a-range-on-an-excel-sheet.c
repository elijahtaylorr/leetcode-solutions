char ** cellsInRange(char * s, int* returnSize){
    int width = (int)(s[3] - s[0]) + 1;
    int height = (int)(s[4] - s[1]) + 1;

    char** rtnArray = malloc(width * height * sizeof(char *));
    *returnSize = width * height;

    int i = 0;
    for(char c = s[0]; c <= s[3]; ++c) {
        for(char r = s[1]; r <= s[4]; ++r) { 
            rtnArray[i] = malloc(3 * sizeof(char));
            snprintf(rtnArray[i], 4, "%c%c", c, r);
            ++i;
        }
    }
    return rtnArray;
}
