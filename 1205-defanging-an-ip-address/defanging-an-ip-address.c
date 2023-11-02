char * defangIPaddr(char * address){
    size_t addrLen = strnlen(address,15);
    char *rtn = malloc(addrLen*sizeof(char)+7);
    int buffer = 0;
    for(size_t i = 0;i < addrLen;i++){
        if(address[i] == '.'){
            rtn[i+buffer] = '[';
            buffer+= 1;
            rtn[i+buffer] = '.';
            buffer+= 1;
            rtn[i+buffer] = ']';
        }else{
            rtn[i+buffer] = address[i];
        }
    }
    rtn[addrLen*sizeof(char)+6] = '\0';
    return rtn;
}