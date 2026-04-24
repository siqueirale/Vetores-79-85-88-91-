#include <stdio.h>
#define M 20

int main(){
    float N[M], soma=0, media;
    int cont=0;
   

    for(int i=0; i<M; i++){
        printf("Digite a nota do aluno %d:", i+1);
        scanf(" %f", &N[i]);
        soma+=N[i];
    }

    media = soma / M;
    printf("\nMedia da turma: %.2f", media);

    for(int i=0; i<M; i++){
        if (N[i] > media) 
            cont++;
    }

    printf("\n %d alunos ficaram acima da media.", cont);

}