#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

//===================== Declara a função. =========================================================
void EscolhaUm();
void EscolhaDois();
void EscolhaTres();
void MenuPoltrona();
void MenuValorIngressoSessao();
bool EscolherPoltronas(int escolha, int numeroEscolhido);
//================================================================================================

//=================== variavel global das vendas =================================================
float QuantidadeTotalVendida = 0.00;
//================================================================================================

//=================== variavel global dos Ingressos ==============================================
int qdeingressosPecaUm = 20, qdeingressosPecaDois = 20, qdeingressosPecaTres  =  20;
float valorIngressoInteira = 50.00, valorIngressomeia = 25.00, ValorIngressoGratuidade = 0.00;
//================================================================================================


// variavel global das Poltronas
int PoltronasPecaUm[] {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20}; // posicoes para as poltronas, remove a posicao solicitada.
int PoltronasPecaDois[] {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};// posicoes para as poltronas, remove a posicao solicitada.
int PoltronasPecaTres[] {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};// posicoes para as poltronas, remove a posicao solicitada.

//metodo main (inicial do programa)
int main ()
{
	int opcao, escolha;
	
	do
	{
		// Menu de Opções.
		system("cls");
		printf("%c----------------------------------------------------------------------------%c\n", 201, 187);
		printf("\t===============================================\n");
		printf("\t===============================================\n");
		printf("\t========== TEATRO METROPOLI ===================\n");
		printf("\t===============================================\n");
		printf("\t===============================================\n\n");
		printf("\t\t\t\t MENU DE OPCOES \t\t\t\t");
		printf("\n\n");
		printf("| [1] - Escolher peca |\n");
		printf("| [2] - Fechar caixa |\n");
		printf("| [0] - Finalizar sistema |\n\n");
		printf("%c----------------------------------------------------------------------------%c\n\n", 200, 188);
		printf("Opcao: ");
		scanf("%d", &opcao);
		
		switch(opcao)
		{
			case 1:
				// Escolhendo a sessao
				system("cls");
				printf("%c----------------------------------------------------------------------------%c\n", 201, 187);
			    printf("\n");
				printf("\t===============================================\n");
				printf("\t ESCOLHA UMA DAS OPCOES: \n");
				printf("\t-----------------------------------------------\n");
				printf("\t| Pecas em cartaz |\n\n");
				printf("\t| [1] Cazuza - Pro dia nascer feliz |\n");
				printf("\t| [2] Mulheres de Shakespeare |\n");
				printf("\t| [3] Caros Ouvintes |\n");
				printf("\t===============================================\n");
				printf("\n");
				printf("%c----------------------------------------------------------------------------%c\n\n", 200, 188);
				printf("Opcao: ");
				scanf("%d", &escolha);
		
				if(escolha == 1){
					EscolhaUm();
				}else if(escolha == 2){
					EscolhaDois();
				}else if(escolha == 3){
					EscolhaTres();
				}
				
				// Lendo a opção do menu
				fflush(stdin);
				break;
			case 2:
				// Listando ingressos.
				system("cls");
				printf("%c----------------------------------------------------------------------------%c\n", 201, 187);
				printf(" | ");
				printf("\t|  TOTAL DE VENDAS: %.3f   |\n\n",QuantidadeTotalVendida);
			    printf("\t|  INGRESSOS DISPONIVEIS PECA 1: %d  |\n\n",qdeingressosPecaUm);
			    printf("\t|  INGRESSOS DISPONIVEIS PECA 2: %d  |\n\n",qdeingressosPecaDois);
			    printf("\t|  INGRESSOS DISPONIVEIS PECA 3: %d  |\n\n",qdeingressosPecaTres);
				printf(" | ");
				printf("%c----------------------------------------------------------------------------%c\n\n", 200, 188);
				system ("pause");
				break;
			default:
			
				system("cls");
				break;
		}
	}while(opcao != 0);
	
	system ("pause");

}

