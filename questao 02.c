#include <stdio.h>

int main() {
    int N;
    int numero = 1; 
    
    printf("informe número inteiro positivo: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) { 
        for (int j = 1; j <= i; j++) {
            printf("%d ", num);
            num++; 
        }
        printf("\n");
    }

    return 0;
}
