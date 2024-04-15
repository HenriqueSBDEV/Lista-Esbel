#include <stdio.h>
#include <stdlib.h>

void desenhaQuadrado(int tamanho, int vazado);

int main() {
	int tamanho, vazado;
	printf("------------------------DESENHA QUADRADO------------------------\n\n");
	printf("Digite o tamanho do quadrado:\n");
	scanf("%d", &tamanho);
	printf("Quadrado vazado(1) , Quadrado normal(0)");
	scanf("%d", &vazado);
	desenhaQuadrado(tamanho, vazado);
	return 0;
}

void desenhaQuadrado(int tamanho, int vazado){
	int i, j, k;
	if(tamanho > 20 || tamanho < 1)
	return 0;
	if(vazado == 0){
		for(i = 0; i < tamanho; i ++){
			for(j = 0; j < tamanho; j++){
				printf("*");
			}
			printf("\n");
		}
	}
	if(vazado == 1){
		for(i = 0; i < tamanho; i ++){
			if(i == 0 || i == tamanho - 1){
				for(j = 0; j < tamanho; j++){
					printf("*");
				}
				printf("\n");
			}else{
				printf("*");
				for(j = 0; j < tamanho - 2; j ++){
					printf(" ");
				}
				printf("*");
				printf("\n");
			}
		}		
	}
}
