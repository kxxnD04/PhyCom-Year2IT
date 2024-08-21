#include <stdio.h>

int main() {
    unsigned long long int nnn, aaa, bbb, ccc, ddd, eee, fff, ggg;

    scanf("%llu", &nnn);
    scanf("%llu", &aaa);
    scanf("%llu", &bbb);
    scanf("%llu", &ccc);
    scanf("%llu", &ddd);
    scanf("%llu", &eee);
    scanf("%llu", &fff);
    scanf("%llu", &ggg);

    if (fff > nnn || ggg > nnn) {
        printf("Error\n");
    } else {
        if (ggg < fff) {
            unsigned long long int temp = fff;
            fff = ggg;
            ggg = temp;
        }

        if (ggg <= fff + aaa) {
            printf("%llu\n", bbb);
        } else if (ggg <= fff + aaa + ccc) {
            printf("%llu\n", bbb + ((ggg - (fff + aaa)) * ddd));
        } else {
            printf("%llu\n", bbb + (ccc * ddd) + ((ggg - (fff + aaa + ccc)) * eee));
        }
    }
    return 0;
}
