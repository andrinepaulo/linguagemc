#include <stdio.h>
#include "../lib/funclayout.h"
#include "../lib/funcsoma.h"

int main(){
    int x , y , z;

    cabecalho();
    printf("Digite um número inteiro e tecle ENTER\n");
    scanf("%d,&x");
    printf("Digite outro número inteiro e tecle ENTER\n");
    scanf("%d,&y");
    z = soma(x,y);
    printf("O resultado da SOMA é %d\n",z);



}