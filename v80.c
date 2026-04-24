#include <stdio.h>
#define M 20

int main(){
    float Q[M], maior;
    int posição=0;

    for(int i=0; i<M; i++){
        do{
            printf("Digite Q[%d]: ", i);
            scanf(" %f", &Q[i]); 
        } while (Q[i] <= 0);
    } 

    maior = Q[0];

    for(int i=0; i<M; i++){
            if(Q[i]> maior){
                maior = Q[i];
                posição = i;
            }
        }

    printf("Maior elemento: %.2f\nPosicao no vetor: %d", maior, posição);
    }
