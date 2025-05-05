#include <stdio.h>

int main(){
    float filiais[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Digite o balanco da filial %d ", i + 1);
        scanf("%f", &filiais[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        if (filiais[i] < 0)
        {
            printf("A filial %d tem prejuizo de: %.2f.\n", i, filiais[i]);
        }
        else if (filiais[i] > 0)
        {
            printf("A filial %d tem lucro de: %.2f.\n", i, filiais[i]);
        }
        else
        {
            printf("A filial %d nao apresenta lucro nem prejuizo.\n", i);
        }
    }
}