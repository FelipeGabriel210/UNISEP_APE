#include <stdio.h>

int main() {
    int numero;

    do {
        printf("Digite um numero positivo: ");
        scanf("%d", &numero);

    } while(numero <= 0);

    printf("Numero valido!");

    return 0;
}