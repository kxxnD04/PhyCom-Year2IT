#include <stdio.h>

int main(){
    char txt[201];
    scanf("%[^\n]s ", txt);
    char *pointer = txt;
    int is_first = 0;
    while (*pointer)
    {
        if(!is_first){printf("%c.", *pointer); is_first++;}
        if(*pointer == ' '){printf("%c.", *++pointer); break;}
        pointer++;
    }
    return 0;
}
