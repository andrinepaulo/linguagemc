#include <stdio.h>
// para trabalhar com arquivos, é necessário
// importar a biblioteca stdlib
#include <stdlib.h>
//importar a biblioteca de texto(string) para escrever 
// em arquivos de texto
#include <string.h>

int main(){
    system("clear");//limpa o terminal

    // Declaração da variávei palavra como um ponteiro
    // para guardar os caracteres que forma uma string
    char *palavra;
    char *label_nome="Nome: ";
    
    printf("Digite o seu nome completo:\n");
    // scanf("%s",palavra);
    // O comando fgets(f->file | gets -> obter). Assim iremos
    //obter o texto que o usuário está digitando no terminal.
    //definimos também a quantidade de caracteres aceitos pelo
    //fgets e o parâmetro stdin(std->standard | in -> entrada)
    //ele olha para entrada padrão, que neste caso é teclado
    //pelo terminal
    fgets(palavra,20,stdin);

    FILE *ar;
    ar = fopen("files/teste.txt","a+");
    fseek(ar,0,SEEK_END);
    
    fputs(label_nome,ar);
    fputs(palavra,ar);
    
    printf("O arquivo está no endereço:%p\n",ar);

    fclose(ar);    

    return 0;
}