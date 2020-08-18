/* Programa 3 */
/* Função: Recursiva Produto */
// Autor: João Hugo Soares de Campos

#include<stdio.h>

float produto(float numero1, int numero2);

int main(int argc, int *argv[]){
    float num1, resultado;
    int num2;

    printf("Numero 1: ");
    scanf("%f", &num1);

    printf("Numero 2: ");
    scanf("%d", &num2);

    resultado = produto(num1, num2);
    printf("Resultado: %.2f", resultado);

    return 0;
}

float produto(float numero1, int numero2){
    if (numero2 > 1){
        return (numero1 * produto(numero1, numero2 - 1));
    }
}
