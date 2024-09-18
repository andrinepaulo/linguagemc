#include <stdio.h>

int main(){

    // a primeira variável declarada irá ajudar a contar de zero(0) até (100)
    int contar = 0;
    // a segunda variável irá ajudar na quantidade de multiplos de 3
    int qtd = 0;

//  dentro da estrutura de repetição iremos colocar uma estrutura de desvio de fluxo (IF)
    while (contar <=100){
        if(contar % 3 == 0){
            printf("%d\n",contar);
            qtd++;
        }
        contar++;
    }
    printf("Quantidade de multiplos de 3 é %d\n",qtd);
    return 0; 
}