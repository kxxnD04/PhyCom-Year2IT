#include <stdio.h>
int main(){
    int m, n, i;
    scanf("%d %d", &m, &n);
    i = (m > n) ? -1 : 1;
    for(m; m != n + i; m+=i){
        printf("%d ", m);
    }
    return 0;
}
