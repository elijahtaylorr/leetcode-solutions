int max(int num1, int num2)
{
    return (num1 > num2 ) ? num1 : num2;
}

int longestCommonSubsequence(char* text1, char* text2) {
    int text1Len = strnlen(text1,1000);
    int text2Len = strnlen(text2,1000);
    int **LCStable = malloc((text1Len + 1) * sizeof(int *));
    for(int i = 0; i <= text1Len; i++) {
        LCStable[i] = calloc(text2Len + 1, sizeof(int));
    }
    for(int i = 1; i <= text1Len; i++) {
        for(int j = 1; j <= text2Len; j++) {
            if(text1[i-1] == text2[j-1]) {
                LCStable[i][j] = 1 + LCStable[i-1][j-1];
            } else {
                LCStable[i][j] = max(LCStable[i-1][j], LCStable[i][j-1]);
            }
        }
    }
    return LCStable[text1Len][text2Len];
}

