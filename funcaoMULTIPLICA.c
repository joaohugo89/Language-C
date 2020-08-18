/* Programa 3 */
/* Função: Função MULTIPLICA */
// Autor: João Hugo Soares de Campos

#include <stdio.h>

int multiplica (int numero1){
    int i,j,matriz1[numero1][numero1];
    for(i = 1; i < numero1; i++){
        for(j = 1; j <= numero1; j++){
            if (i<j){
                break;
            }
            else{
                matriz1[i][j] = i * j;
            }
			printf (" %2d",matriz1[i][j]);
        }
        printf ("\n");
    }
}

 int main (int argc, char *argv[]){
    int num1,num2,i,j,matriz[i][j];
    printf("Digite um numero de 1 a 9: ");
    scanf("%d", &num1);
    num2 = num1+1;
    matriz[i][j] = multiplica(num2);
    printf("%d",matriz[i][j]);

    return 0;
}
