#include <stdio.h>
int main(){
    char seq[101];
    scanf("%[^\n]", &seq);
    int last_index = 0;
    for(int i = 0; i < 101; i++){
        if (seq[i] == '\0'){
            last_index = i;
            break;
        }
    }
    for (int i = last_index-1; i >= 0; i--){
        printf("%c", seq[i]);
    }
    return 0;
}
