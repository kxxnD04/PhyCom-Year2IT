#include <stdio.h>
int main(){
    double price, d1, h1;
    scanf("%lf\n%lf\n%lf", &price, &d1, &h1);
    printf("Volume : %.2lfml\nBaht/ml : %.4lf", h1*(d1/2)*(d1/2)*3.14159265359, price/(h1*(d1/2)*(d1/2)*3.14159265359));
    return 0;
}
