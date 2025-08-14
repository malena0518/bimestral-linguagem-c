#include <stdio.h>

int main() {
    int opcao;
    float num1, num2, resultado;

    
    printf("Escolha uma operação:\n");
    printf("1. Adição\n");
    printf("2. Subtração\n");
    printf("3. Multiplicação\n");
    printf("4. Divisão\n");
    printf("Opção: ");
    scanf("%d", &opcao);


    if (opcao < 1 || opcao > 4) {
        printf("Opção inválida!\n");
        return 1; 
    }

    
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    switch (opcao) {
        case 1:
            resultado = num1 + num2;
            printf("Resultado da adição: %.2f\n", resultado);
            break;
        case 2:
            resultado = num1 - num2;
            printf("Resultado da subtração: %.2f\n", resultado);
            break;
        case 3:
            resultado = num1 * num2;
            printf("Resultado da multiplicação: %.2f\n", resultado);
            break;
        case 4:
            if (num2 == 0) {
                printf("Erro: divisão por zero!\n");
            } else {
                resultado = num1 / num2;
                printf("Resultado da divisão: %.2f\n", resultado);
            }
            break;
    }

    return 0;
}
