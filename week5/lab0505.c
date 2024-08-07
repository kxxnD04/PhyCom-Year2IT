#include <stdio.h>
int main(){
    int n, i;
    scanf("%d", &n);
    i = (n > 0) ? -1 : 1;
    while (n != 0)
    {
        printf("%d ", n); n+=i;
    }
    printf("0");
    return 0;
}
