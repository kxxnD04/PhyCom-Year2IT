#include <stdio.h>
int main(){
    float n1, n2, n3, n4;
    scanf("%f\n%f\n%f\n%f", &n1, &n2, &n3, &n4);
    printf("Summation is %.2f\nAverage is %.3f", n1+n2+n3+n4, (n1+n2+n3+n4)/4);
    return 0;
}
