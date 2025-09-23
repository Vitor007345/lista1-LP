#include <stdio.h>
#include <stdlib.h>

double grausCentigradoPraFarenheit(double centigrados){
    return ((9 * centigrados) + 100)/5;
}

int main(){
    double centigrados;
    scanf("%lf", &centigrados);
    printf("%lf fahrenheit\n", grausCentigradoPraFarenheit(centigrados));
    return 0;
}
