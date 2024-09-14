#include <stdio.h>
#include <stdlib.h>

int main(){
    char *str;
    str = (char*)malloc(101 * sizeof(char));
    scanf("%[^\n]s", str);
    char *arr = str;
    int up = 0, low = 0, digit = 0;
    while (*arr)
    {
        char c = *(arr++);
        // printf("%c ", c);
        if (c >= 65 && c <= 90){up++;}
        else if(c >= 97 && c <= 132){low++;}
        else if(c >= 97 && c <= 132){low++;}
        else if(c >= 48 && c <= 57){digit++;}
    }
    printf("Lowercase letters: %d\nUppercase letters: %d\nDigits: %d", low, up, digit);
    free(str);
    return 0;
}
