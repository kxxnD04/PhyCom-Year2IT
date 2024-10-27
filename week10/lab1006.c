#include <stdio.h>
#include <stdlib.h>
void swap(char *a, char *b){
    char temp = *a;
    *a = *b;
    *b = temp;
}
void bubble_sort(char *arr, int n){
    for (int i = 0; i < n-1; i++){
        for(int j = 0; j <n-i - 1; j++){
            if(*(arr+j) > *(arr + j + sizeof(char))){
                swap((arr + j), (arr + j + sizeof(char)));
            }
        }
    }
}

int main(){
    char *arr = (char*) malloc(201*sizeof(char));
    // char *org = arr;
    scanf("%[^\n]s", arr);
    int l = 0;
    char *ptr = arr;
    while (*ptr != '\0')
    {
        l++;
        ptr++;
    }
    bubble_sort(arr, l);
    ptr = arr;
    while (*ptr != '\0')
    {
        
        printf("%c", *(ptr++));
    }
    free(arr);
    return 0;
}
