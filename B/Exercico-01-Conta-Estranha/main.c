#include <stdio.h>
#include <stdlib.h>

double contaEstranha(int n){
    double resultado = 0;
    for(int i = 1; i <= n - 1; i++){
        resultado += (double)((n-i + 1) * (n-i))/i;
    }
    return resultado;
}

int main()
{
    int num;
    scanf("%d", &num);
    printf("%lf\n", contaEstranha(num));
    return 0;
}
