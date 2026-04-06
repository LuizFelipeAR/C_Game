#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>
#include <windows.h>

void cobrasNaCaixa() {

srand(time(NULL));
do{

system("cls||clear");

Sleep(1000);
printf("Cobras na caixa!!\n\n");
Sleep(2000);
printf("Ola exploradores! Parece que voces estao presos numa tumba egipicia!\n");
Sleep(2000);
printf("em frente voces verao cinco caixas, numa delas ha um botao para abrirem a porta e sairem da tumba...\n");
Sleep(4000);
printf("Em uma outra caixa ha uma cobra que vai MATAR voces!!!!!!\n");
Sleep(2000);
printf("Mas nas outras caixas nao tem nada nao =D\nBoa Sorte!\n\n");
Sleep(2000);


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
        while(getchar() != '\n');
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
        while(getchar() != '\n');
    }
}
strcpy(jogador2, nomes[pick2 - 1]);


int caixas[5] = {0,0,0,0,0}; //array de ints, com 5 caixas (0 ate 4)
int caixacobra = rand() %5; //randomiza um numero de 0 a 4 dentro de um outro int
caixas[caixacobra] = 1; //o numero randomizado vai indicar qual das caixas dentro do array vai ser escolhida pra ter 1 como valor (representando a cobra)

int caixabotao; 
do{
caixabotao = rand() %5; //randomiza o numero de uma outra variavel
}while(caixabotao == caixacobra);//enquanto o valor da caixa do botao for o mesmo do valor da caixa da cobra ele vai continuar randomizando esse numero

caixas[caixabotao] = 2;
//aqui eu escolhi randomicamente duas caixas, uma com valor 1 e outra com valor 2, o resto eh zero pq nao tem nada dentro.

//cada elemento (o nada, a cobra e o botao) eh representado por um numero, o 0 eh nada, a cobra eh 1 e o botao eh b


printf("\nVamos %s e %s, voces precisam sair da tumba!\n", jogador1,jogador2);
Sleep(2000);

int turno = rand() %2; //randomiza entre 0 e 1 a vez dos jogadores

int escolhacaixa;

int caixasabertas[5] = {0,0,0,0,0};

