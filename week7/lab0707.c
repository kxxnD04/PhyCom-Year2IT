#include <stdio.h>
#include <string.h>
int compare(char name1[61], char name2[61]);
void swap_string(char name1[61], char name2[61]);
void merge(char arr[][61], int l, int m, int r);
void merge_sort(char arr[][61], int l, int r);

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
    merge_sort(stu, 0, n-1);
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

void merge_sort(char arr[][61], int l, int r){
    if (l < r){ // l < r is to divide the array until the array is == 1
    int m = (r+l)/ 2;
    merge_sort(arr, l, m); // merge_sort left
    merge_sort(arr, m+1, r); // merge_sort right
    merge(arr, l, m, r); // merge left and right together
    }
}

void merge(char arr[][61], int l, int m, int r){
    int i, j, k;
    int a1 = m - l + 1; // size of left array
    int a2 = r-m; // size of right array
    char arr1[a1][61], arr2[a2][61]; // create a left and right array

    for (i = 0; i < a1; i++){ // copy original array to left array
        strcpy(arr1[i], arr[l + i]);
    }
    for (j = 0; j < a2; j++){ // copy original array to right array
        strcpy(arr2[j], arr[m + 1 + j]);
    }
    i = 0, j = 0, k = l;

    while (i < a1 && j < a2) // compare left and right array
    {
        if (compare(arr1[i], arr2[j])){
            strcpy(arr[k], arr1[i]);
            i++;
        }else{
            strcpy(arr[k], arr2[j]);
            j++;            
        }
        k++;
    }
    while (i < a1) // copy the rest of num to original array
    {
        strcpy(arr[k], arr1[i]);
        i++;
        k++;
    }
    while (j < a2) // copy the rest of num to original array
    {
        strcpy(arr[k], arr2[j]);
        j++;
        k++;
    }    
}
