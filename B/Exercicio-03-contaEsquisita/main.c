#include <stdio.h>
#include <stdlib.h>

double pot(double base, int exp){
    int expWrapper = (exp>=0)?exp:-exp;
    double pot = 1;
    for(int i = 0; i < expWrapper; i++){
        pot *= base;
    }
    return (exp < 0)? 1/pot:pot;
}

long fat(long n){
    long fat = 1;
    for(int i = 1; i <= n; i++){
        fat*= i;
    }
    return fat;
}


double contaEsquisita(double x, int numTermos){
    static const int padraoFat[] = {1, 2, 3, 2};
    double resultado = 0;
    for(int i = 0; i < numTermos; i++){
        double operacaoEstranha = pot(x, i+2)/fat(padraoFat[i%4]);
        resultado += (i & 1)?operacaoEstranha:-operacaoEstranha;
    }
    return resultado;
}

int main()
{
    double x;
    int numTermos;
    scanf("%lf %d", &x, &numTermos);
    printf("%lf", contaEsquisita(x, numTermos));
    return 0;
}
