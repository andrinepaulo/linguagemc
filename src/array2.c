#include <stdio.h>

int main(){
    // declaração do array(conjunto de dados) num que guarda quatro números inteiros
    // a variável usa int porque vamos trabalhar com números inteiros (o array funciona assim)
    int num [] = {23,8,11,52,9};
    // a variável int pos é para lembrar de posição
    int pos = 4;
    // usaremos a estrutura de repetição while para aparecer todos os valores na tela
    while(pos>= 0){
        // imprimir a posição do array
        printf("%d\n",num [pos]);
        pos--;
    }
    
    return 0;
}