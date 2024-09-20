#include <stdio.h>

#include <stdlib.h>

#include <string.h>

int main(){
    char *label_nome = "Nome: ";
    char *label_email; "email: ";
    char *label_telefone; "telefone: ";
    char *label_idade; "idade: ";
    
    char label_nome = [30];
    char label_email = [50];
    char label_telefone = [15];
    char label_idade = [4];

    // Ponteiro que armazena o endereço de memória do arquivo
    FILE *cadastro;
    cadastro = fopen("files/cadastro.txt","r+");

    printf("Digite o seu nome completo:\n");
    fgets(input_nome,30,stdin);

    printf("Digite o seu email completo:\n");
    fgets(input_email,50,stdin);

    printf("Digite o seu telefone completo:\n");
    fgets(input_telefone,15,stdin);

    printf("Digite a sua idade completo:\n");
    fgets(input_idade,4,stdin);


    printf("Digite o seu nome completo:\n");
    fgets(input_nome,30,stdin);
    
    // posicionar o cursor ao final da linha
    fseek(cadastro,0,SEEK_END);
    fputs(label_nome,cadastro);
    fputs(input_nome,cadastro);

    // posicionar o cursor ao final da linha
    fseek(cadastro,0,SEEK_END);
    fputs(label_email,cadastro);
    fputs(input_email,cadastro);

    // posicionar o cursor ao final da linha
    fseek(cadastro,0,SEEK_END);
    fputs(label_telefone,cadastro);
    fputs(input_telefone,cadastro);

    // posicionar o cursor ao final da linha
    fseek(cadastro,0,SEEK_END);
    fputs(label_idade,cadastro);
    fputs(input_idade,cadastro);


    fseek(cadastro,0,SEEK_END);
    fputs("---------------------------------------------------",cadastro);
    fclose(cadastro);
    printf("\nDados cadastrados com sucesso!\n");
    return 0;
}