#include <stdio.h>

int main() {
    int matriz[3][3];
    int estado;
    float media[3];
    float soma;

    // Leitura dos valores da matriz
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite a idade da cidade %d do estado %d: ", j + 1, i + 1);
            scanf("%d", &matriz[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 3; i++) {
        soma = 0.0;
        for (int j = 0; j < 3; j++) {
            soma += matriz[i][j];
        }
        media[i] = soma / 3;
    }

    printf("Digite o estado que quer ver a media de idade:\n");
    scanf("%d", &estado);

    printf("A media de idade das cidades do estado %d e %.2f.", estado, media[estado - 1]);

    return 0;
}