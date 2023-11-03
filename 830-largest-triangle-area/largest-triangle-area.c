double largestTriangleArea(int** points, int pointsSize, int* pointsColSize) {
    double maxArea = 0;
    for(size_t a = 0; a < pointsSize; a++){
        for(size_t b = 0; b < pointsSize; b++){
            for(size_t c = 0; c < pointsSize; c++){
                int x1 = points[a][0];
                int y1 = points[a][1];
                int x2 = points[b][0];
                int y2 = points[b][1];
                int x3 = points[c][0];
                int y3 = points[c][1];
                double triSize=0.5*(abs(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2)));
                if(triSize > maxArea){
                    maxArea = triSize;
                }
            }   
        }   
    }    
    return maxArea;
}