#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int strip_a(char* paper){
    if (strlen(paper) == 3){
        return 10;
    }
    return *(paper + sizeof(char))-'0';
}

int main(){
    char *p1 = (char*)malloc(4*sizeof(char));
    char *p2 = (char*)malloc(4*sizeof(char));
    scanf("%s\n%s", p1, p2);
    printf("%d", (int)pow(2, strip_a(p2)-strip_a(p1)));
    free(p1);
    free(p2);
    return 0;
}
