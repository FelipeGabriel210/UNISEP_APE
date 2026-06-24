#include <stdio.h>

int main() {
    int contador = 0;

    for(int i = 1; i <= 50; i++) {
        if(i % 2 == 0) {
            contador++;
        }
    }

    printf("Quantidade de pares = %d", contador);

    return 0;
}