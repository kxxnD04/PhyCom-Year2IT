#include <stdio.h>
int find_zero_col(int arr[3][3]);
int find_zero_row(int arr[3][3]);
int main(){
    int board[3][3] = {0}, i, state = 0, rows = 0, col = 0;
    char con = 'X';
    for(i = 0; i < 3; i++){
        scanf("%d %d %d", &board[i][0], &board[i][1], &board[i][2]);
    }
    while (con != 'E')
    {
        rows = find_zero_row(board);
        col = find_zero_col(board);
        if (con == 'L'){
            if (col != 2){
                int temp = board[rows][col];
                board[rows][col] = board[rows][col+1];
                board[rows][col+1] = temp;
            }else{state = 1;}
        }
        else if (con == 'R'){
            if (col != 0){
                int temp = board[rows][col];
                board[rows][col] = board[rows][col-1];
                board[rows][col-1] = temp;
            }else{state = 1;}
        }
        else if (con == 'D'){
            if (rows != 0){
                int temp = board[rows][col];
                board[rows][col] = board[rows-1][col];
                board[rows-1][col] = temp;
            }else{state = 1;}            
        }
        else if (con == 'U'){
            if (rows != 2){
                int temp = board[rows][col];
                board[rows][col] = board[rows+1][col];
                board[rows+1][col] = temp;
            }else{state = 1;}            
        }

        if (state == 1){break;}
        scanf(" %c", &con);
    }
    for(i = 0; i < 3; i++){
        printf("%d %d %d\n", board[i][0], board[i][1], board[i][2]);
    }
    return 0;
}

int find_zero_col(int arr[3][3]){
    for (int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if (arr[i][j] == 0){
                return j;
            }
        }
    }
    return -1;
}

int find_zero_row(int arr[3][3]){
    int row;
    for (int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if (arr[i][j] == 0){
                return i;
            }
        }
    }
    return -1;
}
