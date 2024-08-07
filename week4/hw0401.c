#include <stdio.h>
int main(){
    double sales, dis, pro1, pro2;
    int n;
    scanf("%lf\n%lf\n%d", &sales, &dis, &n);
    pro1 = ((100-dis)/100*sales)*n;
    pro2 = ((n%3)*sales) + (((n-(n%3))/3)*2*sales);
    (pro1 < pro2) ? printf("Discount %.0lf%%\n%.2lf", dis, pro1):
    (pro1 > pro2 ? printf("Buy 2 Get 1\n%.2lf", pro2): printf("Discount %.0lf%%\n%.2lf", dis, pro1));
    return 0;
}
