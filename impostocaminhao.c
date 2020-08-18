/* Programa 1 */
/* Função: Imposto Caminhão */
// Autor: João Hugo Soares de Campos

#include <stdio.h>

int main (int argc, char *argv[]){
    int codest, codcar;
    float pesocarga, imposto;
    printf ("Digite o codigo do estado (De 1 a 5): ");
    scanf ("%d",&codest);
    printf ("Peso da carga: ");
    scanf ("%f",&pesocarga);
    printf ("Codigo da carga (De 10 a 40): ");
    scanf ("%d",&codcar);

    if (codest == 1){
        if (codcar >= 10 && codcar <= 20){
            imposto = pesocarga * 0.35 * 100;
            printf ("Preco Imposto: %f\n", imposto);
        }
        else{
            if (codcar > 20 && codcar <= 30){
                imposto = pesocarga * 0.35 * 250;
                printf ("Preco Imposto: %f\n", imposto);
        }
            else{
                if (codcar > 30 && codcar <= 40){
                    imposto = pesocarga * 0.35 * 340;
                    printf ("Preco Imposto: %f\n", imposto);
                }
                else{
                    printf ("Codigo Carga Invalido");
                }
            }
        }
        }
    else{
        if (codest == 2){
            if (codcar >= 10 && codcar <= 20){
                imposto = pesocarga * 0.25 * 100;
                printf ("Preco Imposto: %f\n", imposto);
            }
            else{
                    if (codcar > 20 && codcar <= 30){
                        imposto = pesocarga * 0.25 * 250;
                        printf ("Preco Imposto: %f\n", imposto);
                    }
                    else{
                        if (codcar > 30 && codcar <= 40){
                            imposto = pesocarga * 0.25 * 340;
                            printf ("Preco Imposto: %f\n", imposto);
                        }
                        else{
                            printf ("Codigo Carga Invalido");
                        }
                    }
            }
        }
        else{
            if (codest == 3){
                if (codcar >= 10 && codcar <= 20){
                    imposto = pesocarga * 0.15 * 100;
                    printf ("Preco Imposto: %f\n", imposto);
                }
                else{
                    if (codcar > 20 && codcar <= 30){
                        imposto = pesocarga * 0.15 * 250;
                        printf ("Preco Imposto: %f\n", imposto);
                    }
                    else{
                        if (codcar > 30 && codcar <= 40){
                            imposto = pesocarga * 0.15 * 340;
                            printf ("Preco Imposto: %f\n", imposto);
                        }
                        else{
                            printf ("Codigo Carga Invalido");
                        }
                    }
                }
            }
            else{
                if (codest == 4){
                    if (codcar >= 10 && codcar <= 20){
                        imposto = pesocarga * 0.05 * 100;
                        printf ("Preco Imposto: %f\n", imposto);
                    }
                    else{
                        if (codcar > 20 && codcar <= 30){
                            imposto = pesocarga * 0.05 * 250;
                            printf ("Preco Imposto: %f\n", imposto);
                        }
                        else{
                            if (codcar > 30 && codcar <= 40){
                                imposto = pesocarga * 0.05 * 340;
                                printf ("Preco Imposto: %f\n", imposto);
                            }
                            else{
                                printf ("Codigo Carga Invalido");
                            }
                        }
                    }
                }
                else{
                    printf ("Isento de Imposto");
                }
            }
        }
    }
    return 0;
}
