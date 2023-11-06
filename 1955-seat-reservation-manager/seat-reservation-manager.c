typedef struct {
    bool* reserved;
    int reservationsSize;
    int nextSeat;
} SeatManager;

SeatManager* seatManagerCreate(int n) {
    SeatManager* seats = malloc(sizeof(SeatManager));
    seats->reserved = calloc(n, sizeof(bool));
    *seats = (SeatManager){.reserved = seats->reserved, .reservationsSize = n, .nextSeat = 0};
    return seats;
}

int seatManagerReserve(SeatManager* obj) {
    if (obj->nextSeat == obj->reservationsSize) {
        return -1;
    }

    obj->reserved[obj->nextSeat] = true;
    int reservedSeat = obj->nextSeat;

    do {
        obj->nextSeat++;
    } while (obj->nextSeat < obj->reservationsSize && obj->reserved[obj->nextSeat]);

    return reservedSeat + 1;
}

void seatManagerUnreserve(SeatManager* obj, int seatNumber) {
    int seatIdx = seatNumber - 1;
    if (seatIdx >= 0 && seatIdx < obj->reservationsSize) {
        obj->reserved[seatIdx] = false;
        if (seatIdx < obj->nextSeat) {
            obj->nextSeat = seatIdx;
        }
    }
}

void seatManagerFree(SeatManager* obj) {
    free(obj->reserved);
    free(obj);
}