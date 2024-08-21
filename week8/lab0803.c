#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
int main() {
    char first[7], second[3], third1[4], third2[4], third3[4], third4[4];
    char urlotto[7];
    int money = 0;
 
    scanf("%6s", first);
    scanf("%2s", second);
    scanf("%3s", third1);
    scanf("%3s", third2);
    scanf("%3s", third3);
    scanf("%3s", third4);
    scanf("%6s", urlotto);
 
    if (strcmp(urlotto, first) == 0) {
        money += 6000000;
    }
 
    int first_num = atoi(first);
    int urlotto_num = atoi(urlotto);
 
    if (strcmp(first, "000000") == 0 && 
       (strcmp(urlotto, "000001") == 0 || strcmp(urlotto, "999999") == 0)) {
        money += 100000;
    } else if (strcmp(first, "999999") == 0 && 
              (strcmp(urlotto, "000000") == 0 || strcmp(urlotto, "999998") == 0)) {
        money += 100000;
    } else if (urlotto_num == first_num - 1 || urlotto_num == first_num + 1) {
        money += 100000;
    }
 
    if (strcmp(&urlotto[4], second) == 0) {
        money += 2000;
    }
 
    if (strncmp(urlotto, third1, 3) == 0 || strncmp(urlotto, third2, 3) == 0) {
        money += 4000;
    }
 
    if (strncmp(&urlotto[3], third3, 3) == 0 || strncmp(&urlotto[3], third4, 3) == 0) {
        money += 4000;
    }
 
    printf("%d\n", money);
 
    return 0;
}
