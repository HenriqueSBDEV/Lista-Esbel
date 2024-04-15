#include <stdio.h>
#include <stdlib.h>

int desenhaPiramide(int tamanho, int tipo);

int main(int argc, char *argv[]) {
	int tamanho, tipo;
	printf("-------------------------DESENHA PIRAMIDE-------------------------\n\n");
	printf("Informe o tamanho da piramide:\n");
	scanf("%d", &tamanho);
	printf("Informe o tipo da piramide:\n");
	scanf("%d", &tipo);
	desenhaPiramide(tamanho, tipo);
	return 0;
}

int desenhaPiramide(int tamanho, int tipo){
	int i, j, k, aux;
	if(tamanho > 20 || tamanho < 1)
		return 1;
	if(tipo < 0 || tipo > 1)
		return 2;
	if(tipo == 1){
		for(i = 0; i < tamanho; i++){
			for(j = 0; j < tamanho - i; j++){
				printf(" ");
			}
			for(j = 0; j < i ; j ++){
				printf("*");
			}
			for(k = 0; k <= i; k++){
				printf("*");
			}
			printf("\n");
		}
	}
	if(tipo == 0){	
		for(i = 0; i <= tamanho; i++){
    		for(j = 0; j < tamanho - i; j++){
        		printf("*");
    		}
    		for(j = 0; j <= tamanho - i; j++){
    			printf("*");
			}
    	printf("\n");
    		for(j = 0; j <= i; j++){
        printf(" ");
    		}
		}
	}		
}	


