#include <stdio.h>
#include <stdlib.h>

void troca(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b =  temp;
}


int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("Antes da troca:\na:%d b:%d\n", a, b);
    troca(&a, &b);
    printf("Depois da troca:\na:%d b:%d\n", a, b);
    return 0;
}
