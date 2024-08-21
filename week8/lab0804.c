#include <stdio.h>

int main(){
    double sbp, dbp;
    scanf("%lf\n%lf", &sbp, &dbp);
    (sbp > 140 || dbp > 90) ? printf("Hypertension") : printf("Normal");
    return 0;
}
