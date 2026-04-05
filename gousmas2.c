#include <stdio.h>
#include <stdlib.h>

void status(int furiaj1, int furiaj2, int furiai1,int furiai2){

int i;	
	
printf("=====================================\n");
printf("          GOUSMAS WAR\n");
printf("=====================================\n\n");

printf("Jogador 1\n");
printf("\nGousma 1\n");
printf("Furia: ");
for(i=0; i < furiaj1; i++){
	printf("o ");
}
printf("\n\nGousma 2\n");
printf("Furia: ");
for(i=0; i < furiaj2; i++){
	printf("o ");
}

printf("\n\n\nJogador 2\n");

printf("\nGousma 1\n");
printf("Furia: ");
for(i=0; i < furiai1; i++){
	printf("o ");
}

printf("\n\nGousma 2\n");
printf("Furia: ");
for(i=0; i < furiai2; i++){
	printf("o ");
}
}

int main() {
	int furiaj1=1, furiaj2=1, furiai1=1, furiai2=1;
	int vez=0;
	int acao,atacar,slime;
	char jog1[] = "Jogador 1", jog2[] = "Jogador 2";
	status(furiaj1,furiaj2,furiai1,furiai2);
	
	while(vez==0) {
		printf("\n\n-------------------------------------\n");
		printf("Turno de: %s\n", jog1);
		printf("-------------------------------------\n");
		
		printf("Escolha uma acao:\n");
		printf("[1] Atacar\n");
	   	printf("[2] Dividir\n");
	   	scanf("%d",&acao);
	   	
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
				
					if(slime==1);
					system("cls");
					furiai1 = furiai1 + furiaj1;
					status(furiaj1,furiaj2,furiai1,furiai2);  
			   }
		   }
		vez++;
	}
	
	
	
}