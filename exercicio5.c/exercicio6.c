#include <stdio.h>

int main() {
    int N;
    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &N);

    int A[N], B[N], Soma[N];

    // Leitura dos vetores
    for (int i = 0; i < N; i++) {
        printf("Digite o elemento %d do vetor A: ", i + 1);
        scanf("%d", &A[i]);
        printf("Digite o elemento %d do vetor B: ", i + 1);
        scanf("%d", &B[i]);
    }

    // Soma dos vetores
    for (int i = 0; i < N; i++) {
        Soma[i] = A[i] + B[i];
    }

    // Resultados
    printf("Vetor Soma: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", Soma[i]);
    }
    printf("\n");

    return 0;
}
