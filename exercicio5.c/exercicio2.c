#include <stdio.h>

int main() {
    int Q[20], maior, posicao;

    // Leitura do vetor
    for (int i = 0; i < 20; i++) {
        do {
            printf("Digite um número positivo para a posição %d: ", i + 1);
            scanf("%d", &Q[i]);
        } while (Q[i] < 0);
    }

    // Encontrar maior elemento e posição
    maior = Q[0];
    posicao = 0;
    for (int i = 1; i < 20; i++) {
        if (Q[i] > maior) {
            maior = Q[i];
            posicao = i;
        }
    }

    // Resultados
    printf("Maior elemento: %d, na posição: %d\n", maior, posicao);

    return 0;
}
