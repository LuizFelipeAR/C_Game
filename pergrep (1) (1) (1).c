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
	time(&t1);
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
	time(&t1);
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
	time(&t1);
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
	time(&t1);
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
	time(&t1);
    printf("\nResposta incorreta!");
     while (tempo < 3.00000) {
    time(&t2);
    tempo = difftime(t2, t1);
}
    if (tempo == 3.00000) {
        system("cls");
     }

}
while (tecla != 'e' && tecla != 'E' && tecla != 'a' && tecla != 'A' && tecla != 'b' && tecla != 'B' && tecla != 'c' && tecla != 'C' && tecla != 'd' && tecla != 'D' ){
	tecla = getch();
}

// Comando acima foi a Primeira Questao.

if (tempo == 3.0) {
printf(" \t\t\tPergunta e Resposta!");
}
while(kbhit()){
	getch();
}

time_t t1p2, t2p2;
double diferenca;


if (tempo == 3.0) {
	printf("\n2. Qual o nome do fundador do CESUPA? \n");
printf("a) Antonio Carlos Ferreira de Barros\n");
printf("b) Luiz Augusto Monteiro Pacheco \n");
printf("c) Joao Vittor Carvalho Pereira \n");
printf("d) Raimundo Nonato da Silva Guimaraes \n");
printf("e) Joao Paulo do Valle Mendes \n");
tecla = getch();
}
if (tecla == 'e' || tecla == 'E') {
	time(&t1p2);
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
	time(&t1p2);
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
	time(&t1p2);
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
	time(&t1p2);
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
	time(&t1p2);
    printf("\nResposta incorreta!");
     while (diferenca < 3.00000) {
    time(&t2p2);
    diferenca = difftime(t2p2, t1p2);
}
    if (diferenca == 3.00000) {
        system("cls");
     }

}
while (tecla != 'e' && tecla != 'E' && tecla != 'a' && tecla != 'A' && tecla != 'b' && tecla != 'B' && tecla != 'c' && tecla != 'C' && tecla != 'd' && tecla != 'D' ){
	tecla = getch();
}

// Comando acima foi a Segunda Questao.
if (diferenca == 3.0) {
printf(" \t\t\tPergunta e Resposta!");
}


time_t t1p3, t2p3;
double diferenca1;

while(kbhit()){
	getch();
}

if (diferenca == 3.0) {
	printf("\n3. Qualo o nome do atual reitor do CESUPA? \n");
printf("a) Carlos Augusto Barata Monteiro\n");
printf("b) Raimundo Alberto Pacheco Tavares \n");
printf("c) Sergio Fiuza de Mello Mendes \n");
printf("d) Fernando Luiz Batista de Oliveira \n");
printf("e) Marcelo Antonio Guimaraes da Costa \n");
tecla = getch();
}
if (tecla == 'c' || tecla == 'C') {
	time(&t1p3);
    printf("\nResposta correta!");
    pont += 1;
    while (diferenca1 < 3.00000) {
    time(&t2p3);
    diferenca1 = difftime(t2p3, t1p3);
}

    if (diferenca1 == 3.00000) {
        	system("cls");
     }
}
else if (tecla == 'a' || tecla == 'A') {
	time(&t1p3);
    printf("\nResposta incorreta!");
    while (diferenca1 < 3.00000) {
    time(&t2p3);
    diferenca1 = difftime(t2p3, t1p3);
}
    if (diferenca1 == 3.00000) {
        system("cls");
     }
}
else if (tecla == 'e' || tecla == 'E') {
	time(&t1p3);
    printf("\nResposta incorreta!");
     while (diferenca1 < 3.00000) {
    time(&t2p3);
    diferenca1 = difftime(t2p3, t1p3);
}
    if (diferenca1 == 3.00000) {
        system("cls");
     }
}
else if (tecla == 'd' || tecla == 'D') {
	time(&t1p3);
    printf("\nResposta incorreta!");
     while (diferenca1 < 3.00000) {
    time(&t2p3);
    diferenca1 = difftime(t2p3, t1p3);
}
    if (diferenca1 == 3.00000) {
        system("cls");
     }
}
else if (tecla == 'b' || tecla == 'B') {
	time(&t1p3);
    printf("\nResposta incorreta!");
     while (diferenca1 < 3.00000) {
    time(&t2p3);
    diferenca1 = difftime(t2p3, t1p3);
}
    if (diferenca1 == 3.00000) {
        system("cls");
     }

}
while (tecla != 'e' && tecla != 'E' && tecla != 'a' && tecla != 'A' && tecla != 'b' && tecla != 'B' && tecla != 'c' && tecla != 'C' && tecla != 'd' && tecla != 'D' ){
	tecla = getch();
}

// Comando acima foi a terceira questao

if (diferenca1 == 3.0) {
printf(" \t\t\tPergunta e Resposta!");
}


time_t t1p4, t2p4;
double diferenca2;

while(kbhit()){
	getch();
}

