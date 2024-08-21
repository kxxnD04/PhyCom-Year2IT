#include <stdio.h>

int main(){
    int n, age, age12_c = 0;
    double max_weight, weight, total_weight = 0;
    scanf("%d\n%lf", &n, &max_weight);
    for (int i = 0; i < n; i++){
        scanf("%d\n%lf", &age, &weight);
        if (age12_c == 0 && age >= 12){age12_c++;}
        total_weight += weight;
    }
    ((total_weight <= max_weight && (age12_c == 1 && n != 0)) || n == 0) ? printf("Safe"): printf("Not Safe");
    return 0;
}
