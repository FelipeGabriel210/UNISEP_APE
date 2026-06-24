#include <stdio.h>

int main() {
    int opcao;

    do {
        printf("\n1 - Ola");
        printf("\n2 - Tudo bem?");
        printf("\n3 - Sair");
        printf("\nEscolha: ");
        scanf("%d", &opcao);

        if(opcao == 1) {
            printf("Ola!\n");
        }

        if(opcao == 2) {
            printf("Tudo bem?\n");
        }

    } while(opcao != 3);

    return 0;
}