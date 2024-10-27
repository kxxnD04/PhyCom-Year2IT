#include <stdio.h>
#include <stdlib.h>
int how_long(char* word){
    int count = 0;
    char *ptr = word;
    while (*ptr != '\0')
    {
        count++;
        ptr += sizeof(char);
    }
    return count;
    
}
void print_word(char* word){
    char *ptr = word;
    while (*ptr != '\0')
    {
        printf("%c", *(ptr));
        ptr += sizeof(char);
    }
}

int main(){
    int length;
    char *word1 = (char*)malloc(51*sizeof(char));
    char *word2 = (char*)malloc(41*sizeof(char));
    scanf("%d", &length);
    scanf(" %[^\n]s", word1);
    scanf(" %[^\n]s", word2);
    int w1 = how_long(word1);
    int w2 = how_long(word2);
    int s_l1 = ((length-2)-w1)%2 == 1 ? ((length-2)-w1)/2+1 : ((length-2)-w1)/2;
    int s_r1 = ((length-2)-w1)/2;
    int s_l2 = ((length-2)-w2)%2 == 1 ? ((length-2)-w2)/2+1 : ((length-2)-w2)/2;
    int s_r2 = ((length-2)-w2)/2;

    for(int i = 1; i<= length; i++){
        printf("*");
    }
    printf("\n*");
    for(int i = 1; i<= s_l1; i++){
        printf(" ");
    }
    print_word(word1);
    for(int i = 1; i<= s_r1; i++){
        printf(" ");
    }
    printf("*\n*");
    for(int i = 1; i<= s_l2; i++){
        printf(" ");
    }
    print_word(word2);
    for(int i = 1; i<= s_r2; i++){
        printf(" ");
    }
    printf("*\n");
    for(int i = 1; i<= length; i++){
        printf("*");
    }
    free(word1);
    free(word2);
    return 0;
}