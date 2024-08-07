#include <stdio.h>
int main(){
    double old, dis, num;
    scanf("%lf\n%lf\n%lf", &old, &dis, &num);
    printf("%.2lf", old*(1-dis/100)*num);
    return 0;
}
