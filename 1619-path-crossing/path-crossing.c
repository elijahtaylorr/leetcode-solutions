
bool checkVisited(int** visited, int visitedSize, int x, int y) {
    bool isVisited = false;
    for(size_t i = 0; i < visitedSize; i++){
        if(visited[i][0] == x && visited[i][1] == y){
            isVisited = true;
        }
    }
    return isVisited;
}

bool isPathCrossing(char* path) {
    int visitedSize = 1;
    int ** visited = malloc(visitedSize * sizeof(int *));
    int curX = 0;
    int curY = 0;
    visited[0] = malloc(2 * sizeof(int));
    visited[0][0] = 0;
    visited[0][1] = 0;
    char curChr = path[0];
    for(size_t i = 0; i < strnlen(path,10000);i++){
        curChr = path[i];
        if(curChr == 'N'){
            curY++;
        }else if(curChr == 'S'){
            curY--;
        }else if(curChr == 'E'){
            curX++;
        }else if(curChr == 'W') {
            curX--;
        }
        if (checkVisited(visited,visitedSize-1,curX,curY)){
            return true;
        }
        visitedSize++;
        visited = realloc(visited,visitedSize * sizeof(int *));
        visited[visitedSize-1] = malloc(2 * sizeof(int));
        visited[visitedSize-1][0] = curX;
        visited[visitedSize-1][1] = curY;
    }
    return false;
}
