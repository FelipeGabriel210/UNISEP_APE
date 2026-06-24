#include <stdio.h>

int main() {
    int numero, primo = 1;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if(numero <= 1) {
        primo = 0;
    }

    for(int i = 2; i < numero; i++) {
        if(numero % i == 0) {
            primo = 0;
        }
    }

    if(primo == 1) {
        printf("Numero primo");
    } else {
        printf("Numero nao primo");
    }

    return 0;
}