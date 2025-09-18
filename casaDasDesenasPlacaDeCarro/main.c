#include <stdio.h>
#include <stdlib.h>


int main()
{
    int placa;
    scanf("%d", &placa);
    printf("%d", (placa / 10) % 10);
    return 0;
}
