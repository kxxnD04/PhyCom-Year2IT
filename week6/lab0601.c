#include <stdio.h>
int main(){
    int M[] = {2, 20, 8, 10, 4, 6, 16, 18}, N[] = {1, 3, 9, 7, 11, 15, 19}, num = 0, c1 = 0, c2 = 0;
    while (num < 1 || num > 20) {scanf("%d", &num);}
    for (int i = 0; i < 8; i++){
        if (M[i] == num){printf("%d is in M at index [%d]", num, i); c1++;}
    }
    for (int j = 0; j < 7; j++){
        if (N[j] == num){printf("%d is in N at index [%d]", num, j); c2++;}
    }    
    if (c1 == 0 && c2 == 0) {printf("%d is not in neither M nor N", num);}
    return 0;
}
