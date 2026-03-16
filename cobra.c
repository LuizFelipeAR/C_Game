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
sleep(3);

printf("\n\nJogador 1, Escolha um nome:\n");
printf("1) Alan\n2) Linus\n3) Steve\n4) Ada\n5) Neumann\n6) Ze-Valim\n7) Rob-Ieru\n\nDigite o numero correspondente ao nome escolhido:\n");

int alan1=11,linus2=12,steve3=13,ada4=14,neumann5=15,ze6=16,rob7=17;
//'nmu' eh nome um, 'nmd' eh nome dois kkkk 
int nmu,nmd;
//'nmju' eh nome do jogador 1 e 'nmjd' eh nome do jogador 2
char nmju[20];
char nmjd[20];


scanf("%d", &nmu);
// tudo sobre a selecao de personagem aqui abaixo



//personagem alan turing e jogador 2
if (nmu == 1){
	nmu = alan1;
	strcpy(nmju, "Alan");
	printf("jogador 1 escolheu ALAN!");
	sleep(1);
	system("cls");
	
		printf("Jogador 2, Escolha um nome:\n");
		printf("\n2) Linus\n3) Steve\n4) Ada\n5) Neumann\n6) Ze-Valim\n7) Rob-Ieru\n\nDigite o numero correspondente ao nome escolhido:\n");
		scanf("%d", &nmd);
		
		if(nmd == 2){
		strcpy(nmjd, "Linus");
		}
		if(nmd == 3){
		strcpy(nmjd, "Steve");
		}
		if(nmd == 4){
		strcpy(nmjd, "Ada");
		}
		if(nmd == 5){
		strcpy(nmjd, "Neumann");
		}
		if(nmd == 6){
		strcpy(nmjd, "Ze-Valim");
		}
		if(nmd == 7){
		strcpy(nmjd, "Rob-Ieru");
		}
		
}

//personagem linus torvalds e jogador 2
if (nmu == 2){
	nmu = linus2;
	 strcpy(nmju, "Linus");
	printf("jogador 1 escolheu LINUS!");
	sleep(1);
	system("cls");
	
		printf("Jogador 2, Escolha um nome:\n");
		printf("\n1) Alan\n3) Steve\n4) Ada\n5) Neumann\n6) Ze-Valim\n7) Rob-Ieru\n\nDigite o numero correspondente ao nome escolhido:\n");
		scanf("%d", &nmd);
		
		if(nmd == 1){
		strcpy(nmjd, "Alan");
		}
		if(nmd == 3){
		strcpy(nmjd, "Steve");
		}
		if(nmd == 4){
		strcpy(nmjd, "Ada");
		}
		if(nmd == 5){
		strcpy(nmjd, "Neumann");
		}
		if(nmd == 6){
		strcpy(nmjd, "Ze-Valim");
		}
		if(nmd == 7){
		strcpy(nmjd, "Rob-Ieru");
		}
	
}

//personagem steve jobs e jogador 2
if (nmu == 3){
	nmu = steve3;
	strcpy(nmju, "Steve");
	printf("jogador 1 escolheu STEVE");
	sleep(1);
	system("cls");
	
		printf("Jogador 2, Escolha um nome:\n");
		printf("\n1) Alan\n2) Linus\n4) Ada\n5) Neumann\n6) Ze-Valim\n7) Rob-Ieru\n\nDigite o numero correspondente ao nome escolhido:\n");
		scanf("%d", &nmd);
		
		if(nmd == 1){
		strcpy(nmjd, "Alan");
		}
		if(nmd == 2){
		strcpy(nmjd, "Linus");
		}
		if(nmd == 4){
		strcpy(nmjd, "Ada");
		}
		if(nmd == 5){
		strcpy(nmjd, "Neumann");
		}
		if(nmd == 6){
		strcpy(nmjd, "Ze-Valim");
		}
		if(nmd == 7){
		strcpy(nmjd, "Rob-Ieru");
		}
	
}

