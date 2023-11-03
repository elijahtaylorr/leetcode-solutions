double calculateTax(int** brackets, int bracketsSize, int* bracketsColSize, int income){
    double totalTax = 0;
    int prev = 0;
    for(size_t i = 0;i < bracketsSize;i++){
        if(income <= 0){break;}
        int upperBound = brackets[i][0];
        double taxPct = brackets[i][1] / 100.0;
        double incomeTax = fmin(income, upperBound-prev);
        income-= incomeTax;
        totalTax+= incomeTax*taxPct;
        prev = upperBound;
    }
    return totalTax;
}