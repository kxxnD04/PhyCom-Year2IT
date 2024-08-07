#include <stdio.h>
int main(){
    double n1, n2;
    scanf("%lf,%lf", &n1, &n2);
    printf("The sum of the given numbers : %lf\nThe difference of the given numbers : %lf\nThe product of the given numbers : %lf\nThe quotient of the given numbers : %lf", n1+n2, n1-n2, n1*n2, n1/n2);
    return 0;
}
