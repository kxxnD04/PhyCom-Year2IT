#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int how_long(char* word){
    int count = 0;
    char *ptr = word;
    while (*ptr != '\0')
    {
        count++;
        ptr += sizeof(char);
    }
    return count;
    
}
int main(){
    char *arr = (char*)malloc(101*sizeof(char));
    scanf("%[^\n]s", arr);
    int is_change = 1;
    while (is_change)
    {
        is_change = 0;
        char *new_str = (char*)malloc((how_long(arr)+1) * sizeof(char));
        char *src = arr;
        char *dst = new_str;

        while (*src != '\0')
        {
            if (*(src + 1) == '\0' || *src != *(src+1)){
                *dst = *src;
                dst++;
                src++;
            }else{
                is_change = 1;
                char current = *src;
                while (*src == current)
                {
                    src++;
                }
                *dst = *src;

            }
        }
        *dst = '\0';
        if(is_change){
            printf("%s\n", new_str);
        }
        strcpy(arr, new_str);
        free(new_str);
    }
    free(arr);
    return 0;
}
