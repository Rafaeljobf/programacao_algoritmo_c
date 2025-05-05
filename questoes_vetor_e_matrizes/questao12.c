#include <stdio.h>

int main(){
    int matriz_a[2][3];
    int matriz_b[2][3];
    int matriz_c[2][3];

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            printf("Digite o elemento [%d][%d] da matriz A: ", i, j);
            scanf("%d", &matriz_a[i][j]);
        }
    }
    printf("\n");

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            printf("Digite o elemento [%d][%d] da matriz B: ", i, j);
            scanf("%d", &matriz_b[i][j]);
        }
    }
    printf("\n");

    printf("MATRIZ C:\n");
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            matriz_c[i][j] = matriz_a[i][j] + matriz_b[i][j];
            printf("[%d]", matriz_c[i][j]);
        }
    printf("\n");
    }
}