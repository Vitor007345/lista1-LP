#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int reverseNum(int num){
    int reverse = 0;
    while(num > 0){
        reverse *= 10;
        reverse += num % 10;
        num/=10;
    }
    return reverse;
}

bool ehPalindromo(int num){
    return num == reverseNum(num);
}

void listPalindromos(int n){
    for(int i = 0; i <= n; i++){
        if(ehPalindromo(i)){
            printf("%d\n", i);
        }
    }
}

int main(){
    listPalindromos(10000);
    return 0;
}
