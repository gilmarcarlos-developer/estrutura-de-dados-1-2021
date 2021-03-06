#include <stdio.h>
#include <stdlib.h>

/*
Implemente a função duplica_impares, que recebe um vetor de números inteiros.
A função deve duplicar todos os números positivos ímpares.
Por exemplo, para o vetor 1, 2, 3, 3, 4, -1, -1, -1, -1 o vetor seria modificado para 1, 1, 2, 3, 3, 3, 3, 4, -1.
Para este exercício, considere que os valores -1 são espaços livres no vetor.
Assuma que haverá espaço suficiente para duplicar todos os ímpares.
*/

void duplica_impares(int vetor[], int qtd){
    int aux = 0;

    for(int x = 0; x < qtd; x++){
        if(vetor[x] != -1 && vetor[x]%2 != 0){ //condição diferente de -1 e ser impar
            aux = qtd-1;
            for(int k = qtd-1; k > x+1; k--){ //movimenta pra frente os números depois do atual
                vetor[aux] = vetor[aux-1];
                aux--;
            }
            x++; //aqui pula pro próximo numero porque quando move tudo pra frente o numero atual se repete por ter sido duplicado
            vetor[x] = vetor[x-1]; //aqui duplica o numero
        }
    }
    printf("\n");
    for(int x = 0; x < qtd; x++)
        printf("%d ", vetor[x]);
}

int main(){

    int qtd = 0;

    printf("Digite o tamanho do vetor: ");
    scanf("%i", &qtd);
    int vetor[qtd];

    for(int x = 0; x < qtd; x++)
        scanf("%d", &vetor[x]);

    duplica_impares(vetor, qtd);

    printf("\n");
    return 0;
}
