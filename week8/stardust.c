#include <stdio.h>
#include <math.h>

void merge(double arr[], int l, int m, int r);
void merge_sort(double arr[], int l, int r);

int main(){
    int n = 0, i = 0;
    scanf("%d", &n);
    double arr[n], mean = 0.0, med = 0.0, sd_ = 0.0;
    for(i = 0; i < n; i++){
        scanf("%lf", &arr[i]);
        mean += arr[i];
    }
    merge_sort(arr, 0, n-1);
    med = (n%2 == 1) ? arr[n/2] : (arr[n/2] + arr[n/2-1])/2.0;
    mean /= (n*1.0);
    for(i = 0; i < n; i++){
        sd_ += pow(arr[i]-mean, 2);
    }
    sd_ = sqrt((sd_/(n*1.0)));
    printf("%.2lf\n%.2lf\n%.2lf", mean, med, sd_);
    return 0;
}

void merge_sort(double arr[], int l, int r){
    if (l < r){ // l < r is to divide the array until the array is == 1
    int m = (r+l)/ 2;
    merge_sort(arr, l, m); // merge_sort left
    merge_sort(arr, m+1, r); // merge_sort right
    merge(arr, l, m, r); // merge left and right together
    }
}

void merge(double arr[], int l, int m, int r){
    int i, j, k;
    int a1 = m - l + 1; // size of left array
    int a2 = r-m; // size of right array
    double arr1[a1], arr2[a2]; // create a left and right array

    for (i = 0; i < a1; i++){ // copy original array to left array
        arr1[i] = arr[i+l];
    }
    for (j = 0; j < a2; j++){ // copy original array to right array
        arr2[j] = arr[m + 1 +j];
    }
    i = 0, j = 0, k = l;

    while (i < a1 && j < a2) // compare left and right array
    {
        if (arr1[i] <= arr2[j]){
            arr[k] = arr1[i];
            i++;
        }else{
            arr[k] = arr2[j];
            j++;            
        }
        k++;
    }
    while (i < a1) // copy the rest of num to original array
    {
        arr[k] = arr1[i];
        i++;
        k++;
    }
    while (j < a2) // copy the rest of num to original array
    {
        arr[k] = arr2[j];
        j++;
        k++;
    }    
}
