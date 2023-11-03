bool lemonadeChange(int* bills, int billsSize) {
    int *billCount = calloc(3,sizeof(int));
    if(bills[0] > 5){
        printf("failing on start iteration");
        return false;
    }
    for(size_t i = 0; i < billsSize; i++){
        if(bills[i] == 5){
            billCount[0]++;
        }else if(bills[i] == 10){
            if(billCount[0] < 1){printf("failing on %d iteration",i); return false;}
            billCount[0]-= 1;
            billCount[1]++;
        } else {
            if(billCount[1] >= 1){
                if(billCount[0] >= 1){
                    billCount[0]--;
                    billCount[1]--;
                }else{
                    printf("failing on %d iteration",i);
                    return false;
                }
            }else if(billCount[0] >= 3){
                billCount[0]-= 3;
            } else {
                printf("failing on %d iteration",i);
                return false;
            }
            billCount[2]++;
        }
    }
    return true;
}