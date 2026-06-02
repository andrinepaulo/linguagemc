/*
Fazer uma contagem de 1 a 50 e exibir somente os
números multiplos de 3
*/
#include <stdio.h>
int main(){
    int i = 1;
    while( i <= 50 ){
        if( i%3 == 0){
            printf("Este número %d é multiplo de 3\n",i);
        }
        i++;
    }
    return 0;
}








