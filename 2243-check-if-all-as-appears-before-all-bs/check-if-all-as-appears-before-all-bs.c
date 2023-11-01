bool checkString(char * s){
    bool bSeen = false;
    bool isGood = true;
    for (size_t i = 0; s[i] != '\0'; i++){
        if(s[i] == 'a'){
            if(bSeen){
                isGood = false;
            }
        }else{
            bSeen = true;
        }
    }
    return isGood;
}