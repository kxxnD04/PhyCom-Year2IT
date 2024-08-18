#include <stdio.h>

int compare(char seq1[], char seq2[]);
void swapcase(char seq1[]);
char lower(char c);

int main(){
    char seq1[101], seq2[101];
    scanf("%[^\n]", seq1);
    scanf(" %[^\n]", seq2);
    printf("*** Results ***\n");
    swapcase(seq1);
    swapcase(seq2);
    printf("***************\n");
    (compare(seq1, seq2) == 0) ? printf("Both strings are the same."):printf("Both strings are not the same.");
    return 0;
}
char lower(char c){
    if (c >= 'A' && c <= 'Z'){return c + 32;}
    return c;
}
int compare(char seq1[101], char seq2[101]){
    int i = 0;
    while (seq1[i] != '\0' && seq2[i] != '\0')
    {
        if (lower(seq1[i]) != lower(seq2[i])) {return 1;}
        i++;
    }
    if (seq1[i] == '\0' && seq2[i] == '\0'){return 0;}
    return 1;
}

void swapcase(char seq1[101]){
    for (int i = 0; seq1[i] != '\0'; i++){
        if (seq1[i] >= 65 && seq1[i] <= 90){
            printf("%c", seq1[i] + 32);
        }else if(seq1[i] >= 97 && seq1[i] <= 122){
            printf("%c", seq1[i] - 32);
        }else{
            printf("%c", seq1[i]);
        }
    }
    printf("\n");
}
