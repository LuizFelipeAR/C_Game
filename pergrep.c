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

while (tempo < 2.00000) {
    time(&t2);
    tempo = difftime(t2, t1);
}


printf(" \t\t\tPergunta e Resposta!");

char tecla;
int selecao;

tecla = getch();

printf("1. Em que ano o CESUPA iniciou suas atividades? \n");
printf("a) 1988 \n");
printf("b) 1996 \n");
printf("c) 2001 \n");
printf("d) 2005 \n");
printf("e) 2010 \n");

if (tecla == "b" || tecla == "B") {
    printf("\nResposta correta!");
    pont += 1;
             if (tempo == 2.00000) {
        system("cls");
     }
}
else if (tecla == "a" || tecla == "A") {
    printf("\nResposta incorreta!");
    if (tempo == 2.00000) {
        system("cls");
     }
}
else if (tecla == "c" || tecla == "C") {
    printf("\nResposta incorreta!");
    if (tempo == 2.00000) {
        system("cls");
     }
}
else if (tecla == "d" || tecla == "D") {
    printf("\nResposta incorreta!");
    if (tempo == 2.00000) {
        system("cls");
     }
}
else if (tecla == "e" || tecla == "E") {
    printf("\n Resposta incorreta!");
    if (tempo == 2.00000) {
        system("cls");
     }

}

// Comando acima foi a Primeira Questao.



return 0;
}