#include <stdio.h>
#include "../lib/usuario.h"

// usa-se o comando .. para pegar o arquivo de determinado caminho/pasta


int main(){
    // Declaração da estrutura Usuario como us
    // Criamos uma variável de nome us do tipo Usuario
    Usuario us;

    // Declaração do tipo FILE para manipular arquivos
    FILE *arq;

    // limpar a tela do terminal
    system("clear");
    printf("************************************\n");
    printf("******* Cadastro de Usuário *******\n");
    printf("************************************\n");
    printf("Digite o nome de usuário: \n");
    // fgets pega o que usuário escreveu no terminal
    fgets(us.nomeusuario, sizeof(us.nomeusuario),stdin);
    printf("Digite a senha do usuário: \n");
    fgets(us.senha, sizeof(us.senha),stdin);

    printf("Digite o nível de acesso; \n");
    fgets(us.nivel, sizeof(us.nivel), stdin);
    
    //  Vamos abrir o arquivo para salvar o usuário
    arq = fopen("file/usuarios.txt","a+");
    
    // gravar os dados no aquivos de texto
    fputs(us.nomeusuario,arq);
    fputs(us.senha,arq);
    fputs(us.nivel,arq);
    
    // Para retirar o arquivo da memória será usado o comando fclose
    fclose(arq);

    return 0;
}