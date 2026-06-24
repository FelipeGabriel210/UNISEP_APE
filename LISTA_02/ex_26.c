#include <stdio.h>

int main() {
    int tamanho;

    printf("Digite o tamanho do quadrado: ");
    scanf("%d", &tamanho);

    for(int i = 1; i <= tamanho; i++) {
        for(int j = 1; j <= tamanho; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}