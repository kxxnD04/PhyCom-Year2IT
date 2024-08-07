#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        for (int j = 0; j < n; j++)
        {
            ((j == n-1-i || j == i)) ? printf("-"):printf("#");
        }
        printf("\n");
    }
    return 0;
}
