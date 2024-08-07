#include <stdio.h>
int main(){
    char seq[101], new_seq[101];
    scanf("%s", seq);
    int last_index = 0, state = 1;
    for(int i = 0; i < 101; i++){
        if (seq[i] == '\0'){
            last_index = i;
            break;
        }
    }
    for(int j = last_index-1, k = 0; j > 0; j--, k++){
        if (seq[j] != seq[k]){
            printf("It is not Palindrome.");
            state--;
            break;
        }
    }
    if (state == 1){
        printf("It is Palindrome.");
    }
    return 0;
}
