#include <stdio.h>
#include <stdlib.h>
typedef struct 
{
    int data;
}Node;

int main(){
    int n, index, value;
    scanf("%d", &n);
    Node *arr = (Node*)malloc(n*sizeof(int));
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i].data);
    }
    scanf("%d", &index);
    scanf("%d", &value);
    arr = (Node*)realloc(arr, (n+1)*sizeof(Node));
    for(int j = n; j >= index; j--){
        arr[j+1].data = arr[j].data;
    }
    arr[index].data = value;
    for(int i = 0; i < n+1; i++){
        printf("%d ", arr[i].data);
    }
    free(arr);
    return 0;
}
