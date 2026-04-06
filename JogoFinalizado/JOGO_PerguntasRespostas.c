#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

void aguardar() { // Funcao para aguardar o tempo para proxima pergunta
    Sleep(3000);   // Espera 3 segundos
}

void perguntasRespostas() {
int jogarnovamente;
do{

int pont = 0;  // Variavel para a soma da pontuacao
char tecla;    // Variavel para armazenar a tecla digitada

printf(" \t\t\tPergunta e Resposta!"); // Titulo que vai estar encima das perguntas

printf("\n1. Em que ano o CESUPA iniciou suas atividades? \n");
printf("a) 1988 \n");
printf("b) 1996 \n");
printf("c) 2001 \n");
printf("d) 2005 \n");
printf("e) 2010 \n");
do { tecla = getch(); } while (tecla != 'a' && tecla != 'A' && tecla != 'b' && tecla != 'B' && tecla != 'c' && tecla != 'C' && tecla != 'd' && tecla != 'D' && tecla != 'e' && tecla != 'E');
while(kbhit()) getch();

if (tecla == 'b' || tecla == 'B') {
    printf("\nResposta correta!");
    pont += 1;
    aguardar();
} else {
    printf("\nResposta incorreta! A resposta correta era B) 1996");
    aguardar();
}

// Comando acima foi a Primeira Questao.
char tecla2;
printf("\n2. Qual o nome do fundador do CESUPA? \n");
printf("a) Antonio Carlos Ferreira de Barros\n");
printf("b) Luiz Augusto Monteiro Pacheco \n");
printf("c) Joao Vittor Carvalho Pereira \n");
printf("d) Raimundo Nonato da Silva Guimaraes \n");
printf("e) Joao Paulo do Valle Mendes \n");
while(kbhit()) getch();
do {tecla2 = getch(); } while (tecla2 != 'a' && tecla2 != 'A' && tecla2 != 'b' && tecla2 != 'B' && tecla2 != 'c' && tecla2 != 'C' && tecla2 != 'd' && tecla2 != 'D' && tecla2 != 'e' && tecla2 != 'E');

if (tecla2 == 'e' || tecla2 == 'E') {
    printf("\nResposta correta!");
    pont += 1;
    aguardar();
} else {
    printf("\nResposta incorreta! A resposta correta era E) Joao Paulo do Valle Mendes");
    aguardar();
}

// Comando acima foi a Segunda Questao.
char tecla3;
printf("\n3. Qual o nome do atual reitor do CESUPA? \n");
printf("a) Carlos Augusto Barata Monteiro\n");
printf("b) Raimundo Alberto Pacheco Tavares \n");
printf("c) Sergio Fiuza de Mello Mendes \n");
printf("d) Fernando Luiz Batista de Oliveira \n");
printf("e) Marcelo Antonio Guimaraes da Costa \n");
while(kbhit()) getch();
do { tecla3 = getch(); } while (tecla3 != 'a' && tecla3 != 'A' && tecla3 != 'b' && tecla3 != 'B' && tecla3 != 'c' && tecla3 != 'C' && tecla3 != 'd' && tecla3 != 'D' && tecla3 != 'e' && tecla3 != 'E');


if (tecla3 == 'c' || tecla3 == 'C') {
    printf("\nResposta correta!");
    pont += 1;
    aguardar();
} else {
    printf("\nResposta incorreta! A resposta correta era C) Sergio Fiuza de Mello Mendes");
    aguardar();
}

// Comando acima foi a Terceira Questao.
char tecla4;
printf("\n4. Qual o nome do professor de Algoritmos? \n");
printf("a) Pedro Girotto\n");
printf("b) Alessandra Natasha \n");
printf("c) Ricardo Casseb \n");
printf("d) Claudio Coutinho \n");
printf("e) Polyana Santos \n");
while(kbhit()) getch();
do { tecla4 = getch(); } while (tecla4 != 'a' && tecla4 != 'A' && tecla4 != 'b' && tecla4 != 'B' && tecla4 != 'c' && tecla4 != 'C' && tecla4 != 'd' && tecla4 != 'D' && tecla4 != 'e' && tecla4 != 'E');


if (tecla4 == 'a' || tecla4 == 'A') {
    printf("\nResposta correta!");
    pont += 1;
    aguardar();
} else {
    printf("\nResposta incorreta! A resposta correta era A) Pedro Girotto");
    aguardar();
}

// Comando acima foi a Quarta Questao.
char tecla5;
printf("\n5. Por que o nome 'Argo' e atribuido ao Campus Alcindo Cacela I do CESUPA? \n");
printf("a) Em homenagem a um dos fundadores da instituicao, cujo sobrenome era Argon.\n");
printf("b) Devido a localizacao do campus, que antigamente abrigava uma fabrica de tecidos com esse nome. \n");
printf("c) Por conta da historia mitologica dos Argonautas, simbolizando a busca pelo conhecimento. \n");
printf("d) Como uma sigla para 'Administracao Regional de Graduacao Operacional'. \n");
printf("e) Por ser uma referencia direta a constelacao de Argo Navis, visivel durante a fundacao do predio. \n");
while(kbhit()) getch();
do { tecla5 = getch(); } while (tecla5 != 'a' && tecla5 != 'A' && tecla5 != 'b' && tecla5 != 'B' && tecla5 != 'c' && tecla5 != 'C' && tecla5 != 'd' && tecla5 != 'D' && tecla5 != 'e' && tecla5 != 'E');


if (tecla5 == 'c' || tecla5 == 'C') {
    printf("\nResposta correta!");
    pont += 1;
    aguardar();
} else {
    printf("\nResposta incorreta! A resposta correta era C) Pela historia mitologica dos Argonautas");
    aguardar();
}

// Comando acima foi a Quinta Questao.

printf("\n\nSua Pontuacao Foi:\n\n%d/5\n", pont);

printf("\nDeseja jogar novamente?\n");
printf("1 - Sim\n");
printf("0 - Nao\n");
scanf("%d", &jogarnovamente);

system("cls");
} while (jogarnovamente == 1);

}