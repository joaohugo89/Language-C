/* Programa 2 */
/* Fun��o: Fun��o PERCENTUAL */
// Autor: Jo�o Hugo Soares de Campos

#include <stdio.h>

float percentual (float antigo, float atual){
    float resultado, diferenca;
    diferenca = atual - antigo;
    resultado = diferenca / antigo;
    return resultado;
}

int main (int argc, char *argv[]){
    float numero1,numero2,numero3,numero4;
    printf ("Valor Antigo: ");
    scanf("%f",&numero1);
    printf ("Valor Atual: ");
    scanf("%f",&numero2);
    numero3 = percentual(numero1,numero2);
    numero4 = 100 * numero3;
    printf("O percentual de acrescimo e: %.02f%%",numero4);
    return 0;
}
