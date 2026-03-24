#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {

sleep(1);
printf("Cobras na caixa!!\n\n");
sleep(2);
printf("Ola exploradores! Parece que voces estao presos numa tumba egipicia!\n");
sleep(2);
printf("em frente voces verao cinco caixas, numa delas ha um botao para abrirem a porta e sairem da tumba...\n");
sleep(4);
printf("Em outra caixa ha uma cobra que vai MATAR voces!!!!!!\n");
sleep(2);
printf("Mas nas outras caixas nao tem nada nao =D\nBoa Sorte!\n\n");
sleep(2);

printf("\n\nJogador 1, Escolha um nome:\n");
printf("1) Alan\n2) Linus\n3) Steve\n4) Ada\n5) Neumann\n6) Ze-Valim\n7) Rob-Ieru\n\nDigite o numero correspondente ao nome escolhido:\n");

//array de strings com os nomes dos personagens
char nomes[7][20] = {"Alan","Linus","Steve","Ada","Neumann","Ze-Valim","Rob-Ieru"};
int pick1, pick2;
char jogador1[20];
char jogador2[20];


while(1){ //aqui eu to criando um loop infinito que so eh break (quebrado) quando o numero escolhido ta entre os que podem ser escolhidos
	scanf("%d", &pick1);
		if (pick1 >= 1 && pick1 <= 7) {
        break;
    }
		else {
        printf("Numero invalido! Digite um numero correspondente a um dos nomes acima:\n");
    }
}

strcpy(jogador1, nomes[pick1-1]); //tem que ser -1 porque um array comeca sempre no 0 e nao no 1 =)
//strcpy = string copy, eu to copiando o uma das strings do array de nomes pra dentro da variavel jogador1, eu to escolhendo o numero correspodente a posiçao do nome dentro do array de strings
system("cls||clear");


printf("\nJogador 2 escolha:\n");
int i = 0;
//i serve pra contagem
while (i < 7) {
    if (i != pick1 - 1) {
        printf("%d) %s\n", i + 1, nomes[i]);
    }
    i++;
}
//esse while 'le' as alternativas dentro do array de strings e entao confere se o pick1 ja foi escolhi e printa so os que ainda nao foram escolhidos


while(1){ //aqui eu to criando um loop infinito que so eh break (quebrado) quando o numero escolhido ta entre os que podem ser escolhidos
scanf("%d", &pick2);
 if (pick2 >= 1 && pick2 <= 7 && pick2 != pick1) {
        break;
    } else {
        printf("Numero invalido ou nome ja escolhido! Digite novamente:\n");
    }
}
strcpy(jogador2, nomes[pick2 - 1]);











	return 0;
}
