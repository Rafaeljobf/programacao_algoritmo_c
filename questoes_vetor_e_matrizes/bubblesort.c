#include <stdio.h>

int main() {
    int lista[5];
    int aux;

    for (int i = 0; i < 5; i++)
    {
        printf("Digite o %d termo do vetor: ", i + 1);
        scanf("%d", &lista[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (lista[j] > lista[j + 1])
            {
                aux = lista[j];
                lista[j] = lista[j + 1];
                lista[j + 1] =  aux;
            }
        }
    }
    printf("VETOR ORDENADO: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", lista[i]);
    }

}