#include <stdio.h>
#define M 20

int main(){
    float V[M], X, Q[M];
    int j = 0, existe = 0;

    for(int i=0; i<M; i++){
        printf("Digite o numero %d: ", i+1);
        scanf("%f", &V[i]);
    }

    printf("\nDigite um numero: ");
    scanf("%f", &X);

    for(int i=0; i<M; i++){
        if(V[i] == X){
            existe = 1;
        } else {
            Q[j] = V[i];
            j++; 
        }
    }

    if(existe == 1){
        printf("\nO numero %.2f existia e foi removido do vetor V.", X);
        printf("\nNovo vetor Q:\n");
        for(int i=0; i<j; i++){
            printf("%.2f ", Q[i]);
        }
    } else {
        printf("\nO numero %.2f nao existe no vetor original V.", X);
    }
}