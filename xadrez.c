#include <stdio.h>
#include <locale.h>// biblioteca para correção ortografica geografica

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int torre, bispo, rainha;
	
	//movimentaçao da Torre em ciclo while.
	
	//Move-se em linha reta horizontalmente ou verticalmente. Seu programa deverá simular o movimento da Torre cinco casas para a direita.
	
	torre = 1;
	
	printf("Torre:\n\n");
	
	while(torre <= 5){
		printf("Direita\n");
		torre++;
	}
	printf("-----------------------\n\n");
	
	//movimentaçao do Bispo em ciclo do-while.
	
	/*Move-se na diagonal. Seu programa deverá simular o movimento do Bispo cinco casas na diagonal para cima e à direita. 
	Para representar a diagonal, você imprimirá a combinação de duas direções a cada casa (ex: "Cima, Direita").*/
	
	bispo = 1;
	
	printf("Bispo:\n\n");
	
	do{
		printf("Cima Direita\n");
		bispo++;
	}while(bispo <=5);
	
	printf("-----------------------\n\n");
	
	//movimentaçao da Rainha em ciclo for.
	
	// Move-se em todas as direções. Seu programa deverá simular o movimento da Rainha oito casas para a esquerda.
	
	printf("Rainha:\n\n");
	
	for(rainha = 1; rainha <= 8; rainha++){
		printf("Esquerda\n");		
	}
	
	printf("-----------------------\n\n");
	
	return 0;
}
