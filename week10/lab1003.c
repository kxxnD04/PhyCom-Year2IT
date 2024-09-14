#include <stdio.h>
#include <ctype.h>
int main(){
    char txt[151], want;
    scanf("%c", &want);
    scanf(" %[^\n]s ", txt);
    char *pointer = txt;
    int count = 0;
    while (*pointer)
    {
        if(tolower(*pointer) == tolower(want)){count++;}
        pointer++;
    }printf("%d", count);
    return 0;
}
