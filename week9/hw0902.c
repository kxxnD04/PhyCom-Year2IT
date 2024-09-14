#include <stdio.h>
#include <stdlib.h>

int main(){
    char *str;
    int n, freq, index = 0;
    scanf("%d", &n);
    scanf("%d", &freq);
    str = (char*)malloc((n+1) * sizeof(char));
    scanf(" %[^\n]s", str);
    char *arr = str;
    while (index < n)
    {
        if(index == 0 || index%freq == 0){
            printf("%c", *(arr + index));
        }
        index++;
    }
    free(str);
    return 0;
}
