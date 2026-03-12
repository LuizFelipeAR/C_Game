#include <stdio.h>
#include <stdlib.h>

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
sleep(3);

printf("\n\nJogador 1, Escolha um nome:\n");
printf("1) Alan\n2) Linus\n3) Steve\n4) Ada\n5) Neumann\n6) Ze Valim\n7) Rob Ieru\n\nDigite o numero correspondente ao nome escolhido:\n");

int alan1=11,linus2=12,steve3=13,ada4=14,neumann5=15,ze6=16,rob7=17;
//nmu eh nome um, nmd eh nome dois kkkk 
int nmu,nmd;


scanf("%d", &nmu);

if (nmu == 1){
	nmu = alan1;
	printf("jogador 1 escolheu ALAN!");
	sleep(1);
	system("cls");
	
		printf("Jogador 2, Escolha um nome:\n");
		printf("\n2) Linus\n3) Steve\n4) Ada\n5) Neumann\n6) Ze Valim\n7) Rob Ieru\n\nDigite o numero correspondente ao nome escolhido:\n");
		scanf("%d", &nmd);
}

if (nmu == 2){
	nmu = linus2;
	printf("jogador 1 escolheu LINUS!");
	sleep(1);
	system("cls");
	
		printf("Jogador 2, Escolha um nome:\n");
		printf("\n1) Alan\n3) Steve\n4) Ada\n5) Neumann\n6) Ze Valim\n7) Rob Ieru\n\nDigite o numero correspondente ao nome escolhido:\n");
		scanf("%d", &nmd);
	
}

if (nmu == 3){
	nmu = steve3;
	printf("jogador 1 escolheu STEVE");
	sleep(1);
	system("cls");
	
		printf("Jogador 2, Escolha um nome:\n");
		printf("\n1) Alan\n2) Linus\n4) Ada\n5) Neumann\n6) Ze Valim\n7) Rob Ieru\n\nDigite o numero correspondente ao nome escolhido:\n");
		scanf("%d", &nmd);
	
}

if (nmu == 4){
	nmu = ada4;
	printf("jogador 1 escolheu ADA!");
	sleep(1);
	system("cls");
	
		printf("Jogador 2, Escolha um nome:\n");
		printf("\n1) Alan\n2) Linus\n3) Steve\n5) Neumann\n6) Ze Valim\n7) Rob Ieru\n\nDigite o numero correspondente ao nome escolhido:\n");
		scanf("%d", &nmd);
	
	
}

if (nmu == 5){
	nmu = neumann5;
	printf("jogador 1 escolheu NEUMANN!");
	sleep(1);
	system("cls");
	
		printf("Jogador 2, Escolha um nome:\n");
		printf("\n1) Alan\n2) Linus\n3) Steve\n4) Ada\n6) Ze Valim\n7) Rob Ieru\n\nDigite o numero correspondente ao nome escolhido:\n");
		scanf("%d", &nmd);
	
}

if (nmu == 6){
	nmu = ze6;
	printf("jogador 1 escolheu Ze Valim!");
	sleep(1);
	system("cls");
	
		printf("Jogador 2, Escolha um nome:\n");
		printf("\n1) Alan\n2) Linus\n3) Steve\n4) Ada\n5) Neumann\n7) Rob Ieru\n\nDigite o numero correspondente ao nome escolhido:\n");
		scanf("%d", &nmd);
	
	
}

if (nmu == 7){
	nmu = rob7;
	printf("jogador 1 escolheu Rob Ieru!");
	sleep(1);
	system("cls");
	
		printf("Jogador 2, Escolha um nome:\n");
		printf("\n1) Alan\n2) Linus\n3) Steve\n4) Ada\n5) Neumann\n6) Ze Valim\n\nDigite o numero correspondente ao nome escolhido:\n");
		scanf("%d", &nmd);
}



	return 0;
}
