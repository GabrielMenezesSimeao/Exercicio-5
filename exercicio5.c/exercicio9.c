#include <stdio.h>

void inserirEmOrdem(int numeros[], int n, int novoNumero) {
    int i;
    for (i = n; i > 0 && numeros[i - 1] > novoNumero; i--) {
        numeros[i] = numeros[i - 1]; // Desloca os elementos para a direita
    }
    numeros[i] = novoNumero; // Insere o novo número na posição correta
}

int main() {
    int numeros[11]; // Para 10 números + 1 novo
    int novoNumero;

    // Leitura dos números
    for (int i = 0; i < 10; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Ordenação simples
    for (int i = 0; i < 10 - 1; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (numeros[i] > numeros[j]) {
                int temp = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = temp;
            }
        }
    }

    printf("Digite um novo número: ");
    scanf("%d", &novoNumero);

    // Inserção na posição correta
    inserirEmOrdem(numeros, 10, novoNumero);

    // Resultados
    printf("Vetor após inserção: ");
    for (int i = 0; i < 11; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}
