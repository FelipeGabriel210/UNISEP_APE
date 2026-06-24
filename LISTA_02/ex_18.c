#include <stdio.h>

int main() {
    int idade, soma = 0, quantidade = 0;
    float media;

    do {
        printf("Digite uma idade (0 para sair): ");
        scanf("%d", &idade);

        if(idade != 0) {
            soma += idade;
            quantidade++;
        }

    } while(idade != 0);

    media = (float)soma / quantidade;

    printf("Media = %.2f", media);

    return 0;
}