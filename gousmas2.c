#include <stdio.h>
#include <stdlib.h>

//aqui comeca a funcao void
void status(int furiaj1, int furiaj2, int furiai1,int furiai2){

int i;	
	
printf("=====================================\n");
printf("          GOUSMAS WAR\n");
printf("=====================================\n\n");

printf("Jogador 1\n");
printf("\nGousma 1\n");
	printf("Furia: ");//laco pra printar as furias do jogador 1 na gousma 1
	for(i=0; i < furiaj1; i++){
		printf("o ");
	}
	
printf("\n\nGousma 2\n");
	printf("Furia: ");//laco pra printar as furias do jogador 1 na gousma 2
	for(i=0; i < furiaj2; i++){
		printf("o ");
	}

printf("\n\n\nJogador 2\n");
printf("\nGousma 1\n");
	printf("Furia: ");//laco pra printar as furias do jogador 2 na gousma 1
	for(i=0; i < furiai1; i++){
		printf("o ");
	}

printf("\n\nGousma 2\n");
	printf("Furia: ");//laco pra printar as furias do jogador 2 na gousma 2
	for(i=0; i < furiai2; i++){
		printf("o ");
	}
}
//aqui termina a funcao void



int main() {
	int furiaj1=1, furiaj2=1, furiai1=1, furiai2=1;
	int vez=0, ciclo=1;
	int acao,atacar,slime,dividir;
	char jog1[] = "Jogador 1", jog2[] = "Jogador 2";
	status(furiaj1,furiaj2,furiai1,furiai2);


//laco caso o turno seja do jogador 1
	while(ciclo==1){
		if(furiaj1==0 && furiaj2==0){
			printf("\n\n%s VENCEU\n\n",jog2);
			break;
		}
		
		if(furiai1==0 && furiai2==0) {
			printf("\n\n%s VENCEU\n\n",jog1);
			 break;
		}
		
			
		while(vez==0) {
			printf("\n\n-------------------------------------\n");
			printf("Turno de: %s\n", jog1);
			printf("-------------------------------------\n");
			
			printf("Escolha uma acao:\n");
			printf("[1] Atacar\n");
		   	printf("[2] Dividir\n");
		   	scanf("%d",&acao);
		   	
		   	while(acao!=1 && acao !=2){
		   			while(getchar() != '\n');
					scanf("%d", &acao);
				}
		   	
		   	//laco de acao do jogador 1
		   	if (acao == 1){
				
				   system("cls");
				   status(furiaj1,furiaj2,furiai1,furiai2);
				   printf("\n\n-------------------------------------\n");
				   printf("Turno de: %s\n", jog1);
				   printf("-------------------------------------\n");
				   
				   printf("Qual Gousma do %s voce deseja atacar?\n", jog2);
				   printf("[1] Gousma 1\n");
				   printf("[2] Gousma 2\n");
				   scanf("%d", &atacar);
				   
				   while(atacar!=1 && atacar !=2){
				   	while(getchar() != '\n');
					scanf("%d", &atacar);
				}
				
					//escolha de ataque na gousma 1 do jogador 2 (ataque realizado pelo jogador 1)
				   if(atacar==1) {
				   	system("cls");
				   	status(furiaj1,furiaj2,furiai1,furiai2);
					printf("\n\n-------------------------------------\n");
					printf("Turno de: %s\n", jog1);
					printf("-------------------------------------\n");
					
					
					printf("Com qual Gousma sua voce deseja utilizar para atacar?\n");
					printf("[1] Gousma 1\n");
					printf("[2] Gousma 2\n");
					scanf("%d", &slime);
					
					while(slime!=1 && slime !=2){
						while(getchar() != '\n');
						scanf("%d", &slime);
				}
					
						if(slime==1) {
						system("cls");
						furiai1 = furiai1 + furiaj1;
							if(furiai1>5){
								furiai1=0;
							}
						status(furiaj1,furiaj2,furiai1,furiai2);  
						}			  
						
						else if(slime==2) {
						system("cls");
						furiai1 = furiai1 + furiaj2;
							if(furiai1>5) {
								furiai1=0;
							}
						status(furiaj1,furiaj2,furiai1,furiai2);  
						}
									  
						
				   }
				   
				   	//escolha de ataque na gousma 2 do jogador 2 (ataque realizado pelo jogador 1)
				   else if(atacar==2) {
				   	system("cls");
				   	status(furiaj1,furiaj2,furiai1,furiai2);
					printf("\n\n-------------------------------------\n");
					printf("Turno de: %s\n", jog1);
					printf("-------------------------------------\n");
					
					
					printf("Com qual Gousma sua voce deseja utilizar para atacar?\n");
					printf("[1] Gousma 1\n");
					printf("[2] Gousma 2\n");
					scanf("%d", &slime);
					
					while(slime!=1 && slime !=2){
						while(getchar() != '\n');
						scanf("%d", &slime);
				}
					
						if(slime==1) {
						system("cls");
						furiai2 = furiai2 + furiaj1;
							if(furiai2>5) {
								furiai2=0;
							}
						status(furiaj1,furiaj2,furiai1,furiai2);  
						}
						
						else if(slime==2) {
						system("cls");
						furiai2 = furiai2 + furiaj2;
							if(furiai2>5) {
								furiai2=0;
							}
						status(furiaj1,furiaj2,furiai1,furiai2);  
						}	
						
				   }
			
			   }
			else if (acao == 2){
				system("cls");
				status(furiaj1,furiaj2,furiai1,furiai2);
				printf("\n\n-------------------------------------\n");
				printf("Turno de: %s\n", jog1);
				printf("-------------------------------------\n");
				
				
				printf("Qual Gousma voce deseja dividr?\n");
				printf("[1] Gousma 1\n");
				printf("[2] Gousma 2\n");	
				scanf("%d", &slime);
				
				while(slime!=1 && slime !=2){
					while(getchar() != '\n');
					scanf("%d", &slime);
				}
				
				if(slime==1) {
					if(furiaj1 == 0) {
    				printf("Essa gousma nao possui furia! Tente novamente.\n");
    				continue; // volta pro menu do turno
					}
					system("cls");
					status(furiaj1,furiaj2,furiai1,furiai2);
					printf("\n\n-------------------------------------\n");
					printf("Turno de: %s\n", jog1);
					printf("-------------------------------------\n");	
					
					printf("Quando de Furia voce deseja passar?\n");
					scanf("%d", &dividir);
					
					while(dividir > furiaj1 || furiaj2 + dividir > 5 || dividir <= 0) {
						printf("Valor invalido! Tente Novamente\n");
						printf("Quando de Furia voce deseja passar?\n");
						while(getchar() != '\n');
						scanf("%d", &dividir);
					}
					if(dividir < 6) {
						system("cls");
						furiaj2 = furiaj2 + dividir;
						furiaj1 = furiaj1 - dividir;
						status(furiaj1,furiaj2,furiai1,furiai2);
						
					}			
				}
				
				else if(slime==2) {
					if(furiaj2 == 0) {
    				printf("Essa gousma nao possui furia! Tente novamente.\n");
    				continue; // volta pro menu do turno
					}
					system("cls");
					status(furiaj1,furiaj2,furiai1,furiai2);
					printf("\n\n-------------------------------------\n");
					printf("Turno de: %s\n", jog1);
					printf("-------------------------------------\n");
					
					printf("Quando de Furia voce deseja passar?\n");
					scanf("%d", &dividir);
					
					while(dividir > furiaj2 || furiaj1 + dividir > 5 || dividir <= 0) {
						printf("Valor invalido! Tente Novamente\n");
						printf("Quando de Furia voce deseja passar?\n");
						while(getchar() != '\n');
						scanf("%d", &dividir);
					}
					if(dividir < 6) {
						system("cls");
						furiaj1 = furiaj1 + dividir;
						furiaj2 = furiaj2 - dividir;
						status(furiaj1,furiaj2,furiai1,furiai2);
						
					}
				}		
			}
			vez++; // dentro do laco "while(vez==0)"
		}
		
		
		
		
		
		
		
		while(vez==1){
			printf("\n\n-------------------------------------\n");
			printf("Turno de: %s\n", jog2);
			printf("-------------------------------------\n");
			
			printf("Escolha uma acao:\n");
			printf("[1] Atacar\n");
		   	printf("[2] Dividir\n");
		   	scanf("%d",&acao);
		   	
		   	while(acao!=1 && acao !=2){
		   		while(getchar() != '\n');
					scanf("%d", &acao);
				}
		   	
		   	//laco de acao do jogador 1
		   	if (acao == 1){
				
				   system("cls");
				   status(furiaj1,furiaj2,furiai1,furiai2);
				   printf("\n\n-------------------------------------\n");
				   printf("Turno de: %s\n", jog2);
				   printf("-------------------------------------\n");
				   
				   printf("Qual Gousma do %s voce deseja atacar?\n", jog1);
				   printf("[1] Gousma 1\n");
				   printf("[2] Gousma 2\n");
				   scanf("%d", &atacar);
				   
				   while(atacar!=1 && atacar !=2){
				   	while(getchar() != '\n');
					scanf("%d", &atacar);
				}
				
					//escolha de ataque na gousma 1 do jogador 2 (ataque realizado pelo jogador 1)
				   if(atacar==1) {
				   	system("cls");
				   	status(furiaj1,furiaj2,furiai1,furiai2);
					printf("\n\n-------------------------------------\n");
					printf("Turno de: %s\n", jog2);
					printf("-------------------------------------\n");
					
					
					printf("Com qual Gousma sua voce deseja utilizar para atacar?\n");
					printf("[1] Gousma 1\n");
					printf("[2] Gousma 2\n");
					scanf("%d", &slime);
					
					while(slime!=1 && slime !=2){
						while(getchar() != '\n');
						scanf("%d", &slime);
				}
					
						if(slime==1) {
						system("cls");
						furiaj1 = furiaj1 + furiai1;
							if (furiaj1>5) {
								furiaj1=0;
							}
						status(furiaj1,furiaj2,furiai1,furiai2);  
						}			  
						
						else if(slime==2) {
						system("cls");
						furiaj1 = furiaj1 + furiai2;
							if(furiaj1>5) {
								furiaj1=0;
							}
						status(furiaj1,furiaj2,furiai1,furiai2);  
						}
									  
						
				   }
				   
				   	//escolha de ataque na gousma 2 do jogador 2 (ataque realizado pelo jogador 1)
				   else if(atacar==2) {
				   	system("cls");
				   	status(furiaj1,furiaj2,furiai1,furiai2);
					printf("\n\n-------------------------------------\n");
					printf("Turno de: %s\n", jog2);
					printf("-------------------------------------\n");
					
					
					printf("Com qual Gousma sua voce deseja utilizar para atacar?\n");
					printf("[1] Gousma 1\n");
					printf("[2] Gousma 2\n");
					scanf("%d", &slime);
					
					while(slime!=1 && slime !=2){
						while(getchar() != '\n');
						scanf("%d", &slime);
				}
					
						if(slime==1) {
						system("cls");
						furiaj2 = furiaj2 + furiai1;
							if(furiaj2>5) {
								furiaj2=0;
							}
						status(furiaj1,furiaj2,furiai1,furiai2);  
						}
						
						else if(slime==2) {
						system("cls");
						furiaj2 = furiaj2 + furiai2;
							if(furiaj2>5) {
								furiaj2=0;
							}
						status(furiaj1,furiaj2,furiai1,furiai2);  
						}	
						
				   }
			
			   }
			else if (acao == 2){
				system("cls");
				status(furiaj1,furiaj2,furiai1,furiai2);
				printf("\n\n-------------------------------------\n");
				printf("Turno de: %s\n", jog2);
				printf("-------------------------------------\n");
				
				
				printf("Qual Gousma voce deseja dividr?\n");
				printf("[1] Gousma 1\n");
				printf("[2] Gousma 2\n");	
				scanf("%d", &slime);
				
				while(slime!=1 && slime !=2){
					while(getchar() != '\n');
					scanf("%d", &slime);
				}
				
				
				if(slime==1) {
					if(furiai1 == 0) {
    					printf("Essa gousma nao possui furia! Tente novamente.\n");
    					continue; // volta pro menu do turno
					}
					system("cls");
					status(furiaj1,furiaj2,furiai1,furiai2);
					printf("\n\n-------------------------------------\n");
					printf("Turno de: %s\n", jog2);
					printf("-------------------------------------\n");	
					
					printf("Quando de Furia voce deseja passar?\n");
					scanf("%d", &dividir);
					
					while(dividir > furiai1 || furiai2 + dividir > 5 || dividir <= 0) {
						printf("Valor invalido! Tente Novamente\n");
						printf("Quando de Furia voce deseja passar?\n");
						while(getchar() != '\n');
						scanf("%d", &dividir);
					}
					if(dividir < 6) {
						system("cls");
						furiai2 = furiai2 + dividir;
						furiai1 = furiai1 - dividir;
						status(furiaj1,furiaj2,furiai1,furiai2);
						
					}			
				}
				
				else if(slime==2) {
					if(furiai2 == 0) {
    				printf("Essa gousma nao possui furia! Tente novamente.\n");
    				continue; // volta pro menu do turno
					}
					system("cls");
					status(furiaj1,furiaj2,furiai1,furiai2);
					printf("\n\n-------------------------------------\n");
					printf("Turno de: %s\n", jog2);
					printf("-------------------------------------\n");
					
					printf("Quando de Furia voce deseja passar?\n");
					scanf("%d", &dividir);
					
					while(dividir > furiai2 || furiai1 + dividir > 5 || dividir <= 0) {
						printf("Valor invalido! Tente Novamente\n");
						printf("Quando de Furia voce deseja passar?\n");
						while(getchar() != '\n');
						scanf("%d", &dividir);
					}
					if(dividir < 6) {
						system("cls");
						furiai1 = furiai1 + dividir;
						furiai2 = furiai2 - dividir;
						status(furiaj1,furiaj2,furiai1,furiai2);
						
					}
				}		
			}
			vez--; // dentro do laco "while(vez==0)"
		}	
	
	}
}
