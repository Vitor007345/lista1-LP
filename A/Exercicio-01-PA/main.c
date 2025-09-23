#include <stdio.h>
#include <stdlib.h>

double termoPA(double primeiroTermo, double razao, int n){
    return primeiroTermo + ((n - 1) * razao);
}

int main()
{
    double primeiroTermo, razao;
    int n;
    scanf("%lf %lf %d", &primeiroTermo, &razao, &n);
    printf("%lf", termoPA(primeiroTermo, razao, n));
    return 0;
}
