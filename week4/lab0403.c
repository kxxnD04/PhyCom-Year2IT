#include <stdio.h>
int main(){
    char g;
    scanf("%c", &g);
    if ((int)g > 90){
        g = (char)(((int)g) -32);
    }
    switch (g)
    {
    case 'A':
        printf("Genius");
        break;
    case 'B':
        printf("Good");
        break;
    case 'C':
        printf("Try Harder");
        break;
    case 'D':
        printf("Very Bad");
        break;
    case 'F':
        printf("Fail");
        break;
    default:
        printf("Invalid Input");
    }
    return 0;
}
