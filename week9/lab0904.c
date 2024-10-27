#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char c;
    int cap = 2, l = 0;
    char *arr = (char*) malloc((cap*sizeof(char)));

    scanf("%c", &c);
    while (c != '-')
    {
        *(arr + l*sizeof(char)) = c;
        l++;
        if (l >= cap-1){
            cap++;
            char *temp = (char*) realloc(arr, cap*sizeof(char));
            arr = temp;
        }
        scanf(" %c", &c);

    }
    char *ptr = arr;
    while (*ptr)
    {
        printf("%c", *(ptr));
        ptr += sizeof(char);
    }
    printf("\n");

    ptr -= sizeof(char);
    while (*ptr)
    {
        printf("%c", *(ptr));
        ptr -= sizeof(char);
    }
    free(arr);
    return 0;
}
