#include <stdio.h>

int main() {
    int numero, maior = 0;

    do {
        printf("Digite um numero (999 para sair): ");
        scanf("%d", &numero);

        if(numero != 999 && numero > maior) {
            maior = numero;
        }

    } while(numero != 999);

    printf("Maior numero = %d", maior);

    return 0;
}