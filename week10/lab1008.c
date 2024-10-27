#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    char *sen = (char*)malloc(2001*sizeof(char));
    int *store = (int*)malloc(2001*sizeof(int));
    int *s = store;
    int count = 0;
    scanf("%[^\n]s", sen);
    char *ptr = sen;
    char cat[4] = "cat";
    while (*ptr)
    {
        *ptr = tolower(*ptr);
        ptr++;
    }
    char* index = strstr(sen, cat);
    while(index){
        int ans = index-sen;
        *(s + count*sizeof(int)) = ans;
        count += 1;
        index = strstr(index + 3, cat);
    }
    for(int i = 0; i < count; i++){
        if(i == count - 1){
            printf("%d", *(s + i*sizeof(int)));
        }else{
            printf("%d, ", *(s + i*sizeof(int)));
        }
    }

    free(sen);
    free(store);
    return 0;
}
