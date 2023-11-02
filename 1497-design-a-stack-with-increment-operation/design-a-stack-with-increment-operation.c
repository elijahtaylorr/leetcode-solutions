typedef struct {
    int *stack;
    int stackSize;
    int maxSize;
} CustomStack;

CustomStack* customStackCreate(int maxSize) {
    CustomStack *cStack = malloc(sizeof(CustomStack));
    if (!cStack) return NULL;
    cStack->stackSize = 0;
    cStack->maxSize = maxSize;
    cStack->stack = malloc(sizeof(int) * maxSize); 
    if (!cStack->stack) {
        free(cStack);
        return NULL;
    }
    return cStack;
}

void customStackPush(CustomStack* obj, int x) {
    if (obj->stackSize < obj->maxSize) { 
        obj->stack[obj->stackSize] = x;
        obj->stackSize++;
    }
}

int customStackPop(CustomStack* obj) {
    if (obj->stackSize == 0) {
        return -1;
    }
    obj->stackSize--;
    int tmp = obj->stack[obj->stackSize];
    return tmp;
}

void customStackFree(CustomStack* obj) {
    if (obj) {
        free(obj->stack);
        free(obj);
    }
}

void customStackIncrement(CustomStack* obj, int k, int val) {
    int limit = k < obj->stackSize ? k : obj->stackSize;
    for(int i = 0; i < limit; i++) {
        obj->stack[i] += val;
    }
}