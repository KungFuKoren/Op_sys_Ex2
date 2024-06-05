#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc ,char* argv[]){
    if(!checkArgs(argc , argv)){
        return 1;
    }
    int available[] = {1,2,3,4,5,6,7,8,9};
    int board[9];
    int turn = 0;
    while(turn < 9){
        int temp = 0;
        if(turn%2 == 0){
            if(play(argv[1][turn] , available)){
                
            }
        }
        if(turn%2 == 1){
            //Player input
        }


    }


    

return 0;
}

int checkArgs(int argc , char* argv[]){  
     if(argc != 2){
        perror("Invalid number of arguments");
        return 1;
     }
    if(strlen(argv[1]) != 9){
        perror("Invalid input");
        return 1;
    }
    for(int i = 1 ; i < 10; i ++){
            int count = 0;
        for(int j = 0 ; j < 9 ; j ++){
            if(argv[1][j] == '0' + i){
                count++;
            }
            count = 0;
        }
        if (count != 1){
            perror("Invalid input - requires each number from 1 - 9");
            return 1;
        }
    }


return 0;
}

int play(int num , int array[9]){
    //checks if there is a num 
    for(int i = 0 ; i < 9 ; i ++){
        if(array[i] == num){    
            array[i] = 0;
            return 0;
        }
    }
    return 1;
}

int check_win(int *board){
    if(board[4] == 'X' || board[4] == 'V'){
        if(board[4] == board[1] == board[7]){
            if(board[4] == 'X'){
                // X won
            }
            // V won
        }
        if(board[4] == board[5] == board[3]){
            if(board[4] == 'X'){
                // X won
            }
            // V won
        }
        if(board[4] == board[0] == board[8]){
            if(board[4] == 'X'){
                // X won
            }
            // V won
        }
        if(board[4] == board[2] == board[6]){
            if(board[4] == 'X'){
                // X won
            }
            // V won
        }
    }
    if(board[0] == 'X' || board[0] == 'V'){
        if(board[0] == board[1] == board[2]){
            if(board[0] == 'X'){
                // X won
            }
            // V won
        }
        if(board[0] == board[3] == board[6]){
            if(board[0] == 'X'){
                // X won
            }
            // V won
        }

    }
    if(board[8] == 'X' || board[8] == 'V'){
        if(board[8] == board[7] == board[6]){
            if(board[8] == 'X'){
                // X won
            }
            // V won
        }
        if(board[8] == board[5] == board[2]){
            if(board[8] == 'X'){
                // X won
            }
            // V won
        }
    }
}
