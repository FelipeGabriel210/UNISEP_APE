#include <stdio.h>

int main() {
    int n;
    int fat = 1;

    printf("Digite um numero: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        fat = fat * i;
    }

    printf("Fatorial = %d\n", fat);

    return 0;
}