/* Programa 4 */
/* Função: Função MENORELEM */
// Autor: João Hugo Soares de Campos

#include <stdio.h>

int menorelem (int matriz1[6][6]){
    int i,j,maior,neutro,possivel,maiorelemento;
    neutro = 0;
    for(i = 6; i > 0; i--){
        for(j = 0; j < 6; j++){
            if (i+j == 5){
                possivel = matriz1[5][0];
                if (possivel > matriz1[i][j]){
                    possivel = matriz1[i][j];
                }
            }
        }
    }
    return possivel;
}
 int main (int argc, char *argv[]){
    int i,j,menorelemento,matriz[6][6],matriz2[6][6];
    for(i = 0; i < 6; i++){
        for(j = 0; j < 6; j++){
            printf ("Matriz [%d][%d]: ",i+1,j+1);
            scanf("%d", &matriz[i][j]);
        }
    }
    menorelemento = menorelem(matriz);
    printf("Menor elemento da diagonal secundaria: %d", menorelemento);
    return 0;
 }
