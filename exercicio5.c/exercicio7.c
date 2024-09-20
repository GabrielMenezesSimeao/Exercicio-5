#include <stdio.h>

int main() {
    float temperaturas[365];
    float menor, maior, media = 0;
    int diasAbaixoMedia = 0;

    // Leitura das temperaturas
    for (int i = 0; i < 365; i++) {
        printf("Digite a temperatura do dia %d: ", i + 1);
        scanf("%f", &temperaturas[i]);
        media += temperaturas[i];
    }

    media /= 365;
    menor = maior = temperaturas[0];

    // Calcular menor e maior
    for (int i = 0; i < 365; i++) {
        if (temperaturas[i] < menor) {
            menor = temperaturas[i];
        }
        if (temperaturas[i] > maior) {
            maior = temperaturas[i];
        }
        if (temperaturas[i] < media) {
            diasAbaixoMedia++;
        }
    }

    // Resultados
    printf("Menor temperatura: %.2f\n", menor);
    printf("Maior temperatura: %.2f\n", maior);
    printf("Temperatura média anual: %.2f\n", media);
    printf("Dias com temperatura abaixo da média: %d\n", diasAbaixoMedia);

    return 0;
}
