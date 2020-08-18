/* Programa 2 */
/* Função: Acima de 50 */
// Autor: João Hugo Soares de Campos

#include<stdio.h>

int main(int argc, char *argv[]){

    int i,cont;
    int vetor[10];
    cont = 0;

    for (i = 0; i < 10; i++){
        printf("Digite um valor para a posicao %d : ",i+1);
        scanf("%d",&vetor[i]);
    }

    for (i = 0; i < 10; i++){
     if(vetor[i] > 50){
       printf("\n %d e maior que 50 e sua posicao e: %d ",vetor[i],i+1);
       printf("\n");
     }
     else
       cont++;
    }

    if(cont==10){
      printf("\n");
      printf("Nao tem numeros maiores que 50! ");
    }

return 0;
}
