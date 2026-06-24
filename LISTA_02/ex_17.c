#include <stdio.h>

int main() {
    int numero, contador = 0;

    do {
        printf("Digite um numero: ");
        scanf("%d", &numero);

        if(numero >= 0) {
            contador++;
        }

    } while(numero >= 0);

    printf("Quantidade = %d", contador);

    return 0;
}