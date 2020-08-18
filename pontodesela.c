/* Programa 2 */
/* Função: Acima de 50 */
// Autor: João Hugo Soares de Campos

#include<stdio.h>

int main(int argc, char *argv[]){
    int i, j, k, m, n, o, p, menor_linha, maior_col, ponto, mat[5][7];
    ponto = 0;

    for(i = 0; i < 5; i++){
        for(j = 0; j < 7; j++){
            printf ("Matriz [%d][%d]: ",i+1,j+1);
            scanf("%d", &mat[i][j]);
        }
    }

    for(i = 0; i < 5; i++){
        menor_linha = mat [i][0];
        for (j=0; j<7; j++){
            if (menor_linha > mat[i][j]){
                menor_linha = mat[i][j];
                m = i+1;
                n = j+1;
            }
        }
        maior_col = mat[0][j];
        for (k=0; k<7; k++){
            if (maior_col < mat[k][j]){
                maior_col = mat[k][j];
                o = i+1;
                p = j+1;
            }
        }
        if (menor_linha == maior_col){
            printf ("Ponto de Sela: Matriz [%d][%d] = %d\n", i,j,mat[i][j]);
            ponto ++;
        }
    }

    if (ponto == 0){
        printf ("Nao existe ponto de sela\n");
    }

    return 0;
}
