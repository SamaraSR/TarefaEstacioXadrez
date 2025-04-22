#include <stdio.h>
#include <locale.h>// biblioteca para correção ortografica geografica

//Recursividade do movimento da torre, do bispo e da rainha

void movimentoTorre(int n){
	
	while(n <= 5){
		printf("Direita\n");
		n++;
	}	
}

//----------------------------------------

void movimentoBispo(int n){
	
	if (n > 5) {
        return; 
    }

    int i;
    
    // Loop externo: movimento vertical 
    for (i = 1; i <= 1; i++) {

        int j = 1;
        // Loop interno: movimento horizontal
        while (j <= 1) {
            printf("Cima Direita\n");
            j++;
        }
    }
   
    movimentoBispo(n + 1);
}

//----------------------------------------

void movimentoRainha(int n){
	
	for(n = 1; n <= 8; n++){
		printf("Esquerda\n");		
	}	
}

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int torre, bispo, rainha;
	
	//movimentaçao da Torre em ciclo while.
	
	//Move-se em linha reta horizontalmente ou verticalmente. Seu programa deverá simular o movimento da Torre cinco casas para a direita.
	
	torre = 1;
	
	printf("Torre:\n\n");
	
	movimentoTorre(torre);
	
	printf("-----------------------\n\n");
	
	//movimentaçao do Bispo em ciclo do-while.
	
	/*Move-se na diagonal. Seu programa deverá simular o movimento do Bispo cinco casas na diagonal para cima e à direita. 
	Para representar a diagonal, você imprimirá a combinação de duas direções a cada casa (ex: "Cima Direita").*/
	
	bispo = 1;
	
	printf("Bispo:\n\n");
	
	movimentoBispo(bispo);
	
	printf("-----------------------\n\n");
	
	//movimentaçao da Rainha em ciclo for.
	
	// Move-se em todas as direções. Seu programa deverá simular o movimento da Rainha oito casas para a esquerda.
	
	printf("Rainha:\n\n");
	
	rainha = 1;
	
	movimentoRainha(rainha);
	
	printf("-----------------------\n\n");
	
	//movimentaçao do Cavalo com loops aninhados.
	
	/*O programa deverá imprimir no console a direção de cada etapa do movimento do Cavalo 
	("Baixo", "Baixo", "Esquerda"), utilizando o comando printf. */
	
	printf("Cavalo:\n\n");
	
	int x, y;
	
	// Movimento 2x para cima
    for (x = 2; x >= 1; x--) {
        printf("Cima\n");

        // Se ainda não completou as duas subidas, pula o movimento lateral
        if (x != 1) {
            continue;
        }

        // Quando x == 1, faz o movimento para a direita
        y = 1;
        while (y <= 1) {
            if (x != 1) {
                break;
            }

            printf("Direita\n");
            y++;
        }
    }
	printf("-----------------------\n\n");	
	
	return 0;
}