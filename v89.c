#include <stdio.h>
#define M 15

int main(){
    float V1[M], V2[M];
    int cont = 0;

    printf("Vetor V1:\n");
    for(int i=0; i<M; i++){
        printf("Digite V1[%d]: ", i);
        scanf("%f", &V1[i]);
    }

    printf("\nVetor V2:\n");
    for(int i=0; i<M; i++){
        printf("Digite V2[%d]: ", i);
        scanf("%f", &V2[i]);
    }

    for(int i=0; i<M; i++){
        if(V1[i] == V2[i]){
            cont++;
        }
    }

    printf("\nQuantidade de vezes que os vetor V1 e V2 possuem o mesmo numero na mesma posicao e igual a: %d", cont);

}