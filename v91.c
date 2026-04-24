#include <stdio.h>
#define M 50

int main(){
    int VET[M], repetidos[M];
    int jaapareceu=0, cont=0;

    for(int i = 0; i<M; i++){
        printf("Digite VET[%d]: ", i);
        scanf("%d", &VET[i]);
    }

    for(int i=0; i<M; i++){
        for(int j=0;j<M;j++){
        if(VET[i]==VET[j] && i!=j){
            if(j<i)
            jaapareceu = 1;
            break;
        }
        }
        if(jaapareceu==1){
        repetidos[cont] = VET[i];
        cont++;
        }
        jaapareceu = 0;
    }

    printf("\nNumeros repetidos e suas respectivas posicoes:");
    for(int i=0; i<cont; i++){
        printf("\nValor %d: ",repetidos[i]);
        for(int j=0;j<M;j++){
        if(repetidos[i] == VET[j])
            printf("%d, ",j);
        }
    }
}