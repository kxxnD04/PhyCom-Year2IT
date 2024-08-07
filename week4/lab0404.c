#include<stdio.h>
int main(){
    double n;
    scanf("%lf", &n);
    if (n < 0 || n > 100){
        printf("Out of Range");
    }else if (n >= 80 && n <= 100){
        printf("A");
    }else if(n >= 70){
        printf("B");
    }else if(n >= 60){
        printf("C");
    }else if(n >= 50){
        printf("D");
    }else if(n >= 0){
        printf("F");
    }
    return 0;
}
