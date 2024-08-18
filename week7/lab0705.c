#include <stdio.h>

double findMin(double array[], int size);
double findMax(double array[], int size);
double findAvg(double array[], int size);
double getValue(){
    double value;
    scanf("%lf", &value);
    return value;
}

int main(){
    int n;
    scanf("%d", &n);

    double array[n];
    for (int i = 0; i < n; i++){
        array[i] = getValue();
    }
    
    printf("%d Values\nMin: %.3lf\nMax: %.3lf\nAvg: %.3lf", n, findMin(array, n), findMax(array, n), findAvg(array, n));

    return 0;
}

double findMin(double array[], int size){
    double min = array[0];
    for (int i = 0; i < size; i++){
        if (min > array[i]) {min = array[i];}
    }
    return min;
}

double findMax(double array[], int size){
    double max = array[0];
    for (int i = 0; i < size; i++){
        if (max < array[i]) {max = array[i];}
    }
    return max;
}

double findAvg(double array[], int size){
    double Avg = 0;
    for (int i = 0; i < size; i++){
        Avg += array[i];
    }
    return Avg/size;
}
