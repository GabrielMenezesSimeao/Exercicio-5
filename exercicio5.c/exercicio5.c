#include <stdio.h>

int main() {
    int numeros[20];

    // Leitura dos 20 números
    for (int i = 0; i < 20; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Impressão em ordem inversa
    printf("Números em ordem inversa: ");
    for (int i = 19; i >= 0; i--) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}
