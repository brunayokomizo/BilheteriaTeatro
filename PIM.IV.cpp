#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

// Declara a função.
void EscolhaUm();
void EscolhaDois();
void EscolhaTres();

// variavel global das vendas
float QuantidadeTotalVendida = 0.00;

// variavel global dos Lugares
int qdeingressosPecaUm = 20, qdeingressosPecaDois = 20, qdeingressosPecaTres  =  20;
float valorIngressoInteira = 50.00, valorIngressomeia = 25.00, ValorIngressoGratuidade = 0.00;

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
		printf("\t========== TEATRO METROPOLI ====================\n");
		printf("\t===============================================\n");
		printf("\t===============================================\n\n");
		printf(" | ");
		printf("\t\t\t\t MENU DE OPCOES \t\t\t\t");
		printf(" | ");
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
				printf("\t===============================================\n");
				printf(" | ");
				printf("\t ESCOLHA UMA DAS OPCOES: \n");
				printf("\t-----------------------------------------------\n");
				printf("\t| Pecas em cartaz |\n\n");
				printf("\t| [1] Cazuza - Pro dia nascer feliz |\n");
				printf("\t| [2] Mulheres de Shakespeare |\n");
				printf("\t| [3] Caros Ouvintes |\n");
				printf(" | ");
				printf("\t===============================================\n");
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
	
	system("cls");
	printf("%c----------------------------------------------------------------------------%c\n", 201, 187);
	printf(" | ");
	printf("\t ESCOLHA UMA DAS OPCOES: \n");
	printf("\t-----------------------------------------------\n");
	printf("\t Cine 1: Cazuza - Pro dia nascer feliz\n");
	printf("\t Sessao [1]: 13:30 \n");
	printf("\t Sessao [2]: 15:30 \n");
	printf("\t Sessao [3]: 17:30 \n");
	printf("\tComprar bilhete para qual sessao? \n\n");
	printf(" | ");
	printf("%c----------------------------------------------------------------------------%c\n\n", 200, 188);
	printf("Opcao: ");
	scanf("%d", &escolha);
	system("cls");
	
	if(escolha == 1){
		system("cls");
		printf("%c----------------------------------------------------------------------------%c\n", 201, 187);
		printf(" | ");
		printf("\t ESCOLHA UMA DAS OPCOES: \n");
		printf("\t-----------------------------------------------\n");
		printf("\t Escolha: Cazuza - Pro dia nascer feliz, Sessão as 13:30\n");
		printf("\t Quantidade de Ingressos? \n\n");
		printf(" | ");
		printf("%c----------------------------------------------------------------------------%c\n\n", 200, 188);
		printf("Opcao: ");
		scanf("%d", &quantidade);
		
		if(quantidade <= qdeingressosPecaUm){

			qdeingressosPecaUm -= quantidade;
		
			for(int i = 0 ; i < quantidade; i++){
				system("cls");
				printf("%c----------------------------------------------------------------------------%c\n", 201, 187);
				printf(" | ");
				printf("\t ESCOLHA UMA DAS OPCOES: \n");
				printf("\t-----------------------------------------------\n");
				printf("\t Entrada [1]: Inteira -  R$ 50.00\n");
				printf("\t Entrada [2]: Meia - Entrada - R$ 25.00\n");
				printf("\t Entrada [3]: Gratuidade \n");
				printf("\t Entrada [4]: Rede Publica \n");
				printf("\tComprar bilhete para qual sessao? \n\n");
				printf(" | ");
				printf("%c----------------------------------------------------------------------------%c\n\n", 200, 188);
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
				printf("\t Voce Adquiriu %d ingressos, para Cazuza - Pro dia nascer feliz, Sessao as 13:30\n",quantidade);
				printf("\t Divirta - se!\n");
				system ("pause");
		} else {
			system("cls");
			printf("%c----------------------------------------------------------------------------%c\n", 201, 187);
			printf(" | ");
			printf("\t 	QUATIDADE NAO DISPONIVEL: \n");
			printf(" | ");
			printf("%c----------------------------------------------------------------------------%c\n\n", 200, 188);
			system ("pause");
		}
	}
	else if(escolha == 2){
		system("cls");
		printf("%c----------------------------------------------------------------------------%c\n", 201, 187);
		printf(" | ");
		printf("\t ESCOLHA UMA DAS OPCOES: \n");
		printf("\t-----------------------------------------------\n");
		printf("\t Escolha: Cazuza - Pro dia nascer feliz, Sessao as 15:30\n");
		printf("\t Quantidade de Ingressos? \n\n");
		printf(" | ");
		printf("%c----------------------------------------------------------------------------%c\n\n", 200, 188);
		printf("Opcao: ");
		scanf("%d", &quantidade);
		
		if(quantidade <= qdeingressosPecaUm){

			qdeingressosPecaUm -= quantidade;
		
			for(int i = 0 ; i < quantidade; i++){
				system("cls");
				printf("%c----------------------------------------------------------------------------%c\n", 201, 187);
				printf(" | ");
				printf("\t ESCOLHA UMA DAS OPCOES: \n");
				printf("\t-----------------------------------------------\n");
				printf("\t Entrada [1]: Inteira -  R$ 50.00\n");
				printf("\t Entrada [2]: Meia - Entrada - R$ 25.00\n");
				printf("\t Entrada [3]: Gratuidade \n");
				printf("\t Entrada [4]: Rede Publica \n");
				printf("\tComprar bilhete para qual sessao? \n\n");
				printf(" | ");
				printf("%c----------------------------------------------------------------------------%c\n\n", 200, 188);
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
			printf("\t Voce Adquiriu %d ingressos, para Cazuza - Pro dia nascer feliz, Sessao as 15:30\n",quantidade);
			printf("\t Divirta - se!\n");
			system ("pause");
		} else {
			system("cls");
			printf("%c----------------------------------------------------------------------------%c\n", 201, 187);
			printf(" | ");
			printf("\t 	QUATIDADE NAO DISPONIVEL : \n");
			printf(" | ");
			printf("%c----------------------------------------------------------------------------%c\n\n", 200, 188);
			system ("pause");
		}
	}
	else if(escolha == 3){
		system("cls");
		printf("%c----------------------------------------------------------------------------%c\n", 201, 187);
		printf(" | ");
		printf("\t ESCOLHA UMA DAS OPCOES: \n");
		printf("\t-----------------------------------------------\n");
		printf("\t Escolha: Cazuza - Pro dia nascer feliz, sessao as 13:30\n");
		printf("\t Quantidade de Ingressos? \n\n");
		printf(" | ");
		printf("%c----------------------------------------------------------------------------%c\n\n", 200, 188);
		printf("Opcao: ");
		scanf("%d", &quantidade);
		
		if(quantidade <= qdeingressosPecaUm){

			qdeingressosPecaUm -= quantidade;
		
			for(int i = 0 ; i < quantidade; i++){
				system("cls");
				printf("%c----------------------------------------------------------------------------%c\n", 201, 187);
				printf(" | ");
				printf("\t ESCOLHA UMA DAS OPCOES: \n");
				printf("\t-----------------------------------------------\n");
				printf("\t Entrada [1]: Inteira -  R$ 50.00\n");
				printf("\t Entrada [2]: Meia - Entrada - R$ 25.00\n");
				printf("\t Entrada [3]: Gratuidade \n");
				printf("\t Entrada [4]: Rede Publica \n");
				printf("\tComprar bilhete para qual sessao ? \n\n");
				printf(" | ");
				printf("%c----------------------------------------------------------------------------%c\n\n", 200, 188);
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
			printf("\t Divirta - se!\n");
			system ("pause");
		} else {
			system("cls");
			printf("%c----------------------------------------------------------------------------%c\n", 201, 187);
			printf(" | ");
			printf("\t 	QUATIDADE NAO DISPONIVEL : \n");
			printf(" | ");
			printf("%c----------------------------------------------------------------------------%c\n\n", 200, 188);
			system ("pause");
		}
	}
}

// Escolhendo a opcao 2
void EscolhaDois(){
	
	int escolha, opcao , quantidade = 0;
	
	system("cls");
	printf("%c----------------------------------------------------------------------------%c\n", 201, 187);
	printf(" | ");
	printf("\t ESCOLHA UMA DAS OPCOES: \n");
	printf("\t-----------------------------------------------\n");
	printf("\t Cine 2: Mulheres de Shakespeare\n");
	printf("\t Sessao [1]: 13:30 \n");
	printf("\t Sessao [2]: 15:30 \n");
	printf("\t Sessao [3]: 17:30 \n");
	printf("\tComprar bilhete para qual sessao? \n\n");
	printf(" | ");
	printf("%c----------------------------------------------------------------------------%c\n\n", 200, 188);
	printf("Opcao: ");
	scanf("%d", &escolha);
	system("cls");
	
	if(escolha == 1){
		system("cls");
		printf("%c----------------------------------------------------------------------------%c\n", 201, 187);
		printf(" | ");
		printf("\t ESCOLHA UMA DAS OPCOES: \n");
		printf("\t-----------------------------------------------\n");
		printf("\t Escolha: Mulheres de Shakespeare, Sessao as 13:30\n");
		printf("\t Quantidade de Ingressos? \n\n");
		printf(" | ");
		printf("%c----------------------------------------------------------------------------%c\n\n", 200, 188);
		printf("Opcao: ");
		scanf("%d", &quantidade);
		
		if(quantidade <= qdeingressosPecaDois){

			qdeingressosPecaDois -= quantidade;
		
			for(int i = 0 ; i < quantidade; i++){
				system("cls");
				printf("%c----------------------------------------------------------------------------%c\n", 201, 187);
				printf(" | ");
				printf("\t ESCOLHA UMA DAS OPCOES: \n");
				printf("\t-----------------------------------------------\n");
				printf("\t Entrada [1]: Inteira -  R$ 50.00\n");
				printf("\t Entrada [2]: Meia - Entrada - R$ 25.00\n");
				printf("\t Entrada [3]: Gratuidade \n");
				printf("\t Entrada [4]: Rede Publica \n");
				printf("\tComprar bilhete para qual sessao? \n\n");
				printf(" | ");
				printf("%c----------------------------------------------------------------------------%c\n\n", 200, 188);
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
			printf("\t Voce Adquiriu %d ingressos, para Mulheres de Shakespeare, Sessao as 13:30\n",quantidade);
			printf("\t Divirta - se!\n");
			system ("pause");
		} else {
			system("cls");
			printf("%c----------------------------------------------------------------------------%c\n", 201, 187);
			printf(" | ");
			printf("\t 	QUATIDADE NAO DISPONIVEL : \n");
			printf(" | ");
			printf("%c----------------------------------------------------------------------------%c\n\n", 200, 188);
			system ("pause");
		}
	}
	else if(escolha == 2){
		system("cls");
		printf("%c----------------------------------------------------------------------------%c\n", 201, 187);
		printf(" | ");
		printf("\t ESCOLHA UMA DAS OPCOES: \n");
		printf("\t-----------------------------------------------\n");
		printf("\t Escolha: Mulheres de Shakespeare, Sessao as 15:30\n");
		printf("\t Quantidade de Ingressos? \n\n");
		printf(" | ");
		printf("%c----------------------------------------------------------------------------%c\n\n", 200, 188);
		printf("Opcao: ");
		scanf("%d", &quantidade);
		
		if(quantidade <= qdeingressosPecaDois){

			qdeingressosPecaDois -= quantidade;
		
			for(int i = 0 ; i < quantidade; i++){
				system("cls");
				printf("%c----------------------------------------------------------------------------%c\n", 201, 187);
				printf(" | ");
				printf("\t ESCOLHA UMA DAS OPCOES: \n");
				printf("\t-----------------------------------------------\n");
				printf("\t Entrada [1]: Inteira -  R$ 50.00\n");
				printf("\t Entrada [2]: Meia - Entrada - R$ 25.00\n");
				printf("\t Entrada [3]: Gratuidade \n");
				printf("\t Entrada [4]: Rede Publica \n");
				printf("\tComprar bilhete para qual sessao? \n\n");
				printf(" | ");
				printf("%c----------------------------------------------------------------------------%c\n\n", 200, 188);
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
			printf("\t Voce Adquiriu %d ingressos, para Mulheres de Shakespeare, Sessao as 15:30\n",quantidade);
			printf("\t Divirta - se!\n");
			system ("pause");
		} else {
			system("cls");
			printf("%c----------------------------------------------------------------------------%c\n", 201, 187);
			printf(" | ");
			printf("\t 	QUATIDADE NAO DISPONIVEL : \n");
			printf(" | ");
			printf("%c----------------------------------------------------------------------------%c\n\n", 200, 188);
			system ("pause");
		}
	}
	else if(escolha == 3){
			system("cls");
		printf("%c----------------------------------------------------------------------------%c\n", 201, 187);
		printf(" | ");
		printf("\t ESCOLHA UMA DAS OPCOES: \n");
		printf("\t-----------------------------------------------\n");
		printf("\t Escolha: Mulheres de Shakespeare, Sessao as 17:30\n");
		printf("\t Quantidade de Ingressos? \n\n");
		printf(" | ");
		printf("%c----------------------------------------------------------------------------%c\n\n", 200, 188);
		printf("Opcao: ");
		scanf("%d", &quantidade);
		
		if(quantidade <= qdeingressosPecaDois){

			qdeingressosPecaDois -= quantidade;
		
			for(int i = 0 ; i < quantidade; i++){
				system("cls");
				printf("%c----------------------------------------------------------------------------%c\n", 201, 187);
				printf(" | ");
				printf("\t ESCOLHA UMA DAS OPCOES: \n");
				printf("\t-----------------------------------------------\n");
				printf("\t Entrada [1]: Inteira -  R$ 50.00\n");
				printf("\t Entrada [2]: Meia - Entrada - R$ 25.00\n");
				printf("\t Entrada [3]: Gratuidade \n");
				printf("\t Entrada [4]: Rede Publica \n");
				printf("\tComprar bilhete para qual sessao? \n\n");
				printf(" | ");
				printf("%c----------------------------------------------------------------------------%c\n\n", 200, 188);
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
			printf("\t Divirta - se!\n");
			system ("pause");
		} else {
			system("cls");
			printf("%c----------------------------------------------------------------------------%c\n", 201, 187);
			printf(" | ");
			printf("\t 	QUATIDADE NAO DISPONIVEL : \n");
			printf(" | ");
			printf("%c----------------------------------------------------------------------------%c\n\n", 200, 188);
			system ("pause");
		}
	}
}
// Escolhendo a opcao 3
void EscolhaTres(){
	
	int escolha, opcao , quantidade = 0;
	
	system("cls");
	printf("%c----------------------------------------------------------------------------%c\n", 201, 187);
	printf(" | ");
	printf("\t ESCOLHA UMA DAS OPCOES: \n");
	printf("\t-----------------------------------------------\n");
	printf("\t Cine 3: Caros Ouvintes\n");
	printf("\t Sessao [1]: 13:30 \n");
	printf("\t Sessao [2]: 15:30 \n");
	printf("\t Sessao [3]: 17:30 \n");
	printf("\tComprar bilhete para qual sessao? \n\n");
	printf(" | ");
	printf("%c----------------------------------------------------------------------------%c\n\n", 200, 188);
	printf("Opcao: ");
	scanf("%d", &escolha);
	system("cls");
	
	if(escolha == 1){
		system("cls");
		printf("%c----------------------------------------------------------------------------%c\n", 201, 187);
		printf(" | ");
		printf("\t ESCOLHA UMA DAS OPCOES: \n");
		printf("\t-----------------------------------------------\n");
		printf("\t Escolha: Caros Ouvintes, sessao as 13:30\n");
		printf("\t Quantidade de Ingressos? \n\n");
		printf(" | ");
		printf("%c----------------------------------------------------------------------------%c\n\n", 200, 188);
		printf("Opcao: ");
		scanf("%d", &quantidade);
		
		if(quantidade <= qdeingressosPecaTres){

			qdeingressosPecaTres -= quantidade;
		
			for(int i = 0 ; i < quantidade; i++){
				system("cls");
				printf("%c----------------------------------------------------------------------------%c\n", 201, 187);
				printf(" | ");
				printf("\t ESCOLHA UMA DAS OPCOES: \n");
				printf("\t-----------------------------------------------\n");
				printf("\t Entrada [1]: Inteira -  R$ 50.00\n");
				printf("\t Entrada [2]: Meia - Entrada - R$ 25.00\n");
				printf("\t Entrada [3]: Gratuidade \n");
				printf("\t Entrada [4]: Rede Publica \n");
				printf("\tComprar bilhete para qual sessao? \n\n");
				printf(" | ");
				printf("%c----------------------------------------------------------------------------%c\n\n", 200, 188);
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
			printf("\t Voce Adquiriu %d ingressos, para Caros Ouvintes, Sessao as 13:30\n",quantidade);
			printf("\t Divirta - se!\n");
			system ("pause");
		} else {
			system("cls");
			printf("%c----------------------------------------------------------------------------%c\n", 201, 187);
			printf(" | ");
			printf("\t 	QUATIDADE NAO DISPONIVEL : \n");
			printf(" | ");
			printf("%c----------------------------------------------------------------------------%c\n\n", 200, 188);
			system ("pause");
		}
	}
	else if(escolha == 2){
		system("cls");
		printf("%c----------------------------------------------------------------------------%c\n", 201, 187);
		printf(" | ");
		printf("\t ESCOLHA UMA DAS OPCOES: \n");
		printf("\t-----------------------------------------------\n");
		printf("\t Escolha: Caros Ouvintes, sessao as 15:30\n");
		printf("\t Quantidade de Ingressos? \n\n");
		printf(" | ");
		printf("%c----------------------------------------------------------------------------%c\n\n", 200, 188);
		printf("Opcao: ");
		scanf("%d", &quantidade);
		
		if(quantidade <= qdeingressosPecaTres){

			qdeingressosPecaTres -= quantidade;
		
			for(int i = 0 ; i < quantidade; i++){
				system("cls");
				printf("%c----------------------------------------------------------------------------%c\n", 201, 187);
				printf(" | ");
				printf("\t ESCOLHA UMA DAS OPCOES: \n");
				printf("\t-----------------------------------------------\n");
				printf("\t Entrada [1]: Inteira -  R$ 50.00\n");
				printf("\t Entrada [2]: Meia - Entrada - R$ 25.00\n");
				printf("\t Entrada [3]: Gratuidade \n");
				printf("\t Entrada [4]: Rede Publica \n");
				printf("\tComprar bilhete para qual sessao? \n\n");
				printf(" | ");
				printf("%c----------------------------------------------------------------------------%c\n\n", 200, 188);
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
			printf("\t Voce Adquiriu %d ingressos, para Caros Ouvintes, Sessao as 15:30\n",quantidade);
			printf("\t Divirta - se!\n");
			system ("pause");
		} else {
			system("cls");
			printf("%c----------------------------------------------------------------------------%c\n", 201, 187);
			printf(" | ");
			printf("\t 	QUATIDADE NAO DISPONIVEL : \n");
			printf(" | ");
			printf("%c----------------------------------------------------------------------------%c\n\n", 200, 188);
			system ("pause");
		}
	}
	else if(escolha == 3){
			system("cls");
		printf("%c----------------------------------------------------------------------------%c\n", 201, 187);
		printf(" | ");
		printf("\t ESCOLHA UMA DAS OPCOES: \n");
		printf("\t-----------------------------------------------\n");
		printf("\t Escolha: Caros Ouvintes, sessao as 17:30\n");
		printf("\t Quantidade de Ingressos? \n\n");
		printf(" | ");
		printf("%c----------------------------------------------------------------------------%c\n\n", 200, 188);
		printf("Opcao: ");
		scanf("%d", &quantidade);
		
		if(quantidade <= qdeingressosPecaTres){

			qdeingressosPecaTres -= quantidade;
		
			for(int i = 0 ; i < quantidade; i++){
				system("cls");
				printf("%c----------------------------------------------------------------------------%c\n", 201, 187);
				printf(" | ");
				printf("\t ESCOLHA UMA DAS OPCOES: \n");
				printf("\t-----------------------------------------------\n");
				printf("\t Entrada [1]: Inteira -  R$ 50.00\n");
				printf("\t Entrada [2]: Meia - Entrada - R$ 25.00\n");
				printf("\t Entrada [3]: Gratuidade \n");
				printf("\t Entrada [4]: Rede Publica \n");
				printf("\tComprar bilhete para qual sessao? \n\n");
				printf(" | ");
				printf("%c----------------------------------------------------------------------------%c\n\n", 200, 188);
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
				}else{
					printf("\t OPCAO INVALIDA DIGITE ENTRE 1 E 4 \n");	
					i--;
					system ("pause");
				}
			}
			printf("\t Voce Adquiriu %d ingressos, para Caros Ouvintes, Sessao as 17:30\n",quantidade);
			printf("\t Divirta - se!\n");
		    printf("\n");
			system ("pause");
		} else {
			system("cls");
			printf("%c-------------------s---------------------------------------------------------%c\n", 201, 187);
			printf(" | ");
			printf("\t 	QUATIDADE NAO DISPONIVEL : \n");
			printf(" | ");
			printf("%c----------------------------------------------------------------------------%c\n\n", 200, 188);
			system ("pause");
		}
	}
}


