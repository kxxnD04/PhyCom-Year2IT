#include <stdio.h>
int compare(char name1[61], char name2[61]){
    int i = 0;
    while ( name1[i] != '\0' && name2[i] != '\0')
    {
       if (name1[i] < name2[i]){
            return 1;
       }else if (name1[i] > name2[i]) {
            return 0; 
        }i++;
    }
}
void swap_string(char name1[61], char name2[61]){
    char temp[61];
    int i = 0;
    for (i = 0; i < 61; i++){
        temp[i] = name2[i];
        name2[i] = name1[i];
        name1[i] = temp[i];
    }
}
int main(){
    char stu[20][61];
    for(int i=0; i<20;i++){
        scanf(" %[^\n]", &stu[i]);
        for(int j = 0; stu[i][j] != '\0'; j++){
            if (stu[i][j] >= 65 && stu[i][j] <= 90){stu[i][j]+=32;}
        }
    }
    for(int i = 0; i < 19; i++){
        char temp[61];
        for(int j = 0; j < 19-i; j++){
            if (compare(stu[j], stu[j+1]) == 0){
                swap_string(stu[j], stu[j+1]);
            }

        }
    }
    for (int s = 0; s < 20; s++){
        int last = 0;
        for(int t = 0; stu[s][t] != '\0'; t++){
            if (t == 0 || last == 1){
                printf("%c", stu[s][t] - 32);
                last -= (t == 0) ? 0 : 1;
            }else if (stu[s][t] == ' '){
                printf(" "); last++;
            }else{printf("%c", stu[s][t]);}
        }
        printf("\n");
    }
    return 0;
}
