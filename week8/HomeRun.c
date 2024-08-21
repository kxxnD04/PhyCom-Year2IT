#include <stdio.h>
int main(){
    int n, ans = 0;
    float player, lenght;
    scanf("%d\n%f", &n, &player);
    for(int i = 0; i < n; i++){
        scanf(" %f", &lenght);
        if (lenght < player){
            ans++;
        }
    }
    printf("%d", ans);
    return 0;
}
