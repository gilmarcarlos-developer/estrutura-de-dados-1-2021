#include <stdio.h>
#include <stdlib.h>

int main(){
    
    //exemplo
    char palavra[20];
    char palavra2[30];

    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    
    printf("Palavra lida: %s\n", palavra);
    
    //posso inicializar uma palavra assim
    char nome[20] = "Gilmar";
    printf("Nome inicializado: %s\n", nome);
    
    //é um array, então posso mudar as letras usando a posição daquela letra
    nome[3] = 'x';
    printf("Nome alterado: %s\n", nome);
    
    return 0;
}