// Escolhendo a opcao 1
void EscolhaUm(){
	int escolha, opcao , quantidade = 0;
	int numeroEscolhido = 0;
	int PoltronasEscolhidasUm[] {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}; //
	
	system("cls");
	printf("%c----------------------------------------------------------------------------%c\n", 201, 187);
	printf("\n");
	printf("\t ESCOLHA UMA DAS OPCOES: \n");
	printf("\t-----------------------------------------------\n");
	printf("\t Cine 1: Cazuza - Pro dia nascer feliz\n");
	printf("\t Sessao [1]: 13:30 \n");
	printf("\t Sessao [2]: 15:30 \n");
	printf("\t Sessao [3]: 17:30 \n");
	printf("\tComprar bilhete para qual sessao? \n\n");
	printf("\n");
	printf("%c----------------------------------------------------------------------------%c\n\n", 200, 188);
	printf("Opcao: ");
	scanf("%d", &escolha);
	system("cls");
	
	if(escolha == 1){
		system("cls");
		printf("%c----------------------------------------------------------------------------%c\n", 201, 187);
		printf("\n");
		printf("\n\t ESCOLHA UMA DAS OPCOES: \n");
		printf("\t Escolha: Cazuza - Pro dia nascer feliz, Sessao as 13:30\n");
		printf("\t Quantidade de Ingressos? \n\n");
		printf("\n");
		printf("%c----------------------------------------------------------------------------%c\n\n", 200, 188);
		printf("Opcao: ");
		scanf("%d", &quantidade);
		
		if(quantidade <= qdeingressosPecaUm){
			
			qdeingressosPecaUm -= quantidade;
			
			int count = 0;
			do{
				MenuPoltrona();
				scanf("%d", &numeroEscolhido);
				
				if(EscolherPoltronas(1, numeroEscolhido)){
					PoltronasEscolhidasUm[count] = numeroEscolhido;
					count++;
				}else{
				  printf("\t OPCAO INVALIDA, ESTA POLTRONA JA ESTA RESERVADA \n");	
				  printf("\n");
				  system ("pause");
				}
			}while(!(quantidade == count));
		
			for(int i = 0 ; i < quantidade; i++){
				system("cls");
				
				MenuValorIngressoSessao();
				
				printf("Opcao: ");
				scanf("%d", &escolha);
			
				
				if(escolha == 1){
					QuantidadeTotalVendida += valorIngressoInteira;
				}
				else if(escolha == 2){
					QuantidadeTotalVendida += valorIngressomeia;
				}else if(escolha == 3){
					QuantidadeTotalVendida += ValorIngressoGratuidade;
				}else if(escolha == 4){
					QuantidadeTotalVendida += ValorIngressoGratuidade;
				}
				else{
					printf("\t OPCAO INVALIDA DIGITE ENTRE 1 E 4 \n");
					printf("\n");	
					if(i < 1){
						i = 1;
					}
					i--;
					system ("pause");
				}
			}
				printf("\t Voce Adquiriu %d ingressos, para Cazuza - Pro dia nascer feliz, Sessao as 13:30 ",quantidade);
				printf("\n \t Poltronas :");
				int countUm = sizeof( PoltronasEscolhidasUm ) / sizeof( *PoltronasEscolhidasUm );
				for(int i = 0;i < countUm; i++){
				    if(PoltronasEscolhidasUm[i] != 0){
				    	 printf("\t %d",PoltronasEscolhidasUm[i]);
					}
				}
				printf("\n");
				printf("\n");
				printf("\t Divirta - se!\n");
				printf("\n");
				system ("pause");
		} else {
			system("cls");
			printf("%c----------------------------------------------------------------------------%c\n", 201, 187);
			printf("\n");
			printf("\t 	QUANTIDADE NAO DISPONIVEL: \n");
			printf("\n");
			printf("%c----------------------------------------------------------------------------%c\n\n", 200, 188);
			system ("pause");
		}
	}
	else if(escolha == 2){
		system("cls");
		printf("%c----------------------------------------------------------------------------%c\n", 201, 187);
		printf("\n");
		printf("\t ESCOLHA UMA DAS OPCOES: \n");
		printf("\t-----------------------------------------------\n");
		printf("\t Escolha: Cazuza - Pro dia nascer feliz, Sessao as 15:30\n");
		printf("\t Quantidade de Ingressos? \n\n");
		printf("\n");
		printf("%c----------------------------------------------------------------------------%c\n\n", 200, 188);
		printf("Opcao: ");
		scanf("%d", &quantidade);
		
		if(quantidade <= qdeingressosPecaUm){

			qdeingressosPecaUm -= quantidade;
			
			int count = 0;
			do{
				MenuPoltrona();
				scanf("%d", &numeroEscolhido);
				
				if(EscolherPoltronas(1, numeroEscolhido)){
					PoltronasEscolhidasUm[count] = numeroEscolhido;
					count++;
				}else{
				  printf("\t OPCAO INVALIDA, ESTA POLTRONA JA ESTA RESERVADA \n");	
				  printf("\n");
				  system ("pause");
				}
			}while(!(quantidade == count));
		
			
			for(int i = 0 ; i < quantidade; i++){
				system("cls");
				
				MenuValorIngressoSessao();
				
				printf("Opcao: ");
				scanf("%d", &escolha);
				if(escolha == 1){
					QuantidadeTotalVendida += valorIngressoInteira;
				}
				else if(escolha == 2){
					QuantidadeTotalVendida += valorIngressomeia;
				}else if(escolha == 3){
					QuantidadeTotalVendida += ValorIngressoGratuidade;
				}else if(escolha == 4){
					QuantidadeTotalVendida += ValorIngressoGratuidade;
				}
				else{
					printf("\t OPCAO INVALIDA DIGITE ENTRE 1 E 4 \n");	
					printf("\n");
					i--;
					system ("pause");
				}
			}

			printf("\t Voce Adquiriu %d ingressos, para Cazuza - Pro dia nascer feliz, Sessao as 15:30 \n",quantidade);
			printf("\n \t Poltronas :");
			int countUm = sizeof( PoltronasEscolhidasUm ) / sizeof( *PoltronasEscolhidasUm );
			for(int i = 0;i < countUm; i++){
				if(PoltronasEscolhidasUm[i] != 0){
					 printf("\t %d",PoltronasEscolhidasUm[i]);
				}
			}
			printf("\n");
			printf("\n");
			printf("\t Divirta - se!\n");
			printf("\n");
			system ("pause");
		} else {
			system("cls");
			printf("%c----------------------------------------------------------------------------%c\n", 201, 187);
			printf("\n");
			printf("\t 	QUANTIDADE NAO DISPONIVEL : \n");
			printf("\n");
			printf("%c----------------------------------------------------------------------------%c\n\n", 200, 188);
			system ("pause");
		}
	}
	else if(escolha == 3){
		system("cls");
		printf("%c----------------------------------------------------------------------------%c\n", 201, 187);
		printf("\n");
		printf("\t ESCOLHA UMA DAS OPCOES: \n");
		printf("\t-----------------------------------------------\n");
		printf("\t Escolha: Cazuza - Pro dia nascer feliz, sessao as 13:30\n");
		printf("\t Quantidade de Ingressos? \n\n");
		printf("\n");
		printf("%c----------------------------------------------------------------------------%c\n\n", 200, 188);
		printf("Opcao: ");
		scanf("%d", &quantidade);
		
		if(quantidade <= qdeingressosPecaUm){

			qdeingressosPecaUm -= quantidade;
		
			int count = 0;
			do{
				MenuPoltrona();
				scanf("%d", &numeroEscolhido);
				
				if(EscolherPoltronas(1, numeroEscolhido)){
					PoltronasEscolhidasUm[count] = numeroEscolhido;
					count++;
				}else{
				  printf("\t OPCAO INVALIDA, ESTA POLTRONA JA ESTA RESERVADA \n");	
				  printf("\n");
				  system ("pause");
				}
			}while(!(quantidade == count));
			
			for(int i = 0 ; i < quantidade; i++){
				system("cls");
				
				MenuValorIngressoSessao();
				
				printf("Opcao: ");
				scanf("%d", &escolha);
				if(escolha == 1){
					QuantidadeTotalVendida += valorIngressoInteira;
				}
				else if(escolha == 2){
					QuantidadeTotalVendida += valorIngressomeia;
				}else if(escolha == 3){
					QuantidadeTotalVendida += ValorIngressoGratuidade;
				}else if(escolha == 4){
					QuantidadeTotalVendida += ValorIngressoGratuidade;
				}
				else{
					printf("\t OPCAO INVALIDA DIGITE ENTRE 1 E 4 \n");	
					i--;
					system ("pause");
				}
			}
			printf("\t Voce Adquiriu %d ingressos, para Cazuza - Pro dia nascer feliz, sessao as 17:30\n",quantidade);
			printf("\n \t Poltronas :");
			int countUm = sizeof( PoltronasEscolhidasUm ) / sizeof( *PoltronasEscolhidasUm );
			for(int i = 0;i < countUm; i++){
				if(PoltronasEscolhidasUm[i] != 0){
					 printf("\t %d",PoltronasEscolhidasUm[i]);
				}
			}
			printf("\n");
			printf("\n");
			printf("\t Divirta - se!\n");
			printf("\n");
			system ("pause");
		} else {
			system("cls");
			printf("%c----------------------------------------------------------------------------%c\n", 201, 187);
			printf("\n");
			printf("\t 	QUANTIDADE NAO DISPONIVEL : \n");
			printf("\n");
			printf("%c----------------------------------------------------------------------------%c\n\n", 200, 188);
			system ("pause");
		}
	}
}

