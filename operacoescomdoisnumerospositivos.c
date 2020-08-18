/* Programa 2 */
/* Função: Operação com dois numeros positivos */
// Autor: João Hugo Soares de Campos

#include <stdio.h>
#include <math.h>

int main (int argc, char *argv[]){
    int escolha;
    float num1, num2, potencia, quad1, quad2, cub1, cub2;

    printf ("Digite o primeiro numero positivo: ");
    scanf ("%f", &num1);

    printf ("Digite o segundo numero positivo: ");
    scanf ("%f", &num2);

    printf ("1- O primeiro numero elevado ao segundo\n");
    printf ("2- Raiz quadrada de cada um dos numeros\n");
    printf ("3- Raiz cubica de cada um dos numeros\n");
    printf ("Escolha a operacao: ");
    scanf ("%d", &escolha);

    switch (escolha){
        case 1:
            potencia = pow (num1,num2);
            printf ("Resultado: %f", potencia);
            break;
        case 2:
            quad1 = sqrt(num1);
            quad2 = sqrt(num2);
            printf ("Resultado: %f e %f", quad1, quad2);
            break;
        case 3:
            cub1 = cbrt(num1);
            cub2 = cbrt(num2);
            printf ("Resultado: %f e %f", cub1, cub2);
            break;
        default:
            printf ("Erro - Operacao Invalida");
    }
    return 0;
}
