#include <stdio.h>

int main() {
    int quantidade, numero;
    int maior, contador = 0;

    printf("insira a quantidade de numeros: ");
    scanf("%d", &quantidade);

    if (quantidade <= 0) {
        printf("Quantidade invalida.\n");
        return 1; 
    }

    for (int i = 0; i < quantidade; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numero);

        if (i == 0) {
           
            maior = numero;
            contador = 1;
        } else if (numero > maior) {
            maior = numero;
            contador = 1;
        } else if (numero == maior) {
            contador++;
        }
    }

    printf("\nMaior numero: %d\n", maior);
    printf("O maior numero foi lido %d vez(es).\n", contador);

    return 0;
}
