#include <stdio.h>
#include <stdlib.h>

int main(){
    //array com uma dimensão
    int vetor[5];
    //array com duas dimensões
    int matriz[3][3];
    //array com tres dimensões
    int cubo[3][3][3];
    //array com quatro dimensões
    int x[3][3][3][3];
    
    //exemplo com tres dimensões
    for(int x = 0; x < 3; x++){
        for(int y = 0; y < 3; y++){
            for(int z = 0; z < 3; z++){
                scanf("%i", &cubo[x][y][z]);
            }
        }
    }
    
    return 0;
}
