#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int cha = 0, word = 0, line = 0;
    char *arr = (char*)malloc(451*sizeof(char));
    while (1)
    {
        scanf(" %[^\n]s", arr);
        char *ptr = arr;
        // printf("%c", *(ptr));
        if(*(ptr) == '.' ){break;}
        line++;
        while (*ptr != '\0')
        {
            if(*(ptr) == ' '){word++;}
            if(*(ptr) != ' '){cha++;}
            if(*(ptr+sizeof(char)) == '\0'){word++;}
            ptr += sizeof(char);
        }
    }
    printf("Char = %d, word = %d, line = %d", cha, word, line);
    free(arr);
    return 0;
}
