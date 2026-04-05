#include <stdio.h>
#include <stdlib.h>

void status(int furiaj1, int furiaj2, int furiai1,int furiai2){

int i;	
	
printf("=====================================\n");
printf("          GOUSMAS WAR\n");
printf("=====================================\n\n");

printf("Jogador 1\n");
printf("\nGousma 1\n");
printf("Furia: ");
for(i=0; i < furiaj1; i++){
	printf("o ");
}
printf("\n\nGousma 2\n");
printf("Furia: ");
for(i=0; i < furiaj2; i++){
	printf("o ");
}

printf("\n\nJogador 2:\n");
printf("Gousma 1: Furia (%d)\n", furiai1);
printf("Gousma 2: Furia (%d)\n\n", furiai2);
}

int main() {
	status(5,5,5,5);
}