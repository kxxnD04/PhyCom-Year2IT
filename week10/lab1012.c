#include <stdio.h>
#include <string.h>

struct Book {
    char id[10];
    char name[100];
    char author[100];
};

int main(){
    int n = 0;
    char find[11];
    scanf("%d\n%s", &n, find);
    struct Book b[n];
    for(int i = 0; i < n; i++){
        scanf("%s %s %s", b[i].id, b[i].name, b[i].author);
    }
    int is_found = 0;
    for(int i = 0; i < n; i++){
        if(!strcmp(find, b[i].id)){
            printf("%s %s %s", b[i].id, b[i].name, b[i].author);
            is_found++;
            break;
        }
    }

    if (!is_found){
        printf("Not Found");
    }
    return 0;
}
