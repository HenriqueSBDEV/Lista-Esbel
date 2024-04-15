#include <stdio.h>
#include <stdlib.h>

int desenhaTriangulo(int tamanho, int tipo);

int main(int argc, char *argv[]) {
	int tamanho, tipo;
	printf("-------------------------DESENHA TRIANGULO-------------------------\n\n");
	printf("Informe o tamanho do triangulo:\n");
	scanf("%d", &tamanho);
	printf("Informe o tipo do triangulo:\n");
	scanf("%d", &tipo);	
	desenhaTriangulo(tamanho, tipo);
	return 0;
}

int desenhaTriangulo(int tamanho, int tipo){
	int i, j, aux;
	if(tamanho > 20 || tamanho < 1)
		return 1;
	if(tipo < 1 || tipo > 4)
		return 2;
	system("cls");
	if(tipo == 1){
		printf("-------------------Triangulo 1--------------------");
		for(i = 0; i < tamanho; i++){
			for(j = 0; j < i; j++){
				printf("*");
			}
			printf("\n");
		}
	}
	if(tipo == 2){
		printf("-------------------Triangulo 2--------------------");
		for(i = 0; i < tamanho; i++){
			for(j = 0; j < tamanho - i; j++){
				printf("*");
			}
			printf("\n");
		}
	}
	if(tipo == 3){
		printf("-------------------Triangulo 3--------------------");
		for(i = 0; i < tamanho; i++){
			for(j = 0; j < tamanho - i; j++){
				printf("*");
			}
			printf("\n");
			for(j = 0; j < aux; j ++){
				printf(" ");
			}
			aux++;
		}
	}	
	if(tipo == 4){
		printf("-------------------Triangulo 4--------------------");
		for(i = 0; i < tamanho; i++){
			for(j = 0; j < tamanho - i; j++){
				printf(" ");
			}
			for(j = 0; j < i ; j ++){
				printf("*");
			}
			printf("\n");
		}
	}	
}
