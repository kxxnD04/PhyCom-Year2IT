#include <stdio.h>
int main(){
    double m1[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}}, m2[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
    double ans[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
    for(int in = 0; in < 3; in++) {scanf("%lf %lf %lf", &m1[in][0], &m1[in][1], &m1[in][2]);}
    for(int in = 0; in < 3; in++) {scanf("%lf %lf %lf", &m2[in][0], &m2[in][1], &m2[in][2]);}
    for(int i = 0; i < 3; i++){
        double sum = 0;
        for (int j = 0; j < 3; j++){
            double sum = 0;
            for(int k = 0; k < 3; k++){
                sum += m1[i][k] * m2[k][j];
            }
            ans[i][j] = sum;
        }
    }
    printf("A x B\n");
    for (int i = 0; i < 3; i++){
        printf("%.2lf %.2lf %.2lf\n", ans[i][0], ans[i][1], ans[i][2]);
    }
    return 0;
}
