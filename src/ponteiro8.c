#include <stdio.h>
#include <stdlib.h>
 
int main(){
    
    system("clear");
    int i;
    for ( i = 0 ; i < 100 ; i++){
        printf("=");
    }
    printf("\nPrograma de cadastro\n");
    char primeiroNome[10];
    char sobrenome[10];
    char email [50];
    int idade;
    // Vamos criar um arquivo de texto para guardar os dados dos clientes
    FILE arquivo = fopen("files/cadastro.txt","w");

        fclose();

}