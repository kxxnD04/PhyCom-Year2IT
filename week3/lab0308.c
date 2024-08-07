#include <stdio.h>
int main(){
    long int sec;
    scanf("%ld", &sec);
    printf("%ld s = %ld d %ld h %ld m %ld s", sec, sec/86400, sec%86400/3600, sec%86400%3600/60, sec%86400%3600%60);
    return 0;
}
