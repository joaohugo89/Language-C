/* Programa 3 */
/* Fun��o: Volume de um cilindro */
// Autor: Jo�o Hugo Soares de Campos

#include <stdio.h>
#define PI 3.14

int main (int argc, char *argv[]){
    float altura, raio, volume;
    printf ("Altura: ");
    scanf ("%f", &altura);

    printf ("Raio: ");
    scanf ("%f", &raio);

    volume = PI * raio * raio * altura;
    printf ("Volume: %f", volume);

    return 0;
}
