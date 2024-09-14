#include <stdio.h>
 
int main(){
    char txt[151];
    scanf("%[^\n]s ", txt);
    char *pointer = txt;
    while (*pointer)
    {
        if(*pointer != ' '){printf("%c", *pointer);}
        pointer++;
    }
    return 0;
}
