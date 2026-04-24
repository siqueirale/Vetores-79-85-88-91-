#include <stdio.h>

int main(){
    int N;
    float A[N], B[N], Soma[N];
 
    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &N);

    printf("\nVetor A:\n");
    for(int i=0; i<N; i++){
        printf("Digite A[%d]: ", i);
        scanf("%f", &A[i]);
    }

    printf("\nVetor B:\n");
    for(int i=0; i<N; i++){
        printf("Digite B[%d]: ", i);
        scanf("%f", &B[i]);
    }

    for(int i=0; i<N; i++){
        Soma[i] = A[i] + B[i];
    }

    printf("\nVetor Soma:");
    for(int i=0; i<N; i++){
        printf(" %.2f,  ", Soma[i]);
    }
}