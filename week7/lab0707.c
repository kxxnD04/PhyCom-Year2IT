#include <stdio.h>
int compare(char name1[61], char name2[61]);
void swap_string(char name1[61], char name2[61]);

int compare(char name1[61], char name2[61]){
    int i = 0, l1 = 0, l2 = 0;
    while ( name1[i] != '\0' && name2[i] != '\0')
    {
       if (name1[i] < name2[i]){
            return 1;
       }else if (name1[i] > name2[i]) {
            return 0; 
        }i++;
    }
    if (name1[i] == '\0' && name2[i] != '\0'){return 1;}
    return 0;
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
    int n;
    scanf("%d", &n);
    char stu[n][61];
    for(int i=0; i<n;i++){
        scanf(" %[^\n]", &stu[i]);
        for(int j = 0; stu[i][j] != '\0'; j++){
            if (stu[i][j] >= 65 && stu[i][j] <= 90){stu[i][j]+=32;}
        }
    }
    for(int i = 0; i < n-1; i++){
        char temp[61];
        for(int j = 0; j < n-1-i; j++){
            if (compare(stu[j], stu[j+1]) == 0){
                swap_string(stu[j], stu[j+1]);
            }

        }
    }
    for (int s = 0; s < n; s++){
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
