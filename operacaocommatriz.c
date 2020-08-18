/* Programa 2 */
/* Função: Acima de 50 */
// Autor: João Hugo Soares de Campos

#include<stdio.h>

int main(int argc, char *argv[]){
    int i,j,matriz1[10][10], matriz2[10][10];

    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
			matriz1[i][j] = i - j;
			matriz2[i][j] = matriz1[i][j];
			printf (" %2d",matriz1[i][j]);
        }
        printf ("\n");
    }

    for(j = 0; j < 10; j++){
        matriz2 [1][j] = matriz1 [7][j];
        matriz2 [7][j] = matriz1 [1][j];
    }
    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            matriz1 [i][j] = matriz2[i][j];
        }
    }

    for (i = 0; i < 10; i++){
        matriz2 [i][3] = matriz1 [i][9];
        matriz2 [i][9] = matriz1 [i][3];
    }
    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            matriz1 [i][j] = matriz2[i][j];
        }
    }

    for(i = 0; i < 10; i++){
        j = 9 - 1;
        matriz2 [i][i] = matriz1[i][j];
        matriz2 [i][j] = matriz1[i][i];
    }

    printf ("\n\n Matriz resultante:\n");

    for (i = 0; i < 10; i++){
		for (j = 0; j < 10; j++){
			printf (" %2d",matriz2[i][j]);
		}
		printf("\n");
	}

    return 0;
}
