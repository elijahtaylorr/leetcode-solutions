int maxDistance(int* colors, int colorsSize){
    int maxDist = 0;
    for(size_t a = 0;a < colorsSize;a++){
        for(size_t b = 0;b < colorsSize;b++){
            if(a == b || colors[a] == colors[b]){continue;}
            int distCalc = abs(a-b);
            if(distCalc > maxDist){maxDist = distCalc;}
        }
    }
    return maxDist;
}