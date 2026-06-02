#include <stdio.h>
#include <stdlib.h>
 
int main(){
    system("clear");
 
    char *primeiro_nome;
 
    printf ("Digite o seu nome e tecle Enter\n");
    scanf("%s",primeiro_nome);
 
    printf("Olá, Sr(a). %s\n",primeiro_nome);
 
    return 0;
 
 
}
