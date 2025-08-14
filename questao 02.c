#include <stdio.h>

int main() {
    int N, num = 1, linha = 1;

    printf("informe um numero inteiro positivo: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Numero invalido. Deve ser positivo.\n");
        return 1;
    }

    while (num <= N) {
        for (int i = 1; i <= linha && num <= N; i++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
        linha++;
    }

    return 0;
}