// Escolhendo a opcao 2
void EscolhaDois(){
	
	int escolha, opcao , quantidade = 0;
	int numeroEscolhido = 0;
	int PoltronasEscolhidasDois[] {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}; //
	
	system("cls");
	printf("%c----------------------------------------------------------------------------%c\n", 201, 187);
	printf("\n");
	printf("\t ESCOLHA UMA DAS OPCOES: \n");
	printf("\t-----------------------------------------------\n");
	printf("\t Cine 2: Mulheres de Shakespeare\n");
	printf("\t Sessao [1]: 13:30 \n");
	printf("\t Sessao [2]: 15:30 \n");
	printf("\t Sessao [3]: 17:30 \n");
	printf("\tComprar bilhete para qual sessao? \n\n");
	printf("\n");
	printf("%c----------------------------------------------------------------------------%c\n\n", 200, 188);
	printf("Opcao: ");
	scanf("%d", &escolha);
	system("cls");
	
	if(escolha == 1){
		system("cls");
		printf("%c----------------------------------------------------------------------------%c\n", 201, 187);
		printf("\n");
		printf("\t ESCOLHA UMA DAS OPCOES: \n");
		printf("\t-----------------------------------------------\n");
		printf("\t Escolha: Mulheres de Shakespeare, Sessao as 13:30\n");
		printf("\t Quantidade de Ingressos? \n\n");
		printf("\n");
		printf("%c----------------------------------------------------------------------------%c\n\n", 200, 188);
		printf("Opcao: ");
		scanf("%d", &quantidade);
		
		if(quantidade <= qdeingressosPecaDois){

			qdeingressosPecaDois -= quantidade;
		
			int count = 0;
			do{
				MenuPoltrona();
				scanf("%d", &numeroEscolhido);
				
				if(EscolherPoltronas(2, numeroEscolhido)){
				    PoltronasEscolhidasDois[count] = numeroEscolhido;
					count++;
				}else{
				  printf("\t OPCAO INVALIDA, ESTA POLTRONA JA ESTA RESERVADA \n");
				  printf("\n");	
				  system ("pause");
				}
			}while(!(quantidade == count));
			
			for(int i = 0 ; i < quantidade; i++){
				system("cls");
				
				MenuValorIngressoSessao();
				
				printf("Opcao: ");
				scanf("%d", &escolha);
				if(escolha == 1){
					QuantidadeTotalVendida += valorIngressoInteira;
				}
				else if(escolha == 2){
					QuantidadeTotalVendida += valorIngressomeia;
				}else if(escolha == 3){
					QuantidadeTotalVendida += ValorIngressoGratuidade;
				}else if(escolha == 4){
					QuantidadeTotalVendida += ValorIngressoGratuidade;	
				}
				else{
					printf("\t OPCAO INVALIDA DIGITE ENTRE 1 E 4 \n");	
					printf("\n");
					i--;
					system ("pause");
				}
			}
			printf("\t Voce Adquiriu %d ingressos, para Mulheres de Shakespeare, Sessao as 13:30\n",quantidade);
			printf("\n \t Poltronas :");
			int countUm = sizeof( PoltronasEscolhidasDois ) / sizeof( *PoltronasEscolhidasDois );
			for(int i = 0;i < countUm; i++){
				if(PoltronasEscolhidasDois[i] != 0){
					 printf("\t %d",PoltronasEscolhidasDois[i]);
				}
			}
			printf("\n");
			printf("\n");
			printf("\t Divirta - se!\n");
			printf("\n");
			system ("pause");
		} else {
			system("cls");
			printf("%c----------------------------------------------------------------------------%c\n", 201, 187);
			printf("\n");
			printf("\t 	QUANTIDADE NAO DISPONIVEL : \n");
			printf("\n");
			printf("%c----------------------------------------------------------------------------%c\n\n", 200, 188);
			system ("pause");
		}
	}
	else if(escolha == 2){
		system("cls");
		printf("%c----------------------------------------------------------------------------%c\n", 201, 187);
		printf("\n");
		printf("\t ESCOLHA UMA DAS OPCOES: \n");
		printf("\t-----------------------------------------------\n");
		printf("\t Escolha: Mulheres de Shakespeare, Sessao as 15:30\n");
		printf("\t Quantidade de Ingressos? \n\n");
		printf("\n");
		printf("%c----------------------------------------------------------------------------%c\n\n", 200, 188);
		printf("Opcao: ");
		scanf("%d", &quantidade);
		
		if(quantidade <= qdeingressosPecaDois){

			qdeingressosPecaDois -= quantidade;
		
			int count = 0;
			do{
				MenuPoltrona();
				scanf("%d", &numeroEscolhido);
				
				if(EscolherPoltronas(2, numeroEscolhido)){
					PoltronasEscolhidasDois[count] = numeroEscolhido;
					count++;
				}else{
				  printf("\t OPCAO INVALIDA, ESTA POLTRONA JA ESTA RESERVADA \n");
				  printf("\n");	
				  system ("pause");
				}
			}while(!(quantidade == count));
			
			for(int i = 0 ; i < quantidade; i++){
				system("cls");
				
				MenuValorIngressoSessao();
				
				printf("Opcao: ");
				scanf("%d", &escolha);
				if(escolha == 1){
					QuantidadeTotalVendida += valorIngressoInteira;
				}
				else if(escolha == 2){
					QuantidadeTotalVendida += valorIngressomeia;
				}else if(escolha == 3){
					QuantidadeTotalVendida += ValorIngressoGratuidade;
				}else if(escolha == 4){
					QuantidadeTotalVendida += ValorIngressoGratuidade;
				}
				else{
					printf("\t OPCAO INVALIDA DIGITE ENTRE 1 E 4 \n");	
					i--;
					printf("\n");
					system ("pause");
				}
			}
			printf("\t Voce Adquiriu %d ingressos, para Mulheres de Shakespeare, Sessao as 15:30\n",quantidade);
			printf("\n \t Poltronas :");
			int countUm = sizeof( PoltronasEscolhidasDois ) / sizeof( *PoltronasEscolhidasDois );
			for(int i = 0;i < countUm; i++){
				if(PoltronasEscolhidasDois[i] != 0){
					 printf("\t %d",PoltronasEscolhidasDois[i]);
				}
			}
			printf("\n");
			printf("\n");
			printf("\t Divirta - se!\n");
			system ("pause");
		} else {
			system("cls");
			printf("%c----------------------------------------------------------------------------%c\n", 201, 187);
			printf("\n");
			printf("\t 	QUANTIDADE NAO DISPONIVEL : \n");
			printf("\n");
			printf("%c----------------------------------------------------------------------------%c\n\n", 200, 188);
			system ("pause");
		}
	}
	else if(escolha == 3){
		system("cls");
		printf("%c----------------------------------------------------------------------------%c\n", 201, 187);
		printf("\n");
		printf("\t ESCOLHA UMA DAS OPCOES: \n");
		printf("\t-----------------------------------------------\n");
		printf("\t Escolha: Mulheres de Shakespeare, Sessao as 17:30\n");
		printf("\t Quantidade de Ingressos? \n\n");
		printf("\n");
		printf("%c----------------------------------------------------------------------------%c\n\n", 200, 188);
		printf("Opcao: ");
		scanf("%d", &quantidade);
		
		if(quantidade <= qdeingressosPecaDois){

			qdeingressosPecaDois -= quantidade;
		
			int count = 0;
			do{
				MenuPoltrona();
				scanf("%d", &numeroEscolhido);
				
				if(EscolherPoltronas(2, numeroEscolhido)){
					PoltronasEscolhidasDois[count] = numeroEscolhido;
					count++;
				}else{
				  printf("\t OPCAO INVALIDA, ESTA POLTRONA JA ESTA RESERVADA \n");	
				  printf("\n");
				  system ("pause");
				}
			}while(!(quantidade == count));
			
			for(int i = 0 ; i < quantidade; i++){
				system("cls");
	
				MenuValorIngressoSessao();
				
				printf("Opcao: ");
				scanf("%d", &escolha);
				if(escolha == 1){
					QuantidadeTotalVendida += valorIngressoInteira;
				}
				else if(escolha == 2){
					QuantidadeTotalVendida += valorIngressomeia;
				}else if(escolha == 3){
					QuantidadeTotalVendida += ValorIngressoGratuidade;
				}else if(escolha == 4){
					QuantidadeTotalVendida += ValorIngressoGratuidade;
				}
				else{
					printf("\t OPCAO INVALIDA DIGITE ENTRE 1 E 4 \n");	
					i--;
					system ("pause");
				}
			}
			
			printf("\t Voce Adquiriu %d ingressos, para Mulheres de Shakespeare, Sessao as 17:30\n",quantidade);
			printf("\n \t Poltronas :");
			int countUm = sizeof( PoltronasEscolhidasDois ) / sizeof( *PoltronasEscolhidasDois );
			for(int i = 0;i < countUm; i++){
				if(PoltronasEscolhidasDois[i] != 0){
					 printf("\t %d",PoltronasEscolhidasDois[i]);
				}
			}
			printf("\n");
			printf("\n");
			printf("\t Divirta - se!\n");
			printf("\n");
			system ("pause");
		} else {
			system("cls");
			printf("%c----------------------------------------------------------------------------%c\n", 201, 187);
			printf("\n");
			printf("\t 	QUANTIDADE NAO DISPONIVEL : \n");
			printf("\n");
			printf("%c----------------------------------------------------------------------------%c\n\n", 200, 188);
			system ("pause");
		}
	}
}
// Escolhendo a opcao 3
void EscolhaTres(){
	
	int escolha, opcao , quantidade = 0;
	int numeroPoltrona = 0;
	int numeroEscolhido = 0;
	int PoltronasEscolhidasTres[] {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}; //
	
	system("cls");
	printf("%c----------------------------------------------------------------------------%c\n", 201, 187);
	printf("\n");
	printf("\t ESCOLHA UMA DAS OPCOES: \n");
	printf("\t-----------------------------------------------\n");
	printf("\t Cine 3: Caros Ouvintes\n");
	printf("\t Sessao [1]: 13:30 \n");
	printf("\t Sessao [2]: 15:30 \n");
	printf("\t Sessao [3]: 17:30 \n");
	printf("\tComprar bilhete para qual sessao? \n\n");
	printf("\n");
	printf("%c----------------------------------------------------------------------------%c\n\n", 200, 188);
	printf("Opcao: ");
	scanf("%d", &escolha);
	system("cls");
	
	if(escolha == 1){
		system("cls");
		printf("%c----------------------------------------------------------------------------%c\n", 201, 187);
		printf("\n");
		printf("\t ESCOLHA UMA DAS OPCOES: \n");
		printf("\t-----------------------------------------------\n");
		printf("\t Escolha: Caros Ouvintes, sessao as 13:30\n");
		printf("\t Quantidade de Ingressos? \n\n");
		printf("\n");
		printf("%c----------------------------------------------------------------------------%c\n\n", 200, 188);
		printf("Opcao: ");
		scanf("%d", &quantidade);
		
		if(quantidade <= qdeingressosPecaTres){

			qdeingressosPecaTres -= quantidade;
		
			int count = 0;
			do{
				MenuPoltrona();
				scanf("%d", &numeroEscolhido);
				
				if(EscolherPoltronas(3, numeroEscolhido)){
					PoltronasEscolhidasTres[count] = numeroEscolhido;
					count++;
				}else{
				  printf("\t OPCAO INVALIDA, ESTA POLTRONA JA ESTA RESERVADA \n");	
				  printf("\n");
				  system ("pause");
				}
			}while(!(quantidade == count));
			
			for(int i = 0 ; i < quantidade; i++){
				system("cls");
				
				MenuValorIngressoSessao();
				
				printf("Opcao: ");
				scanf("%d", &escolha);
				if(escolha == 1){
					MenuPoltrona();
					scanf("%d", &numeroPoltrona);
					
					QuantidadeTotalVendida += valorIngressoInteira;
				}
				else if(escolha == 2){
					QuantidadeTotalVendida += valorIngressomeia;
				}else if(escolha == 3){
					QuantidadeTotalVendida += ValorIngressoGratuidade;
				}else if(escolha == 4){
					QuantidadeTotalVendida += ValorIngressoGratuidade;	
				}
				else{
					printf("\t OPCAO INVALIDA DIGITE ENTRE 1 E 4 \n");	
					i--;
					system ("pause");
				}
			}
			printf("\t Voce Adquiriu %d ingressos, para Caros Ouvintes, Sessao as 13:30\n",quantidade);
			printf("\n \t Poltronas :");
			int countUm = sizeof( PoltronasEscolhidasTres ) / sizeof( *PoltronasEscolhidasTres );
			for(int i = 0;i < countUm; i++){
				if(PoltronasEscolhidasTres[i] != 0){
					 printf("\t %d",PoltronasEscolhidasTres[i]);
				}
			}
			printf("\n");
			printf("\n");
			printf("\t Divirta - se!\n");
			printf("\n");
			system ("pause");
		} else {
			system("cls");
			printf("%c----------------------------------------------------------------------------%c\n", 201, 187);
			printf("\n");
			printf("\t 	QUANTIDADE NAO DISPONIVEL : \n");
			printf("\n");
			printf("%c----------------------------------------------------------------------------%c\n\n", 200, 188);
			system ("pause");
		}
	}
	else if(escolha == 2){
		system("cls");
		printf("%c----------------------------------------------------------------------------%c\n", 201, 187);
		printf("\n");
		printf("\t ESCOLHA UMA DAS OPCOES: \n");
		printf("\t-----------------------------------------------\n");
		printf("\t Escolha: Caros Ouvintes, sessao as 15:30\n");
		printf("\t Quantidade de Ingressos? \n\n");
		printf("\n");
		printf("%c----------------------------------------------------------------------------%c\n\n", 200, 188);
		printf("Opcao: ");
		scanf("%d", &quantidade);
		
		if(quantidade <= qdeingressosPecaTres){

			qdeingressosPecaTres -= quantidade;
		
			int count = 0;
			do{
				MenuPoltrona();
				scanf("%d", &numeroEscolhido);
				
				if(EscolherPoltronas(3, numeroEscolhido)){
					PoltronasEscolhidasTres[count] = numeroEscolhido;
					count++;
				}else{
				  printf("\t OPCAO INVALIDA, ESTA POLTRONA JA ESTA RESERVADA \n");
				  printf("\n");	
				  system ("pause");
				}
			}while(!(quantidade == count));
			
			for(int i = 0 ; i < quantidade; i++){
				system("cls");
				
				MenuValorIngressoSessao();
				
				printf("Opcao: ");
				scanf("%d", &escolha);
				if(escolha == 1){
					QuantidadeTotalVendida += valorIngressoInteira;
				}
				else if(escolha == 2){
					QuantidadeTotalVendida += valorIngressomeia;
				}else if(escolha == 3){
					QuantidadeTotalVendida += ValorIngressoGratuidade;
				}else if(escolha == 4){
					QuantidadeTotalVendida += ValorIngressoGratuidade;
				}
				else{
					printf("\t OPCAO INVALIDA DIGITE ENTRE 1 E 4 \n");	
					printf("\n");
					i--;
					system ("pause");
				}
				
			}
			printf("\t Voce Adquiriu %d ingressos, para Caros Ouvintes, Sessao as 15:30\n",quantidade);
			printf("\n \t Poltronas :");
			int countUm = sizeof( PoltronasEscolhidasTres ) / sizeof( *PoltronasEscolhidasTres );
			for(int i = 0;i < countUm; i++){
				if(PoltronasEscolhidasTres[i] != 0){
					 printf("\t %d",PoltronasEscolhidasTres[i]);
				}
			}
			printf("\n");
			printf("\n");
			printf("\t Divirta - se!\n");
			printf("\n");
			system ("pause");
		} else {
			system("cls");
			printf("%c----------------------------------------------------------------------------%c\n", 201, 187);
			printf("\n");
			printf("\t 	QUANTIDADE NAO DISPONIVEL : \n");
			printf("\n");
			printf("%c----------------------------------------------------------------------------%c\n\n", 200, 188);
			system ("pause");
		}
	}
	else if(escolha == 3){
		system("cls");
		printf("%c----------------------------------------------------------------------------%c\n", 201, 187);
		printf("\n");
		printf("\t ESCOLHA UMA DAS OPCOES: \n");
		printf("\t-----------------------------------------------\n");
		printf("\t Escolha: Caros Ouvintes, sessao as 17:30\n");
		printf("\t Quantidade de Ingressos? \n\n");
		printf("\n");
		printf("%c----------------------------------------------------------------------------%c\n\n", 200, 188);
		printf("Opcao: ");
		scanf("%d", &quantidade);
		
		if(quantidade <= qdeingressosPecaTres){

			qdeingressosPecaTres -= quantidade;
		
			int count = 0;
			do{
				MenuPoltrona();
				scanf("%d", &numeroEscolhido);
				
				if(EscolherPoltronas(3, numeroEscolhido)){
					PoltronasEscolhidasTres[count] = numeroEscolhido;
					count++;
				}else{
				  printf("\t OPCAO INVALIDA, ESTA POLTRONA JA ESTA RESERVADA \n");	
				  system ("pause");
				}
			}while(!(quantidade == count));
		
			for(int i = 0 ; i < quantidade; i++){
				system("cls");
				
                MenuValorIngressoSessao();
				
				printf("Opcao: ");
				scanf("%d", &escolha);
				if(escolha == 1){
					QuantidadeTotalVendida += valorIngressoInteira;
					MenuPoltrona();
					scanf("%d", &escolha);
				}
				else if(escolha == 2){
					QuantidadeTotalVendida += valorIngressomeia;
				}else if(escolha == 3){
					QuantidadeTotalVendida += ValorIngressoGratuidade;
				}else if(escolha == 4){
					QuantidadeTotalVendida += ValorIngressoGratuidade;
				}else{
					printf("\t OPCAO INVALIDA DIGITE ENTRE 1 E 4 \n");	
					i--;
					system ("pause");
				}
			}
			printf("\t Voce Adquiriu %d ingressos, para Caros Ouvintes, Sessao as 17:30\n",quantidade);
			printf("\n \t Poltronas :");
			int countUm = sizeof( PoltronasEscolhidasTres ) / sizeof( *PoltronasEscolhidasTres );
			for(int i = 0;i < countUm; i++){
				if(PoltronasEscolhidasTres[i] != 0){
					 printf("\t %d",PoltronasEscolhidasTres[i]);
				}
			}
			printf("\n");
			printf("\n");
			printf("\t Divirta - se!\n");
			printf("\n");
			system ("pause");
		} else {
			system("cls");
			printf("%c-------------------s---------------------------------------------------------%c\n", 201, 187);
			printf("\n");
			printf("\t 	QUANTIDADE NAO DISPONIVEL : \n");
			printf("\n");
			printf("%c----------------------------------------------------------------------------%c\n\n", 200, 188);
			system ("pause");
		}
	}
}

