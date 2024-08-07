#include <stdio.h>
int main(){
    int n, count[27], count_c = 0;
    char c, mem[27];
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf(" %c", &c);
        if (c >= 65 && c <= 90){c+=32;}
        for(int j = 0; j < 27; j++){
            if (mem[j] != c && (mem[j] < 'a' || mem[j] > 'z')){
                mem[j] = c;
                count[j] = 1;
                count_c += 1;
                break;
            }else if(mem[j] == c){
                count[j]++;
                break;
            }
        }
    }
    for(int i = 0; i < count_c; i++){
        printf("%c: %d\n", mem[i], count[i]);
    }
    return 0;
}
