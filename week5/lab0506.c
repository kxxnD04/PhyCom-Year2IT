#include <stdio.h>
int main(){
    int h;
    scanf("%d", &h);
    for(int i = h; i <= 2*h-1; i++){
        for (int j = 1; j <= i; j++)
        {
            (j <= h-1-(i-h)) ? printf(" "): printf("*");
        }
        printf("\n");
    }
    return 0;
}
