#include <stdio.h>
#include <stdlib.h>


void perguntasRespostas();
void cobrasNaCaixa();
void gousmasWar();

int main(int argc, char *argv[]) {

    while(1){
	system("cls");
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
            perguntasRespostas();
        }

        else if (esc == 2){
            system("cls");
            cobrasNaCaixa();
        }

		else if (esc == 3){
            system("cls");
            gousmasWar();
        }

        else if (esc == 4){
            exit(EXIT_SUCCESS);
        }
    }

    return 0;
}