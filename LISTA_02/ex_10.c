#include <stdio.h>

int main() {
    int a, b;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);

    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    if (a <= b) {
        for (int i = a; i <= b; i++) {
            printf("%d\n", i);
        }
    } else {
        for (int i = a; i >= b; i--) {
            printf("%d\n", i);
        }
    }

    return 0;
}