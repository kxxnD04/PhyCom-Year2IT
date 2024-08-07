#include <stdio.h>
int main(){
    char c;
    scanf("%c", &c);
    if ((int)c >= 65 && (int)c <= 90){
        printf("uppercase");
    }else if((int)c >= 97 && (int)c <= 122){
        printf("lowercase");
    }else if((int)c >= 48 && (int)c <= 57){
        printf("number");
    }else{
        printf("error");
    }
    return 0;
}
