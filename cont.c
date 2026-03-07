#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    time_t inicio;
    time_t final;
    double diferenca;

    printf(" __\n");
    printf("/_ |\n");
    printf(" | |\n");
    printf(" | |\n");
    printf(" | |\n");
    printf(" |_|\n");

    time(&inicio);

    while(diferenca < 1.00000) {
        time(&final);
        diferenca = difftime(final, inicio);
    }

    if(diferenca == 1.00000) {
        printf(" ____\n");
        printf("|__  | \n");
        printf("   ) |\n");
        printf("  / / \n");
        printf(" / /_ \n");
        printf("|____|\n");
    }

       while(diferenca < 2.00000) {
        time(&final);
        diferenca = difftime(final, inicio);
    }
        if(diferenca == 2.00000) {
        printf(" ____\n");
        printf("|___ | \n"); 
        printf("  __) |\n");
        printf(" |__ < \n");
        printf(" ___) |\n");
        printf("|____/ \n");  
    }
    return 0;
}