#include <stdio.h>

int main() {
    float salario, final;

    printf("Digite o salario: ");
    scanf("%f", &salario);

    if (salario > 3000)
        final = salario * 1.05;
    else
        final = salario * 1.10;

    printf("Salario final: %.2f\n", final);

    return 0;
}