#include <stdio.h>
int main(){
    char seq[301];
    char find, find2;
    int pos[301];
    int count = 0;
    scanf("%[^\n]", &seq);
    scanf(" %c", &find);
    find2 = find;
    if (find2 >= 'A' && find2 <= 'Z'){
        find2 += 32;
    }
    for(int i = 0; seq[i] += '\0'; i++){
        if (seq[i] >= 'A' && seq[i] <= 'Z' ){
            seq[i] += 32;
        }
        if (seq[i] == find2){
            pos[count] = i;
            count++;
        }
    }
    if (count != 0){
    printf("There is/are %d \"%c\" in the above sentences.\n", count, find);
    printf("Position: ");
    for(int i = 0; i < count; i++){
        if (i != count-1){
            printf("%d, ", pos[i] + 1);
        }else{
            printf("%d", pos[i] + 1);
        }
    }
    }else{
        printf("Not found.");
    }

    return 0;
}
