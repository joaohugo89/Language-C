/* Programa 1 */
/* Função: Recursiva Multiplica */
// Autor: João Hugo Soares de Campos

#include<stdio.h>

long int multiplica(int numero1, int numero2);

int main(int argc, int *argv[]){
    int num1, num2, resultado;

    printf("Quais os numeros a serem multiplicados (Num1 x Num2): ");
    scanf("%d x %d", &num1, &num2);

    resultado = multiplica(num1, num2);
    printf("Resultado: %d", resultado);

    return 0;
}

long int multiplica(int numero1, int numero2){
    if (numero1 == 0){
        return 0;
    }
    if (numero1 == 1){
        return numero2;
    }
    if (numero1 > 1){
        return (numero2 + multiplica(numero1 - 1, numero2));
    }
}
