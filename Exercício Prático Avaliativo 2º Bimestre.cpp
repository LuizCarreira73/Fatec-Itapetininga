#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, j, mat[5][3], stot = 0, qtd = 0, achou = 0;
	float vetm[5];
	char nomes[5][20], busca[50];
	for(i=0; i<5; i++){
		printf("\n Digite o nome do vendedor: ");
		scanf("%s", &nomes[i]);
		for(j=0; j<3; j++){
			printf("\n Digite o valor de vendas do m�s %i do vendedor %i: ", j+1, i+1);
			scanf("%i", &mat[i][j]);
		}
	}
	for(i=0; i<5; i++){
		for(j=0; j<3; j++){
			printf("%5i ", mat[i][j]);
		}
		printf("\n");
	}
	for(i=0; i<5; i++){
		float soma = 0;
		for(j=0; j<3; j++){
			soma+=mat[i][j];
		}
		vetm[i] = (soma / 3);
	}
	for(i=1; i<2; i++){
		for(j=0; j<3; j++){
			stot+=mat[i][j];
		}
	}
	printf("\n Digite o nome do vendedor para buscar: ");
	scanf("%s", busca);
	for(i=0; i<5; i++){
		if(strcmp(nomes[i], busca) == 0){
			achou = 1;
			printf("\n Nome do vendedor: %s, Vendas do m�s 1: %i, Vendas do m�s 2: %i, Vendas do m�s 3: %i, M�dia: %.2f ", nomes[i], mat[i][0], mat[i][1], mat[i][2], vetm[i]);
			break;
		}
	}
	if (!achou){
		printf("\n Vendedor n�o encontrado.");
	}
	for(i=0; i<5; i++){
		for(j=1; j<2; j++){
			if (mat[i][j] > 2000){
				qtd++;
			}
		}
	}
	printf("\n Relat�rio: ");
	for(i=0; i<5; i++){
		printf("\n Vendedor: %s, M�dia: %.2f ", nomes[i], vetm[i]);
	}
	printf("\n Valor total das vendas nos tr�s meses do segundo vendedor (%s): %i ", nomes[1], stot);
	printf("\n Quantidade de vendedores que venderam mais que 2000,00 no segundo m�s: %i ", qtd);
	return 0;
}
