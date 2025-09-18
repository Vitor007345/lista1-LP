#include <stdio.h>
#include <stdlib.h>


int somaImpares(int limite){
    int soma = 0;
    for(int i = 1; i <= limite; i+=2){
        soma+=i;
    }
    return soma;
}

int main(){
    int limite;
    scanf("%d", &limite);
    printf("%d\n", somaImpares(limite));
    return 0;
}
