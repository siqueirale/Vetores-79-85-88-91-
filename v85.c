#include <stdio.h>
#define D 365

int main(){
    float T[D], menor, maior, soma = 0, media;
    int conti = 0;

    for(int i=0; i<D; i++){
        printf("Digite a temperatura do dia %d: ", i+1);
        scanf("%f", &T[i]);
    }

    menor = T[0];
    maior = T[0];
   
    for(int i=0; i<D; i++){
        if(T[i] < menor){
            menor = T[i];
        }
        if(T[i] > maior){
            maior = T[i];
        }
        soma += T[i];
    }

    media = soma / D;

    for(int i=0; i<D; i++){
        if(T[i] < media){
            conti++;
        }
    }

    printf("\nMenor temperatura: %.2f\n", menor);
    printf("Maior temperatura: %.2f\n", maior);
    printf("Media anual: %.2f\n", media);
    printf("Dias com temperatura abaixo da media: %d\n", conti);
}