if (diferenca1 == 3.0) {
	printf("\n4. Qual o nome do professor de Algoritmos? \n");
printf("a) Pedro Girotto\n");
printf("b) Alessandra Natasha \n");
printf("c) Ricardo Casseb \n");
printf("d) Claudio Coutinho \n");
printf("e) Polyana Santos \n");
tecla = getch();
}
if (tecla == 'a' || tecla == 'A') {
	time(&t1p4);
    printf("\nResposta correta!");
    pont += 1;
    while (diferenca2 < 3.00000) {
    time(&t2p4);
    diferenca2 = difftime(t2p4, t1p4);
}

    if (diferenca2 == 3.00000) {
        	system("cls");
     }
}
else if (tecla == 'c' || tecla == 'C') {
	time(&t1p4);
    printf("\nResposta incorreta!");
    while (diferenca2 < 3.00000) {
    time(&t2p4);
    diferenca2 = difftime(t2p4, t1p4);
}
    if (diferenca2 == 3.00000) {
        system("cls");
     }
}
else if (tecla == 'e' || tecla == 'E') {
	time(&t1p4);
    printf("\nResposta incorreta!");
     while (diferenca2 < 3.00000) {
    time(&t2p4);
    diferenca2 = difftime(t2p4, t1p4);
}
    if (diferenca2 == 3.00000) {
        system("cls");
     }
}
else if (tecla == 'd' || tecla == 'D') {
	time(&t1p4);
    printf("\nResposta incorreta!");
     while (diferenca2 < 3.00000) {
    time(&t2p4);
    diferenca2 = difftime(t2p4, t1p4);
}
    if (diferenca2 == 3.00000) {
        system("cls");
     }
}
else if (tecla == 'b' || tecla == 'B') {
	time(&t1p4);
    printf("\nResposta incorreta!");
     while (diferenca2 < 3.00000) {
    time(&t2p4);
    diferenca2 = difftime(t2p4, t1p4);
}
    if (diferenca2 == 3.00000) {
        system("cls");
     }

}
while (tecla != 'e' && tecla != 'E' && tecla != 'a' && tecla != 'A' && tecla != 'b' && tecla != 'B' && tecla != 'c' && tecla != 'C' && tecla != 'd' && tecla != 'D' ){
	tecla = getch();
}
// Comando acima 4 Pergunta
if (diferenca2 == 3.0) {
printf(" \t\t\tPergunta e Resposta!");
}


time_t t1p5, t2p5;
double diferenca3;

while(kbhit()){
	getch();
}

if (diferenca2 == 3.0) {
	printf("\n5. Por que o nome 'Argo' e atribuido ao Campus Alcindo Cacela I do CESUPA? \n");
printf("a) Em homenagem a um dos fundadores da instituicao, cujo sobrenome era Argon.\n");
printf("b) Devido a localizacao do campus, que antigamente abrigava uma fabrica de tecidos com esse nome. \n");
printf("c) Por conta da historia mitologica dos Argonautas, simbolizando a busca pelo conhecimento. \n"); 
printf("d) Como uma sigla para 'Administracao Regional de Graduacao Operacional. \n");
printf("e) Por ser uma referencia direta a constelacao de Argo Navis, visivel durante a fundacao do predio. \n");
tecla = getch();
}
if (tecla == 'c' || tecla == 'C') {
	time(&t1p5);
    printf("\nResposta correta!");
    pont += 1;
    while (diferenca3 < 3.00000) {
    time(&t2p5);
    diferenca3 = difftime(t2p5, t1p5);
}

    if (diferenca3 == 3.00000) {
        	system("cls");
     }
}
else if (tecla == 'a' || tecla == 'A') {
	time(&t1p5);
    printf("\nResposta incorreta!");
    while (diferenca3 < 3.00000) {
    time(&t2p5);
    diferenca3 = difftime(t2p5, t1p5);
}
    if (diferenca3 == 3.00000) {
        system("cls");
     }
}
else if (tecla == 'e' || tecla == 'E') {
	time(&t1p5);
    printf("\nResposta incorreta!");
     while (diferenca3 < 3.00000) {
    time(&t2p5);
    diferenca3 = difftime(t2p5, t1p5);
}
    if (diferenca3 == 3.00000) {
        system("cls");
     }
}
else if (tecla == 'd' || tecla == 'D') {
	time(&t1p5);
    printf("\nResposta incorreta!");
     while (diferenca3 < 3.00000) {
    time(&t2p5);
    diferenca3 = difftime(t2p5, t1p5);
}
    if (diferenca3 == 3.00000) {
        system("cls");
     }
}
else if (tecla == 'b' || tecla == 'B') {
	time(&t1p5);
    printf("\nResposta incorreta!");
     while (diferenca3 < 3.00000) {
    time(&t2p5);
    diferenca3 = difftime(t2p5, t1p5);
}
    if (diferenca3 == 3.00000) {
        system("cls");
     }

}
while (tecla != 'e' && tecla != 'E' && tecla != 'a' && tecla != 'A' && tecla != 'b' && tecla != 'B' && tecla != 'c' && tecla != 'C' && tecla != 'd' && tecla != 'D' ){
	tecla = getch();
}
// Comando Acima Foi a Quinta Questao

if(diferenca3 = 3.0) {
	printf("Sua Pontuacao Foi:\n\n");
}
if(diferenca3 = 3.0) {
	if (pont == 0) {
		printf("0/5\n");
	}
	if (pont == 1){
		printf("1/5\n");
	}
	if (pont == 2){
		printf("2/5\n");	
	}
	if (pont == 3){
		printf("3/5\n");
	}
	if (pont == 4){
	    printf("4/5\n");
	}		
	if (pont == 5){
	    printf("5/5\n");		
	}
}
	return 0;
}
