#include <stdio.h>
#include <math.h>
int main(){
    long int n;
    scanf("%ld", &n);
    printf("method = %ld", (long int)((pow((1 + sqrt(5)), n+1) -  pow((1 - sqrt(5)), n+1)) / (pow(2, n+1)*sqrt(5))));
    return 0;
}
