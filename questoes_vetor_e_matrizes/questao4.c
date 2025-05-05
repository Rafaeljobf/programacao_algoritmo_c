#include <stdio.h>

int main() {
    float alturas[6];
    float maior;
    float menor;

    for (int i = 0; i < 6; i++) // Loop para ler as 6 alturas
    {
        printf("Digite a altura da %d pessoa: ", i + 1);
        scanf("%f", &alturas[i]);
    }

    maior = alturas[0];
    menor = alturas[0];

    for (int i = 1; i < 6; i++) // Loop para imprimir maior e menor alturas na tela
    {
        if (alturas[i] < menor)
        {
            menor = alturas[i];
        }
        else if (alturas[i] > maior)
        {
            maior = alturas[i];
        }
    
    }
    printf("A maior altura e: %.2f\n", maior);
    printf("A menor altura e: %.2f\n", menor);

    for (int i = 0; i < 6; i++) // BubbleSort para ordenar o vetor
    {
        for (int j = 0; j < 6; j++)
        {
            if (alturas[j] > alturas[j + 1])
            {
                float temp = alturas[j];
                alturas[j] = alturas[j + 1];
                alturas[j + 1] = temp;
            }
        }
    }
    printf("Alturas em forma crescente:\n");
    for (int i = 0; i < 6; i++)
    {
        printf("%.2f ", alturas[i]);
    }
}