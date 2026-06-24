#include <stdio.h>

int main() {
    int numero, soma = 0;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    for(int i = 1; i <= numero; i++) {
        soma += i;
    }

    printf("Soma = %d", soma);

    return 0;
}