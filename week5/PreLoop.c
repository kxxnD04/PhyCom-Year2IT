#include <stdio.h>
int main(){
    int num, i;
    scanf("%d", &num);
    for(i = 1; i <= num; i++){
        if (i%15 == 0){
            printf("FizzBuzz\n");
        }else if(i%5 == 0){
            printf("Buzz\n");
        }else if(i%3 == 0){
            printf("Fizz\n");
        }else{
            printf("%d\n", i);
        }
    }
    return 0;
}
