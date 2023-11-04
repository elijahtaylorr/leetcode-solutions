typedef struct {
    int n;
    int longestPrefix;
    char* uploaded; 
} LUPrefix;

LUPrefix* lUPrefixCreate(int n) {
    LUPrefix* obj = (LUPrefix*)malloc(sizeof(LUPrefix));
    obj->n = n;
    obj->longestPrefix = 0;
    obj->uploaded = calloc(n + 2, sizeof(char));
    return obj;
}

void lUPrefixUpload(LUPrefix* obj, int video) {
    obj->uploaded[video] = 1;
    
    while (obj->uploaded[obj->longestPrefix + 1]) {
        obj->longestPrefix++;
    }
}

int lUPrefixLongest(LUPrefix* obj) {
    return obj->longestPrefix;
}

void lUPrefixFree(LUPrefix* obj) {
    free(obj->uploaded);
    free(obj);
}