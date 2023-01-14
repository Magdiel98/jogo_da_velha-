#include <stdio.h>
#include <locale.h>
#include <locale.h>
#include <time.h>
#include <Windows.h>
int main(){
	
	
	setlocale(LC_ALL, "Portuguese");
	
	int opc = 0, e = 0, i = 0, j = 0, x = 0, y = 0; //e --> repetição do sleep e ponto; i e j--> imprimir a matriz; 
	
	int cont = 0; //Contador para mostrar jogador 1 e 2; 
	
	int esc = 0; //Escolha para jogar novamente; 
	
	int x_l = 0, x_c = 0, x_v = 0, x_dp = 0, x_ds = 0; //Verificação do 'X'
	int o_l = 0, o_c = 0, o_v = 0, o_dp = 0, o_ds = 0; //Verificação do 'O'
	
	int tl = 0, tc = 2; 
	
	char jog1, jog2, pc; 
	
	char mat[3][3];
	
	
	//Parte Inicial do Jogo 
    do{
    	system("cls");
    	Sleep(500);
		printf("---"); 
		Sleep(500);
		printf("JOGO DA VELHA");
		Sleep(500);
		printf("---\n\n");
		Sleep(500);
		printf("1 - Jogar Com Outro Jogador\n2 - Jogar Com O Computador\nOpção: ");
		scanf("%d", &opc);
		
		
		system("cls");
		while(opc != 1 && opc != 2){
			printf("---JOGO DA VELHA---\n\n");
			printf("Opção Inválida!\n\n");
			printf("1 - Jogar Com Outro Jogador\n2 - Jogar Com O Computador\nOpção: ");
			scanf("%d", &opc);
			system("cls");
		}
		
		
		if(opc == 1){
			printf("---JOGO DA VELHA---\n\n");	
			printf("Escolha \"X\" ou \"O\"\n");
			printf("Jogador 1: ");
			scanf(" %c", &jog1);
			system("cls");
			
			while(jog1 != 'x' && jog1 != 'X' && jog1 != 'o' && jog1 != 'O'){
				printf("---JOGO DA VELHA---\n\n");	
				printf("Opção Inválida!\n\n");
				printf("Escolha \"X\" ou \"O\"\n");
				printf("Jogador 1: ");
				scanf(" %c", &jog1);
				system("cls");
	
			}
			
			if(jog1 == 'x' || jog1 == 'X'){
				jog1 = 'X'; 
				jog2 = 'O';
				printf("---JOGO DA VELHA---\n\n");
				printf("Jogador 1: X\n");
				printf("Jogador 2: O");
				
				Sleep(500);
				printf("\n\nInicializando");
				Sleep(500);
				printf(".");
				Sleep(500);
				printf(".");
				Sleep(500);
				printf(".");
				Sleep(500); 
				printf(".");
				
			}
			if(jog1 == 'o' || jog1 == 'O'){
				jog1 = 'O';
				jog2 = 'X'; 
				printf("---JOGO DA VELHA---\n\n");
				printf("Jogador 1: O\n");
				printf("Jogador 2: X");
				
				Sleep(500);
				printf("\n\nInicializando");
				Sleep(500);
				printf(".");
				Sleep(500);
				printf(".");
				Sleep(500);
				printf(".");
				Sleep(500); 
				printf(".");
				
			}
		}
		else if(opc == 2){
			printf("---JOGO DA VELHA---\n\n");	
			printf("Escolha \"X\" ou \"O\"\n");
			printf("Jogador 1: ");
			scanf(" %c", &jog1);
			system("cls");
			
			while(jog1 != 'x' && jog1 != 'X' && jog1 != 'o' && jog1 != 'O'){
				printf("---JOGO DA VELHA---\n\n");	
				printf("Opção Inválida!\n\n");
				printf("Escolha \"X\" ou \"O\"\n");
				printf("Jogador 1: ");
				scanf(" %c", &jog1);
				system("cls");
	
			}
			
			if(jog1 == 'x' || jog1 == 'X'){
				jog1 = 'X'; 
				pc = 'O';
				printf("---JOGO DA VELHA---\n\n");
				printf("Jogador 1: X\n");
				printf("Computador: O");
				
				Sleep(500);
				printf("\n\nInicializando");
				for(e = 0; e <= 3; e++){
					Sleep(500);
					printf(".");
				
				}
			}
			if(jog1 == 'o' || jog1 == 'O'){
				jog1 = 'O';
				pc = 'X'; 
				printf("---JOGO DA VELHA---\n\n");
				printf("Jogador 1: O\n");
				printf("Computador: X");
				
				Sleep(500);
				printf("\n\nInicializando");
				for(e = 0; e <= 3; e++){
					Sleep(500);
					printf(".");
				}
			}
		 
		}
		
		
		cont = 0;
		
		//Parte Central do Jogo
		
	 if(opc == 1){
		do{	//Loop a partir daqui
			system("cls"); 
			
			
			//Para imprimir a estrutura do Jogo: 
			
			
			printf("    0     1     2\n");
			for(i = 0; i < 3; i++){
				printf("%d ", i);
				for(j = 0; j < 3; j++){
					if(i < 2 && j < 3){
						if(mat[i][j] == 'X' || mat[i][j] == 'O')
							printf("__%c__", mat[i][j]);
						else
							printf("_____");
					}
					else{
						if(mat[i][j] == 'X' || mat[i][j] == 'O')
							printf("  %c  ", mat[i][j]);
						else
							printf("     ");
					}
					if(i < 3 && j < 2){
						printf("|");
					}
				}
				printf("\n");
			}
			
			//Pedir para os usuários digitaram a linha e coluna: 
			if(cont % 2 == 0){
				printf("\n--Jogador 1\n");
			
				printf("\nLinha: ");
				scanf("%d", &x);
			
				while(x != 0 && x != 1 && x != 2){
					printf("\nValor Inválido!\n");
					printf("Linha: ");
					scanf("%d", &x);
				}
				printf("\nColuna: ");
				scanf("%d", &y);
				while(y != 0 && y != 1 && y != 2){
					printf("\nValor Inválido!\n");
					printf("Coluna: ");
					scanf("%d", &y);
				}
				
				while(mat[x][y] == jog2 || mat[x][y] == jog1){
					printf("\nPosição Já Preenchida!\n");
					
					printf("\nLinha: ");
					scanf("%d", &x);
					while(x != 0 && x != 1 && x != 2){
						printf("\nValor Inválido!\n");
						printf("Linha: ");
						scanf("%d", &x);
					}
					printf("\nColuna: ");
					scanf("%d", &y);
					while(y != 0 && y != 1 && y != 2){
						printf("\nValor Inválido!\n");
						printf("Coluna: ");
						scanf("%d", &y);
					}
					
				}
				
				mat[x][y] = jog1;
		
			}
			else{
				printf("\n--Jogador 2\n");
			
				printf("\nLinha: ");
				scanf("%d", &x);
				while(x != 0 && x != 1 && x != 2){
					printf("\nValor Inválido!\n");
					printf("Linha: ");
					scanf("%d", &x);
				}
				printf("\nColuna: ");
				scanf("%d", &y);
				while(y != 0 && y != 1 && y != 2){
					printf("\nValor Inválido!\n");
					printf("Coluna: ");
					scanf("%d", &y);
				}
				
				while(mat[x][y] == jog1 || mat[x][y] == jog2){
					printf("\nPosição Já Preenchida!\n");
					
					printf("\nLinha: ");
					scanf("%d", &x);
					while(x != 0 && x != 1 && x != 2){
						printf("\nValor Inválido!\n");
						printf("Linha: ");
						scanf("%d", &x);
					}
					printf("\nColuna: ");
					scanf("%d", &y);
					while(y != 0 && y != 1 && y != 2){
						printf("\nValor Inválido!\n");
						printf("Coluna: ");
						scanf("%d", &y);
					}
					
				}
				
				mat[x][y] = jog2;
			}
		
			
			//Fazer loop a partir (system("cls")) da impressão do jogo até else do jogador 2. Use Do While. A condição de parada será quando verificada as linhas, colunas e diagonais tiver todas por x ou o em primeiramente 
			
			//Verificação de sequência de 'x' ou 'o': 
			
			x_l = 0, x_c = 0, x_v = 0, x_dp = 0, x_ds = 0;
			o_l = 0, o_c = 0, o_v = 0, o_dp = 0, o_ds = 0;
						
					for(i = 0; i < 3; i++){
						for(j = 0; j < 3; j++){
							
							if(mat[i][j] == 'X'){
								x_l += 1;
							}	
							if(mat[j][i] == 'X'){
								x_c += 1;
							}
							
							if(mat[i][j] == 'O'){
								o_l += 1;
							}	
							if(mat[j][i] == 'O'){
								o_c += 1;
							}
							
						}
						printf("\n");
						if(x_l == 3 || x_c == 3){
							x_v = 1; 
							break;
						}
						
						if(o_l == 3 || o_c == 3){
							o_v = 1;
							break;  
						}
						
						x_l = 0, x_c = 0; //linha e coluna de x. 
						o_l = 0, o_c = 0; //Linha e coluna de o.
					}
				
				
				
					//Verificação das diagonais 
					if(x_v == 0 && o_v == 0){
						tl = 0, tc = 2; 
						for(i = 0; i < 3; i++){
							for(j = 0; j < 3; j++){
								
								//Diagonal Principal 
								if(i == j && mat[i][j] == 'X'){
									x_dp += 1;
								}
								
								if(i == j && mat[i][j] == 'O'){
									o_dp += 1;
								}
								
								//Diagonal Secundária 
								if(i == tl && j == tc) {
									if(mat[i][j] == 'X'){
										x_ds += 1;	
									}
									else if(mat[i][j] == 'O'){
										o_ds += 1;  
									}
									
									tl += 1;
									tc -= 1; 
								}
								
								//printf("x_ds = %d  o_ds = %d", x_ds, o_ds);	
								//system("pause");		
							}
							
							if(x_dp == 3 || x_ds == 3){
								x_v = 1; 
								break; 
							}
							
							if(o_dp == 3 || o_ds == 3){
								o_v = 1; 
								break; 
							}
								
						}
						
					}
			
			
			
			
			cont += 1; //Serve para que o outro jogador jogue 
			
			//Enquanto x != 1 && o != 1 && cont != 9 
	
		
		}while(o_v != 1 && x_v != 1 && cont < 9);
	 }
	 else if(opc == 2){	
	  	printf("\nParte Central - Jogar Com Computador Precisa Ser Construído\n"); 
	  	system("pause");
	 }
		system("cls");
		
		printf("    0     1     2\n");
			for(i = 0; i < 3; i++){
				printf("%d ", i);
				for(j = 0; j < 3; j++){
					if(i < 2 && j < 3){
						if(mat[i][j] == 'X' || mat[i][j] == 'O')
							printf("__%c__", mat[i][j]);
						else
							printf("_____");
					}
					else{
						if(mat[i][j] == 'X' || mat[i][j] == 'O')
							printf("  %c  ", mat[i][j]);
						else
							printf("     ");
					}
					if(i < 3 && j < 2){
						printf("|");
					}
				}
				printf("\n");
			}
		
		 if(opc == 1){
			if(o_v == 1 && jog1 == 'O'){
				Sleep(500);
				printf("\n\nVencedor: Jogador 1");
			}
			else if(x_v == 1 && jog1 == 'X'){
				Sleep(500);
				printf("\n\nVencedor: Jogador 1");
			}
			else if(o_v == 1 && jog2 == 'O'){
				Sleep(500);
				printf("\n\nVencedor: Jogador 2");
			}
			else if(x_v == 1 && jog2 == 'X'){
				Sleep(500);
				printf("\n\nVencedor: Jogador 2");
			}
			else{
				Sleep(500);
				printf("\n\nEmpate");
			}
		 }//Quando for escolhido jogar com outro jogador. Precisa fazer outro para computador 
		 else if(opc == 2){
		 	printf("\nO Resultado do Jogo com Computador Precisa Ser Construído\n");
		 	system("pause");
		 }	
			Sleep(500);
			printf("\n\n\nJogar Novamente?\n1 - Sim\n2 - Não\n\nOpção: ");
			scanf("%d", &esc);
			
			while(esc != 1 && esc != 2){
				printf("\n\nOpção Inválida!");
				printf("\nJogar Novamente?\n1 - Sim\n2 - Não\n\nOpção: ");
				scanf("%d", &esc);
			}
    }while(esc == 1);

    	Sleep(500);
		printf("\n\nFinalizando");
		Sleep(500);
		printf(" Jogo");
		for(e = 0; e <= 3; e++){
		     Sleep(500);
			 printf(".");
    	}
    
	return 0;
}

