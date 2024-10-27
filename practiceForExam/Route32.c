#include <stdio.h>

int main(){
    double km;
    scanf("%lf", &km);
    if (km >= 0.00 && km <= 48.697000){
        printf("Ayutthaya");
    }else if(km > 48.69700 && km <= 66.456000){
        printf("Ang Thong");
    }else if((km > 66.456000 && km <= 84.918000) || (km > 85.900 && km <= 111.936000)){
        printf("Sing Buri");
    }else if(km > 84.918000 && km <= 85.900000){
        printf("Lop Buri");
    }else if(km > 111.936000 && km <= 150.019000){
        printf("Chai Nat");
    }else if(km > 1150.019000 && km <= 150.545000){
        printf("Nakhon Sawan");
    }else{
        printf("InValid");
    }
    return 0;
}
