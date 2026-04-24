#include <stdio.h>
#define N 10

int main(){
    float A[N], X, M[N];

    for(int i=0; i<N; i++){
        printf("Digite A[%d]: ", i);
        scanf("%f", &A[i]);
    }

    printf("\nDigite o valor de X: ");
    scanf("%f", &X);
  
    for(int i=0; i<N; i++){
        M[i] = A[i] * X;
    }

    printf("\nVetor M: ");
    for(int i=0; i<N; i++){
        printf("%.2f, ", M[i]);
    }
}