#include <stdio.h>

int main() {
    int A[10], M[10], X;

    // Leitura do vetor A
    for (int i = 0; i < 10; i++) {
        printf("Digite o número para a posição %d: ", i + 1);
        scanf("%d", &A[i]);
    }

    printf("Digite um número X: ");
    scanf("%d", &X);

    // Multiplicação
    for (int i = 0; i < 10; i++) {
        M[i] = A[i] * X;
    }

    // Resultados
    printf("Vetor M: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", M[i]);
    }
    printf("\n");

    return 0;
}
