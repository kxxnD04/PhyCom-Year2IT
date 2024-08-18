#include <stdio.h>
#include <math.h>

int main(){
    int degree;
    long int u;
    scanf("%d\n%ld", &degree, &u);
    printf("theta (degree) : %d\n", degree);
    printf("u (m/s) : %ld\n", u);
    printf("h (m) : %.4lf", (((u*u)*sin(degree*3.141592653589793/180)*sin(degree*3.141592653589793/180)))/(2*9.81));
    return 0;
}