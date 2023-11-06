


typedef struct {
    bool* reserved;
    int reservationsSize;
    int nextSeat;
} SeatManager;


SeatManager* seatManagerCreate(int n) {
    SeatManager* seats = malloc(sizeof(SeatManager));
    seats->reserved = calloc(n,sizeof(int));
    seats->reservationsSize = n;
    seats->nextSeat = 0;
    return seats;
}

int seatManagerReserve(SeatManager* obj) {
    while (obj->nextSeat < obj->reservationsSize && obj->reserved[obj->nextSeat]){
        obj->nextSeat++;
    }

    if(obj->nextSeat < obj->reservationsSize){
        obj->reserved[obj->nextSeat] = true;
        return obj->nextSeat+1;
    }
    return 1;
}

void seatManagerUnreserve(SeatManager* obj, int seatNumber) {
    if (seatNumber > 0 && seatNumber <= obj->reservationsSize){
        int seatIdx = seatNumber-1;
        if(obj->reserved[seatIdx]){
            obj->reserved[seatIdx] = false;
            if(seatIdx < obj->nextSeat){
                obj->nextSeat = seatIdx;
            }
        }
    }
}

void seatManagerFree(SeatManager* obj) {
    free(obj->reserved);
    free(obj);
}

/**
 * Your SeatManager struct will be instantiated and called as such:
 * SeatManager* obj = seatManagerCreate(n);
 * int param_1 = seatManagerReserve(obj);
 
 * seatManagerUnreserve(obj, seatNumber);
 
 * seatManagerFree(obj);
*/