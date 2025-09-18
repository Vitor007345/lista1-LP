#include <stdio.h>
#include <stdlib.h>

double faturaEletrica(double salarioMinimo, double quilowatts){
    return quilowatts * (salarioMinimo/700);
}

int main(){
    double salarioMinimo, quilowatts;
    printf("\nDigite o salário minimo: ");
    scanf("%lf", &salarioMinimo);
    printf("\nDigite quantos quilowatts foram gastos: ");
    scanf("%lf", &quilowatts);
    printf("O valor da fatura será %.2lf\n", faturaEletrica(salarioMinimo, quilowatts));
    return 0;
}
