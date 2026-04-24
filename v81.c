#include <stdio.h>
#define M 20

int main(){
    float Q[M], menor;
    int posição=0;

    for(int i=0; i<M; i++){
        do{
            printf("Digite Q[%d]: ", i);
            scanf(" %f", &Q[i]); 
        } while (Q[i] <= 0);
       
    }

    menor = Q[0];

    for(int i=0; i<M; i++){
        if(Q[i] < menor){
            menor = Q[i];
            posição = i;
        }
    }

    printf("Menor elemento: %.2f \n Posicao no vetor: %d ", menor, posição);
}