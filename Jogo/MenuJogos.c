#include <stdio.h>
#include <stdlib.h>


void perguntasRespostas();
void cobrasNaCaixa();
void gousmasWar();

int main(int argc, char *argv[]) {

    while(1){
	system("cls");
        system("color 3");
        int esc,denovo=1;

        printf(" GCPLAY\n\n");

        printf(" 1: Pergunta e Resposta\n");
        printf(" 2: Cobra na Caixa!\n");
        printf(" 3: Gousmas War\n");
        printf(" 4: Sair\n\n");

        scanf("%d",&esc);
        while(esc!=1 && esc !=2 && esc !=3 && esc != 4){
			while(getchar() != '\n');
			scanf("%d", &esc);
			}

        if (esc == 1){
            system("cls");
            perguntasRespostas();
        }

        else if (esc == 2){
            system("cls");
            cobrasNaCaixa();
        }

		else if (esc == 3){
            system("cls");
            do {
            	system("cls");
            	gousmasWar();
            	printf("\nDeseja jogar novamente?\n");
				printf("1 - Sim\n");
				printf("0 - Nao\n");
				scanf("%d", &denovo);
				while(denovo!=1 && denovo !=0){
		   			while(getchar() != '\n');
					scanf("%d", &denovo);
			}
			}while(denovo==1);
        }

        else if (esc == 4){
            exit(EXIT_SUCCESS);
        }
    }

    return 0;
}