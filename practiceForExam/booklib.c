#include <string.h>
#include <stdio.h>

int main(){
    char book[5];
    scanf("%s", book);
    int n = strlen(book);
    if (n == 4){
        int two_digit = (book[n-2] - '0') * 10 + (book[n-1] - '0');
        if (two_digit%4 == 0){
            printf("Reference");
        }else if(two_digit == 11 || two_digit == 22 || two_digit == 33){
            printf("History");
        }else{
            printf("Unclassified");
        }
    }else{
        char last_digit = book[n-1];
        if(last_digit == '0' || last_digit == '5'){
            printf("Science");
        }else if (last_digit == '3' || last_digit == '7'){
            printf("Literature");
        }else{
            printf("General Collection");
        }
    }
    return 0;
}
