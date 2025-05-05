#include <stdio.h>

int main(){
    int matriz[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Digite o numero no espaco %d%d: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    printf("\n");
    }
    
    for (int i = 0; i < 3; i++)         // Matriz com os números digitados
    {
        for (int j = 0; j < 3; j++)
        {
            printf("(%d)", matriz[i][j]);
        }
    printf("\n");
    }

    printf("MANIPULANDO A MATRIZ:\n");
    for (int i = 0; i < 3; i++)         // Matriz manipulada com as regras do exercicio
    {
        for (int j = 0; j < 3; j++)
        {
            if (matriz[i][j] % 2 == 0)
            {
                matriz[i][j] = 1;
                printf("(%d)", matriz[i][j]);
            }
            else
            {
                matriz[i][j] = -1;
                printf("(%d)", matriz[i][j]);
            }
        }
    printf("\n");
    }
}