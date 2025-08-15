#include <stdio.h>

int main() {
    float velocidade;
    
    printf("Qual a velocidade com que costuma dirigir seu carro (em km/h)? ");
    scanf("%f", &velocidade);

    if (velocidade > 75) {
        printf("Guarda de trânsito: Você está acima do limite de velocidade. Multa gravíssima!\n");
    } else if (velocidade > 65) {
        printf("Guarda de trânsito: Você está acima do limite de velocidade. Multa média!\n");
    } else if (velocidade > 55) {
        printf("Guarda de trânsito: Você está acima do limite de velocidade. Multa leve!\n");
    } else if (velocidade > 45) {
        printf("Guarda de trânsito: Você está dentro do limite de velocidade. Continue assim.\n");
    } else {
        printf("Guarda de trânsito: Você está abaixo do limite de velocidade. Tenha cuidado!\n");
    }

    return 0;
}
