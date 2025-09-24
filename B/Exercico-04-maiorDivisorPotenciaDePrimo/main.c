#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/********************************************************************
* Achei q fosse prescisar disso mas percebi que funciona e é mais eficiente apenas ir testando todos pq é impossível entrar um não primo.
* Calcular primo é mto pesado, msm usando os primos anteriores pra agilizar.
*/
/*
int nextPrimo(int arrPrimos[], int length){
    int testPrimo = 2;
    if(length != 0){
        testPrimo = arrPrimos[length - 1];
        bool encontrou = false;
        while(!encontrou){
            testPrimo ++;
            encontrou = true;
            int i = 0;
            while(encontrou && arrPrimos[i] * arrPrimos[i] <= testPrimo){
                if(testPrimo % arrPrimos[i] == 0){
                    encontrou = false;
                }
                i++;
            }
        }
    }
    arrPrimos[length] = testPrimo;
    return testPrimo;
}
*/


int maiorDivisorPotPrimo(int n){
    int maiorDivisorPotPrimo = 0;
    int divisorTeste = 2;
    while(divisorTeste * divisorTeste <= n){
        int potDePrimo = 1;
        while(n % divisorTeste == 0){
            n /= divisorTeste;
            potDePrimo *= divisorTeste;
        }
        if(potDePrimo > maiorDivisorPotPrimo){
            maiorDivisorPotPrimo = potDePrimo;
        }
        divisorTeste++;
    }
    if(n>1 && n > maiorDivisorPotPrimo){
        maiorDivisorPotPrimo = n;
    }
    return maiorDivisorPotPrimo;
}


//Versão menos eficiente mas mais simples
/*
int maiorDivisorPotPrimo(int n){
    int maiorDivisorPotPrimo = 0;
    int divisorTeste = 2;
    while(n > 1){
        int potDePrimo = 1;
        while(n % divisorTeste == 0){
            n /= divisorTeste;
            potDePrimo *= divisorTeste;
        }
        if(potDePrimo > maiorDivisorPotPrimo){
            maiorDivisorPotPrimo = potDePrimo;
        }
        divisorTeste++;
    }
    return maiorDivisorPotPrimo;
}
*/


int main(){
    int n;
    scanf("%d", &n);
    printf("%d", maiorDivisorPotPrimo(n));
    return 0;
}
