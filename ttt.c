#include <stdlib.h>
#include <stdio.h>
#include <string.h>
checkArgs(int argc , char* argv[]);

int main(int argc ,char* argv[]){
    if(!checkArgs(argc , argv)){
        return 1;
    }
    int available[] = {1,2,3,4,5,6,7,8,9};

    // int *order = stringToIntArray(argv[1]);
    // char board[9];
    // int turn = 0;
    // int bool = 0;
    // int comp_pick = 0;

    // while(turn < 9){
    //     bool = 0;
    //     while(bool){
    //         if(turn%2){
    //             if(play(order[comp_pick], available)){ // convert here to ints instead of argv
    //                 board[comp_pick-1] = 'X';
    //                 printf("Played X on square %d" , comp_pick-1);
    //                 comp_pick ++;
    //                 turn++;
    //                 bool = 1;
    //             }
    //             if(!play(order[comp_pick] , available)){ // convert here to ints 
    //                 comp_pick ++;
    //             }
    //         }
    //         if(!(turn%2)){
    //             int char_pick;
    //             printf("Please enter a number from 1-9");
    //             scanf("%d" , &char_pick);
    //             if(play(char_pick , available)){
    //                 // change board at place
    //                 board[char_pick-1] = 'O';
    //                 printf("Played O on square %d" , char_pick-1);
    //                 turn++;
    //                 bool = 1;
    //             }
    //             if(!play(char_pick , available)){
    //                 printf("Invalid input or square is already taken");
    //             }



    //         }
            
            
    //     }
    //     if(check_win(board) != -1){
    //             //END LOOP AND GAME
    //         }
    //         //ENDED DRAW
       
    // }


    

return 0;
}
int* stringToIntArray(char str[9]) {
    int str_length = 9;
    int* int_array = (int*)malloc(9 * sizeof(int));
    
    for (int i = 0; i < str_length; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            int_array[i] = str[i] - '0'; // Convert char to int
        } 
        
    }

    return int_array;
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
    if(board[4] == 'X' || board[4] == 'O'){
        if(board[4] == board[1] && board[4] == board[7]){
            if(board[4] == 'X'){
                // X won
            }
            // V\O won
        }
        if(board[4] == board[5] && board[4] == board[3]){
            if(board[4] == 'X'){
                // X won
            }
            // O won
        }
        if(board[4] == board[0] && board[4] == board[8]){
            if(board[4] == 'X'){
                // X won
            }
            // O won
        }
        if(board[4] == board[2] && board[4] == board[6]){
            if(board[4] == 'X'){
                // X won
            }
            // O won
        }
    }
    if(board[0] == 'X' || board[0] == 'O'){
        if(board[0] == board[1] && board[0]== board[2]){
            if(board[0] == 'X'){
                // X won
            }
            // V won
        }
        if(board[0] == board[3] && board[0] == board[6]){
            if(board[0] == 'X'){
                // X won
            }
            // O won
        }

    }
    if(board[8] == 'X' || board[8] == 'O'){
        if(board[8] == board[7] && board[8] == board[6]){
            if(board[8] == 'X'){
                // X won
            }
            // V won
        }
        if(board[8] == board[5] && board[8] == board[2]){
            if(board[8] == 'X'){
                // X won
            }
            // O won
        }
    }
    return -1;
}