//personagem Ada Lovelance e jogador 2
if (nmu == 4){
	nmu = ada4;
	strcpy(nmju, "Ada");
	printf("jogador 1 escolheu ADA!");
	sleep(1);
	system("cls");
	
		printf("Jogador 2, Escolha um nome:\n");
		printf("\n1) Alan\n2) Linus\n3) Steve\n5) Neumann\n6) Ze-Valim\n7) Rob-Ieru\n\nDigite o numero correspondente ao nome escolhido:\n");
		scanf("%d", &nmd);
	
		if(nmd == 1){
		strcpy(nmjd, "Alan");
		}
		if(nmd == 2){
		strcpy(nmjd, "Linus");
		}
		if(nmd == 3){
		strcpy(nmjd, "Steve");
		}
		if(nmd == 5){
		strcpy(nmjd, "Neumann");
		}
		if(nmd == 6){
		strcpy(nmjd, "Ze-Valim");
		}
		if(nmd == 7){
		strcpy(nmjd, "Rob-Ieru");
		}
	
}

//personagem John Von Neumann e jogador 2
if (nmu == 5){
	nmu = neumann5;
	strcpy(nmju, "Neumann");
	printf("jogador 1 escolheu NEUMANN!");
	sleep(1);
	system("cls");
	
		printf("Jogador 2, Escolha um nome:\n");
		printf("\n1) Alan\n2) Linus\n3) Steve\n4) Ada\n6) Ze-Valim\n7) Rob-Ieru\n\nDigite o numero correspondente ao nome escolhido:\n");
		scanf("%d", &nmd);
	
		if(nmd == 1){
		strcpy(nmjd, "Alan");
		}
		if(nmd == 2){
		strcpy(nmjd, "Linus");
		}
		if(nmd == 3){
		strcpy(nmjd, "Steve");
		}
		if(nmd == 4){
		strcpy(nmjd, "Ada");
		}
		if(nmd == 6){
		strcpy(nmjd, "Ze-Valim");
		}
		if(nmd == 7){
		strcpy(nmjd, "Rob-Ieru");
		}
	
}

//personagem Jose Valim e jogador 2
if (nmu == 6){
	nmu = ze6;
	strcpy(nmju, "Ze-Valim");
	printf("jogador 1 escolheu Ze-Valim!");
	sleep(1);
	system("cls");
	
		printf("Jogador 2, Escolha um nome:\n");
		printf("\n1) Alan\n2) Linus\n3) Steve\n4) Ada\n5) Neumann\n7) Rob-Ieru\n\nDigite o numero correspondente ao nome escolhido:\n");
		scanf("%d", &nmd);
	
		if(nmd == 1){
		strcpy(nmjd, "Alan");
		}
		if(nmd == 2){
		strcpy(nmjd, "Linus");
		}
		if(nmd == 3){
		strcpy(nmjd, "Steve");
		}
		if(nmd == 4){
		strcpy(nmjd, "Ada");
		}
		if(nmd == 5){
		strcpy(nmjd, "Neumann");
		}
		if(nmd == 7){
		strcpy(nmjd, "Rob-Ieru");
		}
	
}

//personagem Roberto Ierusalimschy e jogador 2
if (nmu == 7){
	nmu = rob7;
	strcpy(nmju, "Rob-Ieru");
	printf("jogador 1 escolheu Rob-Ieru!");
	sleep(1);
	system("cls");
	
		printf("Jogador 2, Escolha um nome:\n");
		printf("\n1) Alan\n2) Linus\n3) Steve\n4) Ada\n5) Neumann\n6) Ze-Valim\n\nDigite o numero correspondente ao nome escolhido:\n");
		scanf("%d", &nmd);
		
		if(nmd == 1){
		strcpy(nmjd, "Alan");
		}
		if(nmd == 2){
		strcpy(nmjd, "Linus");
		}
		if(nmd == 3){
		strcpy(nmjd, "Steve");
		}
		if(nmd == 4){
		strcpy(nmjd, "Ada");
		}
		if(nmd == 5){
		strcpy(nmjd, "Neumann");
		}
		if(nmd == 6){
		strcpy(nmjd, "Ze-Valim");
		}	
		
}
//tudo acima eh so selecao de personagem ou nome, tanto faz

system("cls");



	return 0;
}