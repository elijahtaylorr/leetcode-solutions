bool areAlmostEqual(char* s1, char* s2) {
    int strLens = strnlen(s1,100);
    if(strLens == 1 && s1[0] == s2[0]){ return true; }
    int diff = 0;
    char diffLet1 = 'A';
    char diffLet2 = 'A';
    char diffLet3 = 'A';
    char diffLet4 = 'A';
    for(size_t i = 0;i < strLens;i++){
        if(s1[i] != s2[i]){
            diff++;
            if(diffLet1 == 'A'){
                diffLet1 = s1[i];
                diffLet3 = s2[i];
            }else if(diffLet2 == 'A'){
                diffLet2 = s2[i];
                diffLet4 = s1[i];
            }
        }
    }
    if(diff == 2 || diff == 0){
        return(diffLet1 == diffLet2 && diffLet3 == diffLet4);
    }
    return false;
}