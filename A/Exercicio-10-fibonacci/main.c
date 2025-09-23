#include <stdio.h>
#include <stdlib.h>

long long int fibonacci(int n){
    long long int anterior = 0;
    long long int atual = 1;
    for(int i = 0; i < n - 1; i++){
        int temp = atual;
        atual += anterior;
        anterior =  temp;
    }
    return (n == 0)? anterior:atual;
}
int main(){
    int n;
    scanf("%d", &n);
    printf("%lld\n", fibonacci(n));
    return 0;
}
