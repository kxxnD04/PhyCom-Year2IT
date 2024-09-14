#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char txt[151];
    scanf("%[^\n]s ", txt);
    int count = 0;
    char *low = txt;
    while (*low)
    {
        *low = tolower(*low);
        count += *low == ' ';
        low++;
    }
    printf("%d words\n----\n", count+1);
    char *pointer = strtok(txt, " ");
    while (pointer)
    {
        printf("%s : %d\n", pointer, strlen(pointer));
        pointer = strtok(NULL, " ");
    }
    return 0;
}
