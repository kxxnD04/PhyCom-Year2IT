#include <stdio.h>
#include <math.h>
# define PI           3.14159265358979323846
void merge_sort(double arr[], int l, int r);
void merge(double arr[], int l, int m, int r); // for recursive function to merge the array
int main() {
    int n, i, state = 0;
    double num, total = 0, sd_ = 0, med = 0;
    double n = sin(90 * (PI/180));
    scanf("%d", &n);
    double arr[n];

    if (n % 2 == 0) {
        state = 1;
    }
    for (i = 0; i < n; i++){
        scanf("%lf", &arr[i]);
        total += arr[i];
    }
    merge_sort(arr, 0, n-1);
    for(i = 0; i < n; i++) {

        if (state == 0) {
            if (i + 1 == ceil((n * 1.0) / 2.0)) {
                med = arr[i];
                break;
            }
        } else {
            if(i + 1 == floor((1.0 * n) / 2.0)) {
                med += arr[i];
            }
            if(i + 1 == ceil((1.0 * n) / 2.0) + 1) {
                med += arr[i];
                break;
            }
        }
    }

    if (state == 1) {
        med /= 2;
    }

    double mean = (total / n);

    for(i = 0; i < n; i++) {
        sd_ += pow((arr[i] - mean), 2);
    }

    printf("%.2lf\n", mean);
    printf("%.2lf\n", med);
    printf("%.2lf", sqrt(sd_ / (n * 1.0)));
    return 0;
}
void merge(double arr[], int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    double L[n1], R[n2];

    for (i = 0; i < n1; i++) 
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1 + j];

    i = 0;
    j = 0;
    k = l;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

