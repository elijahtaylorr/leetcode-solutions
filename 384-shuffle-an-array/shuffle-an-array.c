typedef struct {
    int* original;
    int* shuffled;
    int originalSize;
} Solution;

Solution* solutionCreate(int* nums, int numsSize) {
    Solution *sol = malloc(sizeof(Solution));
    sol->original = malloc(numsSize * sizeof(int));
    sol->shuffled = malloc(numsSize * sizeof(int));
    for (int i = 0; i < numsSize; ++i) {
        sol->original[i] = nums[i];
        sol->shuffled[i] = nums[i];
    }
    sol->originalSize = numsSize;
    srand((unsigned int)time(NULL)); // Seed the random number generator.
    return sol;
}

int* solutionReset(Solution* obj, int* retSize) {
    *retSize = obj->originalSize;
    memcpy(obj->shuffled, obj->original, obj->originalSize * sizeof(int));
    return obj->shuffled;
}

int* solutionShuffle(Solution* obj, int* retSize) {
    *retSize = obj->originalSize;
    for (int i = 0; i < obj->originalSize; ++i) {
        int j = i + rand() / (RAND_MAX / (obj->originalSize - i));
        int temp = obj->shuffled[i];
        obj->shuffled[i] = obj->shuffled[j];
        obj->shuffled[j] = temp;
    }
    return obj->shuffled;
}

void solutionFree(Solution* obj) {
    free(obj->original);
    free(obj->shuffled);
    free(obj);
}
