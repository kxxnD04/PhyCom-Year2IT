#include <stdio.h>
#include <string.h>

int main(){
    char text[10000];
    scanf("%s", text);
    int n = strlen(text);
    if (n >= 4){
        char status[10], type[30];
        int two_digit = (text[n-2]-'0')*10 + (text[n-1]-'0');
        if ((text[0] - '0')%2 == 0){
            strcpy(status, "Active");
        }else{
            strcpy(status, "Reserve");
        }
        if (two_digit == 50 || two_digit == 75){
            strcpy(type, "Starfleet Flagship");
        }else{
            strcpy(type, "Standard-class starship");
        }
        printf("%s %s", status, type);
    }else{
        if(text[n-1] == '0'){
            printf("Command-class starship");
        }else if(text[n-1] == '5'){
            printf("Exploration-class starship");
        }else{printf("General-class starship");}
    }

}
