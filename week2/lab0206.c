#include <stdio.h>
int main()
{
    char in1[31];
    char in2[31];
    char in3[31];
    char in4[31];
    scanf("%s\n%s\n%s\n%s", in1, in2, in3, in4);
    printf("String 1: %.3s\nString 2: %.4s\nString 3: %.5s\nString 4: %.6s", in1, in2, in3, in4);
    return 0;
}
