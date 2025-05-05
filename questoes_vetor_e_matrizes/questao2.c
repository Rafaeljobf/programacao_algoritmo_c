#include <stdio.h>

int main() {
    float lista[15];
    float soma = 0.0;
    float media = 0.0;
    
    printf("Digite as 15 medias:\n");
    for (int i = 0; i < 15; i++) {
        scanf("%f", &lista[i]);
        if (lista[i] < 0) {
            printf("Valor negativo encontrado. Encerrando o programa.\n");
            return 1;
        }
        else if (lista[i] > 10) {
            printf("Valor maior que 10 encontrado. Encerrando o programa.\n");
            return 1;
        }           
        soma += lista[i];
    }
    media = soma / 15.0;

    if (media >= 8.0)
        media = 10.0;
    
    printf("A media da turma e: %.2f\n", media);
}
