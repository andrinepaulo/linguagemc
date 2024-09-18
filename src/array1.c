#include <stdio.h>

int main(){
    // declaração do array(conjunto de dados) num que guarda quatro números inteiros
    // a variável usa int porque vamos trabalhar com números inteiros (o array funciona assim)
    int num [] = {10,25,87,91};
    // a variável int pos é para lembrar de posição
    int pos = 6;
    // imprimir a primeira posição do array
    printf("%d\n",num [pos-5]);

    return 0;
}