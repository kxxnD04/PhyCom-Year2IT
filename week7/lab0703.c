#include <stdio.h>
#include <math.h>

double perimeter(double a, double b, double c);
double area(double a, double b);

int main(){
    double a, b, c;
    scanf("%lf\n%lf", &a, &b);
    c = sqrt((a*a) + (b*b));
    printf("Perimeter: %.2lf\n", perimeter(a, b, c));
    printf("Area: %.2lf", area(a, b));
    return 0;
}

double perimeter(double a, double b, double c){
    return a+b+c;
}

double area(double a, double b){
    return 0.5*a*b;
}
