#include <stdio.h>

int main() {
    float lista[10];
    float soma = 0.0;
    int qnt_notas = 0;
    
    printf("Digite as 10 medias:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%f", &lista[i]);
        if (lista[i] < 0) {
            printf("Valor negativo encontrado. Encerrando o programa.\n");
            return 1;
        }
        else if (lista[i] > 10) {
            printf("Valor maior que 10 encontrado. Encerrando o programa.\n");
            return 1;
        }           
    }
    for (int i = 0; i < 10; i++) {
        if (lista[i] >= 4.0) {
            soma += lista[i];
            qnt_notas++;
        }
    }
    float media_funcional = soma / qnt_notas;
    printf("A media funcional e: %.2f\n", media_funcional);
}
