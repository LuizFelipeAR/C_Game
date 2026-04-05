#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	printf("\t\t Preparem-se para Jogar Gousmas War\n\n");
	
	int furiaj1=1;
	int furiaj2=5;
	int furiai1=5;
	int furiai2=5;
	
	int vez=0;
	
	int slimeatacadajg2=0;
	int furiaquantidade=0;
	
	int i,j;
	
	int atdiv;
	
	char jog1[15] = "Jogador 1";
	char jog2[15] = "Jogador 2";
	
	while(vez==0) {
		i=0;
		j=0;
		printf("Sua vez: %s\n\n", jog1);
		printf("Gousmas 1\n");
		printf("Furia: ");
		while(i<furiaj1){
			printf("o ");
			i++;
		}
		printf("\n\n");
		printf("Gousmas 2\n");
		printf("Furia: ");
		while(j<furiaj2){
			printf("o ");
			j++;
		}
		printf("\n\nO que voce deseja fazer? ");
		printf("\n(1) -----> Ataca");
		printf("\n(0) -----> Divide-se\n");
		scanf("%d",&atdiv);
		
		if(atdiv == 1) {
			i=0;
			j=0;
			system("cls");
			printf("Sua vez: %s\n", jog1);
			printf("\nQual Gousmas do seu inimigo voce deseja atacar?");
			printf("\n (1) -----> Gousmas 1 | ");
			printf("Furia: ");
			while(i<furiai1){
				printf("o ");
				i++;
			}
			printf("\n (2) -----> Gousmas 2 | ");
			printf("Furia: ");
			while(j<furiai2){
				printf("o ");
				j++;
			}
			printf("\n"); 
			scanf("%d",&slimeatacadajg2);
			
			if(slimeatacadajg2==1) {
				system("cls");
				printf("Sua vez: %s\n", jog1);
				printf("\nQuanto de furia voce deseja atacar?");
				
			}
		}
		
		vez++;
		printf("\n");
	}
	/*
	while(vez==1) {
		i=0;
		printf("Sua vez: %s\n\n", Jog2);
		printf("Slime 1\n");
		printf("Furia: ");
		while(i<furiai1){
			printf("o ");
			i++;
		}
		vez++;
	}
	*/
	return 0;
}
