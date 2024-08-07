#include <stdio.h>
int main(){
    double s1, s2, s3;
    scanf("%lf\n%lf\n%lf", &s1, &s2, &s3);
    (s1 + s2 > s3 && s1 + s3 > s2 && s3 + s2 > s1) ? printf("Triangle is valid."):printf("Triangle is not valid.");
    return 0;
}
