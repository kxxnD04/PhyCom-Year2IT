#include <stdio.h>
int main(){
    char seq[201];
    char text[] = "aiwgzvfuthsojlkdecnmrqpyxb";
    scanf("%[^\n]", &seq);
    for(int i = 0; seq[i] != '\0'; i++){
        if (seq[i] == ' '){
            printf(" ");
            continue;
        }
        char choose = seq[i], consider = seq[i];
        int index = 0;
        consider += (consider >= 'A' && consider <= 'Z') ? 32:0;
        for(int j = 0; j < 27; j++){
            if (text[j] == consider){
                index = j + 5;
                break;
            }
        }
        if (index > 25){
            index -= 26;
        }
        if(choose >= 'A' && choose <= 'Z'){
            printf("%c", text[index]-32);
        }else if(choose >= 'a' && choose <= 'z'){
            printf("%c", text[index]);
        }
    }
    return 0;
}
