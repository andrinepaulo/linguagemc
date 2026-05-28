/*
O programa deve calcular a potência de um determinado número(base) de acordo com
um expoente(potência). O usuário deve informar os dois valores.
O programa deve usar a estrutura de repetição for para calcular. Ao final deve 
exibir o resultado.

*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    int b,e,t,i;
    printf("Digite um número para a base e tecle Enter\n");
    scanf("%d",&b);
    printf("Digite um número para o expoente e tecle Enter\n");
    scanf("%d",&e);
    t = b;
    for( i = 1 ; i < e ; i++){
        t *= b ;
    }
    printf("O resultado é %d\n",t);
    return 0;

}