#include <stdio.h>

int main() {
    float filiais[20];
    float media_lucros = 0.0;
    float soma_lucros = 0.0;
    float qtd_filiais_lucrativas = 0.0;

    for (int i = 1; i < 21; i++) 
    {
        printf("Digite o faturamento da filial %d: ", i);
        scanf("%f", &filiais[i]);
    }
    for (int i = 1; i < 21; i++)
    {
        if (filiais[i] > 0)
        {
            printf("Filial %d e lucrativa\n", i);
            soma_lucros += filiais[i];
            qtd_filiais_lucrativas++;
        }
    }
    media_lucros = soma_lucros / qtd_filiais_lucrativas;
    printf("A media de faturamento das filiais lucrativas e: %.2f\n", media_lucros);
}