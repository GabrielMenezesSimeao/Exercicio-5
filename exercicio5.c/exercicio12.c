#include <stdio.h>

int main() {
    int numeros[30], novoNumero;
    int count = 0;

    // Leitura do vetor
    for (int i = 0; i < 30; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("Digite um número para contar as aparições: ");
    scanf("%d", &novoNumero);

    // Contagem de aparições
    for (int i = 0; i < 30; i++) {
        if (numeros[i] == novoNumero) {
            count++;
        }
    }

    // Resultados
    printf("O número %d aparece %d vezes no vetor.\n", novoNumero, count);

    return 0;
}
