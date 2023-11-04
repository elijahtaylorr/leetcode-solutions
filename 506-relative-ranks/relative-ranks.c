int cmpfunc (const void * a, const void * b) {
    return *(int*)b - *(int*)a;
}

int* copyArray(const int* src, int size) {
    int* dest = malloc(size * sizeof(int));
    for (int i = 0; i < size; ++i) {
        dest[i] = src[i];
    }
    return dest;
}

char** findRelativeRanks(int* score, int scoreSize, int* returnSize) {
    int* sortedScores = copyArray(score, scoreSize);
    qsort(sortedScores, scoreSize, sizeof(int), cmpfunc);

    char** rtnArr = malloc(scoreSize * sizeof(char*));
    
    int* rankMap = malloc(scoreSize * sizeof(int));
    for (int i = 0; i < scoreSize; ++i) {
        for (int j = 0; j < scoreSize; ++j) {
            if (sortedScores[i] == score[j]) {
                rankMap[j] = i;
                break;
            }
        }
    }
    for (int i = 0; i < scoreSize; ++i) {
        int rank = rankMap[i];
        if (rank == 0) {
            rtnArr[i] = strdup("Gold Medal");
        } else if (rank == 1) {
            rtnArr[i] = strdup("Silver Medal");
        } else if (rank == 2) {
            rtnArr[i] = strdup("Bronze Medal");
        } else {
            int length = snprintf(NULL, 0, "%d", rank + 1);
            rtnArr[i] = malloc((length + 1) * sizeof(char));
            sprintf(rtnArr[i], "%d", rank + 1);
        }
    }
    *returnSize = scoreSize;
    return rtnArr;
}
