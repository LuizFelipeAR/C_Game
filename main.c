#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	system("color 3");
	int esc;
	
	printf(" GCPLAY\n\n");
	
	printf(" 1: Pergunta e Resposta\n");
	printf(" 2: Cobra na Caixa!\n");
	printf(" 3: Gousmas War\n");
	printf(" 4: Sair\n\n");
	
	scanf("%d",&esc);
	
	
	if (esc == 1){
	
		system("cls");
		printf("\t\t Pergunta e Resposta");
	
	}
	
	if (esc == 2){
	
		system("cls");
		printf("\t\t Cobra na Caixa!");
	
	}

	if (esc == 3){
	
		system("cls");
		printf("\t\t Gousmas War");
	
	}

	if (esc == 4){
	
		exit(EXIT_SUCCESS);
	}	
	
	
	
	
	
	
	return 0;
}