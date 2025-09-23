#include <stdio.h>
#include <stdlib.h>

#define EF_CARRO 12

double distanciaViagem(double tempo, double velMedia){
    return tempo * velMedia;
}

double litrosGastos(double distancia, double eficienciaCarro){
    return distancia/eficienciaCarro;
}

int main(){
    double tempo, velMedia;
    scanf("%lf %lf", &tempo, &velMedia);
    double distancia = distanciaViagem(tempo, velMedia);
    printf("Distancia: %lf Litros: %lf", distancia, litrosGastos(distancia, EF_CARRO));
    return 0;
}
