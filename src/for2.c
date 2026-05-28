#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    int ano;
    int qtd = 0;

    for( ano = 1950 ; ano <= 2026 ; ano++){
        if( ano % 4 == 0 ){
            printf("O ano %d é bissexto\n",ano);
            qtd++;
        }
    }
    printf("======================================\n");
    printf("A quantidade de anos bissextos é %d\n",qtd);
    return 0;
}