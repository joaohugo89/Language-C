/* Programa 2 */
/* Função: Recursiva Soma */
// Autor: João Hugo Soares de Campos

#include<stdio.h>

long int soma(int numero1);

int main(int argc, int *argv[]){
    int num1, resultado;

    printf("Numero a ser somado: ");
    scanf("%d", &num1);

    resultado = soma(num1);
    printf("Resultado: %d", resultado);

    return 0;
}

long int soma(int numero1){
    if (numero1 == 0){
        return 0;
    }
    if (numero1 > 1){
        return (numero1 + soma(numero1 - 1));
    }
}
