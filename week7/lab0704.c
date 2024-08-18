#include <stdio.h>

double celsiusToFahrenheit(double celcius);
double FahrenheitToCelcius(double fahrenheit);
void printFahrenheit(double fahrenheit);
void printCelcius(double celcius);

int main(){
    double n;
    char choice;
    scanf("%lf %c", &n, &choice);
    if (choice >= 'A' && choice <= 'Z') {choice += 32;}
    (choice == 'c') ? printFahrenheit(celsiusToFahrenheit(n)) : printCelcius(FahrenheitToCelcius(n));
    return 0;
}

double celsiusToFahrenheit(double celcius){
    return 32 + (celcius*(180.0/100.0));
}

double FahrenheitToCelcius(double fahrenheit){
    return (fahrenheit-32)*(100.0/180.0);
}

void printFahrenheit(double fahrenheit){
    printf("%.2lf f", fahrenheit);
}

void printCelcius(double celcius){
    printf("%.2lf c", celcius);
}