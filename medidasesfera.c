/* Programa 4 */
/* Fun��o: Medidas de uma esfera */
// Autor: Jo�o Hugo Soares de Campos

#include <stdio.h>
#define PI 3.14

int main (int argc, char *argv[]){
    float raio, volume, perimetro, area;
    printf ("Raio: ");
    scanf ("%f", &raio);

    volume = (3 * PI * raio * raio * raio)/4;
    perimetro = 2 * PI * raio;
    area = PI * raio * raio;
    printf ("Perimetro: %f\n", perimetro);
    printf ("Area: %f\n", area);
    printf ("Volume: %f\n", volume);

    return 0;
}
