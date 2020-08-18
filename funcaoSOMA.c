/* Programa 1 */
/* Função: Função SOMA */
// Autor: João Hugo Soares de Campos

#include <stdio.h>

float soma (float numero1, float numero2){
    float resultado;
    resultado = numero1 + numero2;
    return resultado;
}

int main (int argc, char *argv[]){
    float num1,num2,num3;
    printf ("Digite o primeiro numero: ");
    scanf ("%f", &num1);
    printf ("Digite o segundo numero: ");
    scanf ("%f", &num2);
    num3 = soma(num1,num2);
    printf("Soma dos dois numeros: %.02f", num3);
    return 0;
}
