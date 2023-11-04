bool checkWinner(int player, int **games){
    return(
        ((games[0][0] == player && games[1][0] == player && games[2][0] == player) ||
        (games[0][1] == player && games[1][1] == player && games[2][1] == player) ||
        (games[0][2] == player && games[1][2] == player && games[2][2] == player)) 
        ||
        ((games[0][0] == player && games[0][1] == player && games[0][2] == player) ||
        (games[1][0] == player && games[1][1] == player && games[1][2] == player) ||
        (games[2][0] == player && games[2][1] == player && games[2][2] == player))
        ||
        ((games[0][0] == player && games[1][1] == player && games[2][2] == player) ||
        (games[0][2] == player && games[1][1] == player && games[2][0] == player)
        )
    );
}

char* tictactoe(int** moves, int movesSize, int* movesColSize) {
    // 0 = ' ' | 1 = 'X' | 2 = 'O'
    char* winner = malloc(8*sizeof(char)+1);
    strcpy(winner,"Pending");
    int **game = calloc(3,sizeof(int *));
    for(size_t i = 0; i < 3; i++){
        game[i] = calloc(3,sizeof(int));
    }
    int turn = 1;
    for(size_t i = 0; i < movesSize; i++){
        game[moves[i][0]][moves[i][1]] = turn;
        if(turn == 1){
            turn=2;
        }else{
            turn=1;
        }
    }
    bool aWon = checkWinner(1,game);
    bool bWon = checkWinner(2,game);
    if(aWon){
        winner = realloc(winner,1*sizeof(char)+1);
        strcpy(winner,"A");
    }else if(bWon){
        winner = realloc(winner,1*sizeof(char)+1);
        strcpy(winner,"B");
    }else if(movesSize == 9){
        winner = realloc(winner,4*sizeof(char)+1);
        strcpy(winner,"Draw");
    }
    return winner;
}