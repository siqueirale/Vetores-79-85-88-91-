#include <stdio.h>
#define M 30

int main(){
    float V[M], X;
    int cont = 0;

    for(int i=0; i<M; i++){
        printf("Digite V[%d]: ", i+1);
        scanf("%f", &V[i]);
    }
    
    printf("\nDigite o numero que deseja encontrar: ");
    scanf("%f", &X);

    for(int i=0; i<M; i++){
        if(V[i] == X){
            cont++;
        }
    }
    printf("\nO numero %.2f aparece %d vezes no vetor.", X, cont);
}