/* Programa 1 */
/* Função: Médias */
// Autor: João Hugo Soares de Campos

#include <stdio.h>

int main (int argc, char *argv[]){
    float num1, num2, num3, geometrica, ponderada, harmonica, aritmetica;
    printf("Numero 1: ");
    scanf("%f", &num1);

    printf("Numero 2: ");
    scanf("%f", &num2);

    printf("Numero 3: ");
    scanf("%f", &num3);

    geometrica = num1 * num2 * num3;
    ponderada = (num1 + num2*2 + num3*3)/6;
    harmonica = 1/(1/num1+1/num2+1/num3);
    aritmetica = (num1+num2+num3)/3;
    printf ("Media Geometrica: %f\n", geometrica);
    printf ("Media Ponderada: %f\n", ponderada);
    printf ("Media Harmonica: %f\n", harmonica);
    printf ("Media Aritmetica: %f\n", aritmetica);

    return 0;
}

