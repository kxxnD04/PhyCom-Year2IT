#include <stdio.h>
#include <string.h>

struct Weather
{
    char outlook[9]; //outlook{overcast,sunny,rain}
    int temperature;
    int humidity;
    char wind; //wind{T,F}
};
void playing_decision(struct Weather);

int main(){
    int days, tem, humidity;
    char outlook[9], wind;
    scanf("%d\n", &days);
    struct Weather lst[days];
    for(int i = 0; i < days; i++){
        scanf("%s %d %d %c", lst[i].outlook, &lst[i].temperature, &lst[i].humidity, &lst[i].wind);
    }
    for(int i = 0; i < days; i++){
        playing_decision(lst[i]);
    }
    return 0;
}

void playing_decision(struct Weather w){
    if((!strcmp(w.outlook, "overcast")) | ((!strcmp(w.outlook, "rain")) & w.wind == 'F') | ((!strcmp(w.outlook, "sunny")) & w.humidity <= 77.5)){
        printf("yes\n");
    }else{
        printf("no\n");
    }
}
