#include <stdio.h>
#include <stdlib.h>

int desenhaTabuleiro(int tamanho);

int main() {
	int tamanho;
	printf("-------------------------DESENHA TABULEIRO-------------------------\n\n");
	printf("Desenhe o tamanho do tabuleiro que vai ser gerado:\n");
	scanf("%d", &tamanho);
	desenhaTabuleiro(tamanho);
	return 0;
}

int desenhaTabuleiro(int tamanho){
	int i, j, k, aux;
	if(tamanho < 2 || tamanho > 8)
		return 1;
	for(aux = 0; aux < tamanho; aux ++){
		if(aux % 2 == 0){
			for(i = 0; i < 5; i++){
				for(j = 0; j < tamanho; j++){
					if(j % 2 == 0){
						for(k = 0; k < 5; k++){
							printf("  ");
						}
					}else{
						for(k = 0; k < 5; k++){
							printf("* ");
						}
					}
				}
			printf("\n");
		}
	}else{
		for(i = 0; i < 5; i++){
			for(j = 0; j < tamanho; j++){
				if(j % 2 == 0){
					for(k = 0; k < 5; k++){
						printf("* ");
					}
				}else{
					for(k = 0; k < 5; k++){
						printf("  ");
					}
				}
			}
		printf("\n");
		}
	}	
}
}
