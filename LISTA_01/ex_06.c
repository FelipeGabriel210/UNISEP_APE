#include <stdio.h>

int main() {
    float kwh, valor;

    printf("Digite o consumo em kWh: ");
    scanf("%f", &kwh);

    if (kwh <= 100)
        valor = kwh * 0.50;
    else if (kwh <= 200)
        valor = kwh * 0.75;
    else
        valor = kwh * 1.00;

    printf("Valor total: R$ %.2f\n", valor);

    return 0;
}