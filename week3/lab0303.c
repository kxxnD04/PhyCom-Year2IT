#include <stdio.h>
#include <math.h>
int main(){
    double s1, s2;
    scanf("%lf\n%lf", &s1, &s2);
    printf("%.2lf", sqrt(pow(s1, 2) + pow(s2, 2)));
    return 0;
}
