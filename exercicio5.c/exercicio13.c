#include <stdio.h>

int main() {
    int VET[50], i, j;
    int repetidos = 0;

    // Leitura dos números
    for (i = 0; i < 50; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &VET[i]);
    }

    // Verificação de repetidos
    printf("Números repetidos e suas posições:\n");
    for (i = 0; i < 50; i++) {
        for (j = i + 1; j < 50; j++) {
            if (VET[i] == VET[j]) {
                printf("Número %d encontrado nas posições %d e %d\n", VET[i], i, j);
                repetidos = 1;
            }
        }
    }

    if (!repetidos) {
        printf("Não existem números repetidos.\n");
    }

    return 0;
}
