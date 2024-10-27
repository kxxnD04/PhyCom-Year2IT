#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int find_mi(int num, int l){
    if(l == 0){
        return num;
    }else{
        int temp;
        scanf("%d", &temp);
        if (temp < num){
            num = temp;
        }
        return find_mi(num, l-1);
    }
}
int find_ma(int num, int l){
    if(l == 0){
        return num;
    }else{
        int temp;
        scanf("%d", &temp);
        if (temp > num){
            num = temp;
        }
        return find_ma(num, l-1);
    }
}

int main(){
    char *con = (char*)malloc(4*sizeof(char));
    int n1;
    scanf("%s", con);
    scanf("%d", &n1);
    if(!strcmp(con, "MAX")){
        printf("MAX : %d", find_ma(n1, 4));
    }else{
        printf("MIN : %d", find_mi(n1, 4));
    }
    free(con);
    return 0;
}
