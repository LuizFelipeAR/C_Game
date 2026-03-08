#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

int main() {

int pont = 0;


printf(" \t\t\tPergunta e Resposta!");

char tecla;


printf("\n\n1.Em que ano o CESUPA iniciou suas atividades? \n");
printf("a) 1988 \n");
printf("b) 1996 \n");
printf("c) 2001 \n");
printf("d) 2005 \n");
printf("e) 2010 \n");
tecla = getch();

if (tecla == "b" || tecla == "B") {
    	printf("\nResposta correta!");
    	pont += 1;
}
else if (tecla == "a" || tecla == "A") {
    printf("\nResposta incorreta!");
}
else if (tecla == "c" || tecla == "C") {
    printf("\nResposta incorreta!");
}
else if (tecla == "d" || tecla == "D") {
    printf("\nResposta incorreta!");
}
else if (tecla == "e" || tecla == "E") {
    printf("\n Resposta incorreta!");

}

// Comando acima foi a Primeira Questao.



return 0;
}