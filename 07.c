#include <stdio.h>
#include <stdlib.h>

int desenhaTriangulo(int tamanho, int tipo);
int desenhaLinha(int tamanho, char linha[]);

int main() {
	int tamanho, tipo;
	printf("Informe o tamanho do triangulo:\n");
	scanf("%d", &tamanho);
	char linha[tamanho];
	printf("Informe o tipo do trinagulo\n");
	scanf("%d", &tipo);
	desenhaTriangulo(tamanho , tipo);
//	desenhaLinha(tamanho, linha);
	return 0;
}

int desenhaLinha(int tamanho, char linha[]){
	linha[tamanho] = '*';
	if(tamanho == 0)
		return 1;
	printf("%c", linha[tamanho]);
	desenhaLinha(tamanho - 1, linha);
}

int desenhaTriangulo(int tamanho, int tipo){
	int i, j;
	char linha[tamanho];
	//tipo 1 
	if(tipo == 1){
		for(i = 0; i <= tamanho; i++){
			desenhaLinha(i, linha);
			printf("\n");
		}
	}
	//tipo 2
	if(tipo == 2){
		for(i = 0; i <= tamanho; i++){
			desenhaLinha(tamanho - i, linha);
			printf("\n");
		}
	}
	//tipo 3
	if(tipo == 3){
		for(i = 0; i < tamanho; i++){
			for(j = 0; j < i; j++){
				printf(" ");
			}			
			desenhaLinha(tamanho - i, linha);
			printf("\n");
		}
	}
	//tipo 4
	if(tipo == 4){
		for(i = 0; i < tamanho; i++){
			for(j = 0; j < tamanho - i; j++){
				printf(" ");
			}			
			desenhaLinha(i + 1, linha);
			printf("\n");
		}
	}		
}

