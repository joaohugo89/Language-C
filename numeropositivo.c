/* Programa 5 */
/* Função: Numero Positivo */
// Autor: João Hugo Soares de Campos

#include <stdio.h>
#include <math.h>

int main (int argc, char *argv[]){
    int num1, quadrado, cubo;
    float raizquad, raizcub;
    printf ("Digite um numero: ");
    scanf ("%d", &num1);

    if (num1 < 0){
        printf ("Numero Invalido, necessario numero positivo\n");
    }
    else{
        quadrado = num1 * num1;
        cubo = num1 * num1 * num1;
        raizquad = sqrt (num1);
        raizcub = cbrt (num1);
        printf ("Quadrado: %d\n", quadrado);
        printf ("Ao Cubo: %d\n", cubo);
        printf ("Raiz Quadrada: %f\n", raizquad);
        printf ("Raiz Cubica: %f\n", raizcub);
    }

    return 0;
}
