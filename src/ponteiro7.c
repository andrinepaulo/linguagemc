#include <stdio.h>
#include <stdlib.h>
 
int main(){
    system("clear");
    char nomeCompleto[30];
    //vamos usar uma função para obter
    //todos os caracteres digitados pelo
    //usuário na tela de terminal
    //O nome de função é fgets

    printf("Digite o seu nome completo: \n");
    fgets(nomeCompleto, 30,stdin); //Fgets é melhor para gerenciar string
    printf("Olá, Sr.(a) %s\n",nomeCompleto);

    return 0;





}