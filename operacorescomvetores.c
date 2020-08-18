/* Programa 1 */
/* Função: Operações com vetores */
// Autor: João Hugo Soares de Campos

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){
    int n, somatamanho;
    printf ("Escolha o numero de inteiros no vetor: ");
    scanf ("%d", &n);
    somatamanho = n+n;

	int vet1[n], vet2[n], uniao[somatamanho];
	int soma[n], produto[n], i;

	printf("Digite %d numeros:\n", n);
	for(i = 0; i < n; i++){
		printf("Numeros %d = ", i+1);
		scanf("%d", &vet1[i]);
	}

	printf("\nDigite %d numeros:\n", n);
	for(i = 0; i < n; i++){
		printf("Numeros %d = ", i+1);
		scanf("%d", &vet2[i]);
	}

	printf("\n");
	printf("Uniao dos numeros: ");
	for(i = 0; i < n; i++){
    	uniao[i] = vet1[i];
    }

	for(i = 0; i < n; i++){
    	uniao[i + n] = vet2[i];
    }

    for(i = 0; i < somatamanho; i++){
    	printf("%d ", uniao[i]);
    }

    printf("\nSoma dos numeros: ");
	for(i = 0; i < 5; i++){
		soma[i] = vet1[i] + vet2[i];
		printf("%d ", soma[i]);
	}

	printf("\nProduto dos numeros: ");
	for(i = 0; i < 5; i++){
		produto[i] = vet1[i] * vet2[i];
		printf("\%d ", produto[i]);
	}
    return 0;
}
