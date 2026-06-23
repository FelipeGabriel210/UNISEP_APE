#include <stdio.h>

int main() {
    float a, b, res;
    char op;

    printf("Digite dois numeros: ");
    scanf("%f %f", &a, &b);

    printf("Digite a operacao (+ - * /): ");
    scanf(" %c", &op);

    if (op == '+') res = a + b;
    else if (op == '-') res = a - b;
    else if (op == '*') res = a * b;
    else if (op == '/') {
        if (b != 0)
            res = a / b;
        else {
            printf("Erro: divisao por zero\n");
            return 0;
        }
    } else {
        printf("Operacao invalida\n");
        return 0;
    }

    printf("Resultado: %.2f\n", res);

    return 0;
}