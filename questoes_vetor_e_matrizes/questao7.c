#include <stdio.h>

int main(){
    float filiais[8];
    float faturamento = 0.0;
    int qtd_lucrativas = 0;

    for (int i = 0; i < 8; i++)
    {
        printf("Digite o balanco da filial %d ", i + 1);
        scanf("%f", &filiais[i]);
        faturamento += filiais[i];
    }

    printf("O faturamento total das filias foi de: %.2f\n", faturamento);

    for (int i = 0; i < 8; i++)
    {
        if (filiais[i] > 0)
        {
            qtd_lucrativas += 1;
            printf("A filial %d e lucrativa.\n", i + 1);
        }    
    }
    printf("Existem %d filiais lucrativas.", qtd_lucrativas);
}