while(1){

if(turno==0){
	
	system("cls||clear");
	printf("Agora eh a vez de %s\nESCOLHA UMA DAS CAIXAS\n\n", jogador1);
	
	printf("+---+ +---+ +---+ +---+ +---+\n");
	printf("| 1 | | 2 | | 3 | | 4 | | 5 |\n");
	printf("+---+ +---+ +---+ +---+ +---+\n");

	Sleep(1000);
	system("cls||clear");

	printf("Agora eh a vez de %s\nESCOLHA UMA DAS CAIXAS\n\n", jogador1);
	printf("+---+ +---+ +---+ +---+ +---+\n");
	printf("| 5 | | 1 | | 2 | | 3 | | 4 |\n");
	printf("+---+ +---+ +---+ +---+ +---+\n");

	Sleep(1000);
	system("cls||clear");
	
	printf("Agora eh a vez de %s\nESCOLHA UMA DAS CAIXAS\n\n", jogador1);
	printf("+---+ +---+ +---+ +---+ +---+\n");
	printf("| 4 | | 5 | | 1 | | 2 | | 3 |\n");
	printf("+---+ +---+ +---+ +---+ +---+\n");

	Sleep(1000);
	system("cls||clear");

	printf("Agora eh a vez de %s\nESCOLHA UMA DAS CAIXAS\n\n", jogador1);
	printf("+---+ +---+ +---+ +---+ +---+\n");
	printf("| 3 | | 4 | | 5 | | 1 | | 2 |\n");
	printf("+---+ +---+ +---+ +---+ +---+\n");

	Sleep(1000);
	system("cls||clear");

	printf("Agora eh a vez de %s\nESCOLHA UMA DAS CAIXAS\n\n", jogador1);
	printf("+---+ +---+ +---+ +---+ +---+\n");
	printf("| 2 | | 3 | | 4 | | 5 | | 1 |\n");
	printf("+---+ +---+ +---+ +---+ +---+\n");

	Sleep(1000);
	system("cls||clear");

	printf("Agora eh a vez de %s\nESCOLHA UMA DAS CAIXAS\n\n", jogador1);	
	printf("+---+ +---+ +---+ +---+ +---+\n");
	printf("| 1 | | 2 | | 3 | | 4 | | 5 |\n");
	printf("+---+ +---+ +---+ +---+ +---+\n");
	

} else {
	
	system("cls||clear");
	printf("Agora eh a vez de %s\nESCOLHA UMA DAS CAIXAS\n\n", jogador2);
	
	printf("+---+ +---+ +---+ +---+ +---+\n");
	printf("| 1 | | 2 | | 3 | | 4 | | 5 |\n");
	printf("+---+ +---+ +---+ +---+ +---+\n");

	Sleep(1000);
	system("cls||clear");

	printf("Agora eh a vez de %s\nESCOLHA UMA DAS CAIXAS\n\n", jogador2);
	printf("+---+ +---+ +---+ +---+ +---+\n");
	printf("| 5 | | 1 | | 2 | | 3 | | 4 |\n");
	printf("+---+ +---+ +---+ +---+ +---+\n");

	Sleep(1000);
	system("cls||clear");

	printf("Agora eh a vez de %s\nESCOLHA UMA DAS CAIXAS\n\n", jogador2);	
	printf("+---+ +---+ +---+ +---+ +---+\n");
	printf("| 4 | | 5 | | 1 | | 2 | | 3 |\n");
	printf("+---+ +---+ +---+ +---+ +---+\n");

	Sleep(1000);
	system("cls||clear");

	printf("Agora eh a vez de %s\nESCOLHA UMA DAS CAIXAS\n\n", jogador2);
	printf("+---+ +---+ +---+ +---+ +---+\n");
	printf("| 3 | | 4 | | 5 | | 1 | | 2 |\n");
	printf("+---+ +---+ +---+ +---+ +---+\n");

	Sleep(1000);
	system("cls||clear");

	printf("Agora eh a vez de %s\nESCOLHA UMA DAS CAIXAS\n\n", jogador2);
	printf("+---+ +---+ +---+ +---+ +---+\n");
	printf("| 2 | | 3 | | 4 | | 5 | | 1 |\n");
	printf("+---+ +---+ +---+ +---+ +---+\n");

	Sleep(1000);
	system("cls||clear");

	printf("Agora eh a vez de %s\nESCOLHA UMA DAS CAIXAS\n\n", jogador2);	
	printf("+---+ +---+ +---+ +---+ +---+\n");
	printf("| 1 | | 2 | | 3 | | 4 | | 5 |\n");
	printf("+---+ +---+ +---+ +---+ +---+\n");
	
}
	
    printf("Escolha uma caixa digitando seu numero correspondente:\n");
    scanf("%d", &escolhacaixa);

    if(escolhacaixa>=1&&escolhacaixa<= 5){
        escolhacaixa--;
		        
        		if(caixasabertas[escolhacaixa]==1){
        			printf("Essa caixa ja foi escolhida! Porfavor, escolha outra caixa\n");
        			Sleep(2000);
					continue;			
				}
        		 caixasabertas[escolhacaixa] = 1;
        if(escolhacaixa == caixabotao){
            printf("parabens jogadores! voces venceram\n");
            Sleep(2000);
            break;
        } 
        else if(escolhacaixa == caixacobra){
            printf("ahhh naooo, parece que voces escolheram a cobra e MORRERAM =(\n");
            Sleep(2000);
            break;
        } 
        else {
            printf("opa, parece que esta caixa esta vazia =/\n");
            turno= (1-turno);
            Sleep(1000);
        }

    } else {
        printf("Numero invalido! Escolha novamente:\n");
        while(getchar() != '\n');
    }
}

int saidareset;

while(1){
    system("cls||clear");
    printf("Deseja continuar jogando?\n1 - sair\n0 - jogar novamente\n");
    scanf("%d", &saidareset);

    if(saidareset == 1){
        break; // sai do jogo
    } 
    else if(saidareset == 0){
        break; // continua o jogo (sai desse while)
    } 
    else {
        printf("Valor invalido! Digite 0 ou 1.\n");
        while(getchar() != '\n');
        Sleep(1000);
    }
}

if(saidareset == 1){
	printf("Voltando para o menu...\n");
    Sleep(1000);
	return; // esse break é do DO-WHILE (aqui eh sal, acabou o game) 
    //felipe eu sei que o game nao pode acabar, so que eu nao sei sincronizar esse codigo todo com o menu do game =)
}




}while(1); //aqui eh o while do do-while 

}