#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

double media(int qnt, ...){
    va_list args;
    va_start(args, qnt);
    double soma = 0;
    for(int i = 0; i < qnt; i++){
        soma += va_arg(args, double);
    }
    va_end(args);

    return soma/qnt;
}

int main()
{
    double a, b;
    scanf("%lf %lf", &a, &b);
    printf("MEDIA %lf", media(2, a, b));
    return 0;
}
