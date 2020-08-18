/* Programa 4 */
/* Função: Salario */
// Autor: João Hugo Soares de Campos

#include <stdio.h>

int main (int argc, char *argv[]){
    float salariojoao, salariojose, poupancajoao, poupancajose;
    int mes;

    printf ("Digite o salario de Joao: ");
    scanf ("%f", &salariojoao);

    salariojose = salariojoao / 3 ;
    poupancajoao = salariojoao;
    poupancajose = salariojose;
    mes = 0;

    while (poupancajose <= poupancajoao){
        poupancajoao = salariojoao + (poupancajoao * 1.02) ;
        poupancajose = salariojose + (poupancajose * 1.05) ;
        mes ++;
    }
    printf ("Meses Necessarios para o Salario de Jose ser maior ou igual a Joao: %d", mes );
    return 0;
}
