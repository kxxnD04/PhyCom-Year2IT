#include <stdio.h>
int main(){
    double m1[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
    for(int in = 0; in < 3; in++) {scanf("%lf %lf %lf", &m1[in][0], &m1[in][1], &m1[in][2]);}
    double compare = m1[0][0], zero = 0;
    (compare == m1[1][1]  && compare == m1[2][2] && zero == m1[0][1] && zero == m1[0][2] && zero == m1[1][0] && zero == m1[1][2] && zero == m1[2][0] && zero == m1[2][1]) ? printf("This is a scalar matrix") : printf("This is not a scalar matrix");
    return 0;
}
