#include <stdio.h>

int main() {
    int numeros[20], novoNumero;
    int i, j;

    // Leitura do vetor
    for (i = 0; i < 20; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("Digite um número para verificar: ");
    scanf("%d", &novoNumero);

    // Verificação e remoção
    int encontrado = 0;
    for (i = 0; i < 20; i++) {
        if (numeros[i] == novoNumero) {
            encontrado = 1;
            // Criação do novo vetor sem o número encontrado
            for (j = i; j < 19; j++) {
                numeros[j] = numeros[j + 1];
            }
            break; // Sai do loop após encontrar o primeiro
        }
    }

    // Resultados
    if (encontrado) {
        printf("Número encontrado e vetor após remoção: ");
        for (i = 0; i < 19; i++) {
            printf("%d ", numeros[i]);
        }
        printf("\n");
    } else {
        printf("Número não encontrado no vetor.\n");
    }

    return 0;
}
