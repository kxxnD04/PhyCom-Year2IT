#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

struct character
{
    char c;
    int count;
};

void bubble_sort(struct character arr[52], int l){
    int n = l;
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n - i -1; j++){
            if(tolower(arr[j].c) != tolower(arr[j+1].c)){
                if (tolower(arr[j].c) > tolower(arr[j+1].c)){
                    struct character temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }else{
                if (arr[j].c < arr[j+1].c){
                    struct character temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;                   
                }
            }
        }
    }
}

int main(){
    struct character arr[52];
    char text[1000];
    int count_num = 0;
    scanf("%[^\n]s", text);
    for(int i = 0; text[i] != '\0'; i++){
        char temp = text[i];
        if (temp != ' '){
            int is_found = 0;
            for(int j = 0; j < count_num; j++){
                if(arr[j].c == temp){
                    is_found++;
                    arr[j].count++;
                    break;
                }
            }
            if(!is_found){
                arr[count_num].c = temp;
                arr[count_num].count = 1;
                count_num++;
            }
        }
    }
    bubble_sort(arr, count_num);
    for(int i = 0; i < count_num; i++){
        printf("%c = %d\n", arr[i].c, arr[i].count);
    }
    return 0;
}
