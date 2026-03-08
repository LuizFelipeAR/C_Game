#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

int main() {

int pont = 0;
// Variavel para pontuação

// Comando para tempo

time_t t1, t2;
double tempo;

time(&t1);


printf(" \t\t\tPergunta e Resposta!");

char tecla;



printf("\n1. Em que ano o CESUPA iniciou suas atividades? \n");
printf("a) 1988 \n");
printf("b) 1996 \n");
printf("c) 2001 \n");
printf("d) 2005 \n");
printf("e) 2010 \n");
tecla = getch();

if (tecla == 'b' || tecla == 'B') {
    printf("\nResposta correta!");
    pont += 1;
    while (tempo < 3.00000) {
    time(&t2);
    tempo = difftime(t2, t1);
}
    if (tempo == 3.00000) {
        	system("cls");
     }
}
else if (tecla == 'a' || tecla == 'A') {
    printf("\nResposta incorreta!");
    while (tempo < 3.00000) {
    time(&t2);
    tempo = difftime(t2, t1);
}
    if (tempo == 3.00000) {
        system("cls");
     }
}
else if (tecla == 'c' || tecla == 'C') {
    printf("\nResposta incorreta!");
     while (tempo < 3.00000) {
    time(&t2);
    tempo = difftime(t2, t1);
}
    if (tempo == 3.00000) {
        system("cls");
     }
}
else if (tecla == 'd' || tecla == 'D') {
    printf("\nResposta incorreta!");
     while (tempo < 3.00000) {
    time(&t2);
    tempo = difftime(t2, t1);
}
    if (tempo == 3.00000) {
        system("cls");
     }
}
else if (tecla == 'e' || tecla == 'E') {
    printf("\n Resposta incorreta!");
     while (tempo < 3.00000) {
    time(&t2);
    tempo = difftime(t2, t1);
}
    if (tempo == 3.00000) {
        system("cls");
     }

}

// Comando acima foi a Primeira Questao.

printf(" \t\t\tPergunta e Resposta!");


time_t t1p2, t2p2;
double diferenca;

time(&t1p2);

if (tempo == 3.0) {
	printf("\n2. Nome do fundador do CESUPA? \n");
printf("a) Antonio Carlos Ferreira de Barros\n");
printf("b) Luiz Augusto Monteiro Pacheco \n");
printf("c) Joao Vittor Carvalho Pereira \n");
printf("d) Raimundo Nonato da Silva Guimaraes \n");
printf("e) Joao Paulo do Valle Mendes \n");
tecla = getch();
}
if (tecla == 'e' || tecla == 'E') {
    printf("\nResposta correta!");
    pont += 1;
    while (diferenca < 3.00000) {
    time(&t2p2);
    diferenca = difftime(t2p2, t1p2);
}
    if (diferenca == 3.00000) {
        	system("cls");
     }
}
else if (tecla == 'a' || tecla == 'A') {
    printf("\nResposta incorreta!");
    while (diferenca < 3.00000) {
    time(&t2p2);
    diferenca = difftime(t2p2, t1p2);
}
    if (diferenca == 3.00000) {
        system("cls");
     }
}
else if (tecla == 'c' || tecla == 'C') {
    printf("\nResposta incorreta!");
     while (diferenca < 3.00000) {
    time(&t2p2);
    diferenca = difftime(t2p2, t1p2);
}
    if (diferenca == 3.00000) {
        system("cls");
     }
}
else if (tecla == 'd' || tecla == 'D') {
    printf("\nResposta incorreta!");
     while (diferenca < 3.00000) {
    time(&t2p2);
    diferenca = difftime(t2p2, t1p2);
}
    if (diferenca == 3.00000) {
        system("cls");
     }
}
else if (tecla == 'b' || tecla == 'B') {
    printf("\n Resposta incorreta!");
     while (diferenca < 3.00000) {
    time(&t2p2);
    diferenca = difftime(t2p2, t1p2);
}
    if (diferenca == 3.00000) {
        system("cls");
     }

}




return 0;
}