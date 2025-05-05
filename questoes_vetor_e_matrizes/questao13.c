#include <stdio.h>

int main(){
    char matriz[7][11];

    for (int i = 0; i < 7; i++){
        printf("Digite um nome de ate 10 caracteres: \n");
        scanf("%s", matriz[i]);
    }

    for (int i = 7; i >= 0; i--)  // Lendo ao contrário
    {
        printf("%s\n", matriz[i]);
    }
    
}