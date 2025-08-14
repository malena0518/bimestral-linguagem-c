#include <stdio.h>

int main() {
    int quant, num;
    int maior, contador = 0;

    printf("insira a quantidade de numeros: ");
    scanf("%d", &quant);

    if (quant <= 0) {
        printf("Quantidade invalida.\n");
        return 1; 
    }

    for (int i = 0; i < quant; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &num);

        if (i == 0) {
           
            maior = num;
            contador = 1;
        } else if (num > maior) {
            maior = num;
            contador = 1;
        } else if (num == maior) {
            contador++;
        }
    }

    printf("\nMaior numero: %d\n", maior);
    printf("O maior numero foi lido %d vez(es).\n", contador);

    return 0;
}
