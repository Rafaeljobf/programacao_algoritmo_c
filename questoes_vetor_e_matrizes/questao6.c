#include <stdio.h>

int main(){
    float filiais[20];
    int i = 0;

    for (int i = 0; i < 20; i++)
    {
        printf("Digite o balanco da filial %d ", i + 1);
        scanf("%f", &filiais[i]);
    }

    printf("Qual filial deseja saber se faz parte da empresa?\n");
    scanf("%d", &i);

    if (i <= 0 || i > 20)
    {
        printf("A filial %d nao esta presente nas filiais da empresa.", i);
    }
    else
    {
        printf("A filial %d faz parte da empresa.", i);
    }
}