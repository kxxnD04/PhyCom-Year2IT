#include <stdio.h>
#include <string.h>

struct Record
{
    char id[10];
    char name[100];
    long salary;
    long sales;
};

int main(){
    int n, is_found = 0;
    scanf("%d\n", &n);
    struct Record r[n];
    for (int i = 0; i < n; i++){
        scanf("%s %s %ld %ld", r[i].id, r[i].name, &r[i].salary, &r[i].sales);
    }
    char find[10];
    scanf(" %s", find);
    for(int i = 0; i < n; i++){
        if(!strcmp(find, r[i].id)){
            is_found++;
            printf("%s\n%s\n%ld\n%.2f\n%ld\n%.2f", r[i].id, r[i].name, r[i].sales, r[i].sales*1.00*0.02, r[i].salary, (r[i].salary*1.00) + (r[i].sales*1.00*0.02));
            break;
        }
    }
    if(!is_found){printf("ID not found !!!");}
    return 0;
}
