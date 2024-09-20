#include <stdio.h>

int main() {
    int V1[15], V2[15];
    int contador = 0;

    // Leitura do vetor V1
    for (int i = 0; i < 15; i++) {
        printf("Digite o número %d para o vetor V1: ", i + 1);
        scanf("%d", &V1[i]);
    }

    // Leitura do vetor V2
    for (int i = 0; i < 15; i++) {
        printf("Digite o número %d para o vetor V2: ", i + 1);
        scanf("%d", &V2[i]);
    }

    // Comparação
    for (int i = 0; i < 15; i++) {
        if (V1[i] == V2[i]) {
            contador++;
        }
    }

    // Resultados
    printf("Quantidade de números iguais nas mesmas posições: %d\n", contador);

    return 0;
}
