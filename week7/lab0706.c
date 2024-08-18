#include <stdio.h>
#include <math.h>

int main(){
    long int x, y;
    scanf("%lu %lu", &x, &y);
    printf("sqrt(%lu^2+%lu^2)=%.2f" , x, y, sqrt((x*x) + (y*y)));
    return 0;
}
