#include <stdio.h>
int main(){
    float h1, w1;
    scanf("%f\n%f", &h1, &w1);
    printf("%f", w1/((h1/100)*(h1/100)));
    return 0;
}
