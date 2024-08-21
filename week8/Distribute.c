#include <stdio.h>
#include <math.h>
int main(){
    unsigned long long int money, child, ans = 0;
    scanf("%llu\n%llu", &money, &child);
    if (money < child){
        printf("-1");
    }else{
        if (money == child*8){ans+=child;}
        else if (money > child*8){ans += child-1;}
        else if (money < child*8){
            unsigned long long int new_money = money - child;
            ans = floor(new_money/7);
            if ((new_money - ((floor(new_money/7))*7) == 3) && (child - (floor(new_money/7)) == 1)){
                ans--;
            }
            
        }
        printf("%llu", ans);
        
    }
    return 0;
}
