#include <stdio.h>
#include <stdlib.h>

int main(){
    char *arr = (char*)malloc(101*sizeof(char));
    scanf("%[^\n]s", arr);
    char *ptr = arr;
    while (*ptr)
    {
        ptr += sizeof(char);
    }
    ptr -= sizeof(char);

    while (*ptr)
    {
        printf("%c", *(ptr));
        ptr-=sizeof(char);
    }
    free(arr);
    return 0;
}
