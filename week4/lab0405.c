#include <stdio.h>
int main(){
    char c;
    scanf("%c", &c);
    if ((int)c >= 65 && (int)c <= 90){
        printf("%c", ((int)c) + 32);
    }else if((int)c >= 97 && (int)c <= 122){
        printf("%c", ((int)c) - 32);
    }else{
        printf("error");
    }
    return 0;
}