// funcao validar se existe poltronas disponiveis
bool EscolherPoltronas(int escolha, int numeroEscolhido){
	const int countUm = sizeof( PoltronasPecaUm ) / sizeof( *PoltronasPecaUm );
	const int countDois = sizeof( PoltronasPecaDois ) / sizeof( *PoltronasPecaDois );
	const int countTres = sizeof( PoltronasPecaTres ) / sizeof( *PoltronasPecaTres );
	switch(escolha){
		case 1:
			for(int i = 0;i < countUm; i++){
				if(PoltronasPecaUm[i] == numeroEscolhido && PoltronasPecaUm[i] != 0){
					PoltronasPecaUm[i] = 0;
					return true;
				}
			}
			return false;
		case 2:
			for(int i = 0;i < countDois; i++){
				if(PoltronasPecaDois[i] == numeroEscolhido && PoltronasPecaDois[i] != 0){
					PoltronasPecaDois[i] = 0;
					return true;
				}
			}
			return false;
		case 3:
			for(int i = 0;i < countDois; i++){
				if(PoltronasPecaTres[i] == numeroEscolhido && PoltronasPecaTres[i] != 0){
					PoltronasPecaTres[i] = 0;
					return true;
				}
			}
			return false;
	}		
}

// Menu de poltronas
void MenuPoltrona(){
		system("cls");
		printf("%c----------------------------------------------------------------------------%c\n", 201, 187);
		printf("\n");
		printf("\t ESCOLHA SUA POLTRONA DE 1 a 20: \n");
		printf("\n");
		printf("%c----------------------------------------------------------------------------%c\n\n", 200, 188);
		printf("Qual poltrona: ");
}

//Menu de ingressos
void MenuValorIngressoSessao(){
	printf("%c----------------------------------------------------------------------------%c\n", 201, 187);
	printf("\n");
	printf("\t ESCOLHA UMA DAS OPCOES: \n");
	printf("\t-----------------------------------------------\n");
	printf("\t Entrada [1]: Inteira -  R$ 50.00\n");
	printf("\t Entrada [2]: Meia - Entrada - R$ 25.00\n");
	printf("\t Entrada [3]: Gratuidade \n");
	printf("\t Entrada [4]: Rede Publica \n");
	printf("\tComprar bilhete para qual sessao? \n\n");
	printf("\n");
	printf("%c----------------------------------------------------------------------------%c\n\n", 200, 188);
}

