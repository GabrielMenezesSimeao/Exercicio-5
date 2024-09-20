#include <stdio.h>

int main() {
    float notas[20], media = 0;
    int count = 0;

    // Leitura das notas
    for (int i = 0; i < 20; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
        media += notas[i];
    }
    
    media /= 20;

    // Contagem de alunos acima da média
    for (int i = 0; i < 20; i++) {
        if (notas[i] > media) {
            count++;
        }
    }

    // Resultados
    printf("Média da turma: %.2f\n", media);
    printf("Alunos acima da média: %d\n", count);

    return 0;
}
