#include <stdio.h>
#include <stdlib.h>

int desenhaLinha(int tamanho, char linha[]);

int main(int argc, char *argv[]) {
	int tamanho;
	printf("Informe a quantidade de * que sera usado:\n");
	scanf("%d", &tamanho);
	char linha[tamanho];
	desenhaLinha(tamanho, linha);
	return 0;
}

int desenhaLinha(int tamanho, char linha[]){
	int i;
	if(tamanho < 1 || tamanho > 20)
		return 1;
	for(i = 0; i <= tamanho; i++){
		linha[i] = '*';
		if(i == tamanho)
			linha[i] = '\0';
		printf("%c", linha[i]);	
	}	
}
