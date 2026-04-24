#include <stdio.h>
#define M 20

int main(){
    float N[M];

    for(int i=0; i<M; i++){
        printf("Digite o numero %d: ", i+1);
        scanf("%f", &N[i]);
    }

    printf("\nNumeros na ordem inversa:\n");
    for(int i = M - 1; i >= 0; i--){
        printf("%.2f ", N[i]);
    }
}