#include <stdio.h>
int main()
{
    char c2, c4, c1, c3, c5;
    scanf("%c\n%c\n%c\n%c\n%c", &c1, &c2, &c3, &c4, &c5);
    int n1 = (int)c1, n3 = (int)c3, n5 = (int)c5;
    printf("%c\n%c\n%c\n%c\n%c", n1+1,c2,n3+1,c4,n5+1);
    return 0;
}
