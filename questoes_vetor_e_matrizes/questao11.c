#include <stdio.h>

int main(){
    int matriz[5][5];
    int contador = 1;
    int soma;
    int soma_linha[5];
    int diag_principal[5];

    for (int i = 0; i < 5; i++)
    {   
        soma = 0;
        for (int j = 0; j < 5; j++)
        {
            matriz[i][j] = contador;
            if (i == j)
            {
                diag_principal[i] = contador;
            }
            soma += contador;
            contador += 1;
        }
        soma_linha[i] = soma;
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("(%d)", matriz[i][j]);
        }
    printf(" SOMA DA LINHA: %d", soma_linha[i]);
    printf("\n");
    }

    printf("ELEMENTOS DA DIAGONAL PRINCIPAL:");
    for (int i = 0; i < 5; i++)
    {
        printf("%d", diag_principal[i]);
    }
}
