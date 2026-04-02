#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	printf("\t\t Preparem-se para Jogar Gousmas War\n\n");
	
	int furiaj1=1;
	int furiaj2=1;
	int furia2=1;
	int vez=0;
	int slime=0;
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
			system("cls");
			printf("Sua vez: %s\n\n", jog1);
			printf("\nQual Gousmas do seu inimigo voce deseja atacar?");
			printf("\n (1) -----> Gousmas 1");
			printf("\n (2) -----> Gousmas 2");
			scanf("%d")
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
		while(i<furia2){
			printf("o ");
			i++;
		}
		vez++;
	}
	*/
	return 0;
}
