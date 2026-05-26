// O PROGRAMA DEVE ESCREVER 4 NOTAS, REALIZAR O CÁLCULO DA MÉDIA E VERIFICAR SE:
//    - A NOTA MÉDIA FOR MAIOR OU IGUAL A 7, O ALUNO ESTARÁ APROVADO; CASO CONTRÁRIO ESTARÁ REPROVADO

#include <stdio.h>
#include <stdlib.h>

int main(){
    int  nota1, nota2, nota3, nota4;

    // Comando System que chama uma excecução do sistema operacional
    // que, neste caso será o comando clear

    system("clear");

    printf("Digite a primeira nota e tecle ENTER\n");
    scanf("%d",&nota1);

    printf("Digite a segunda nota e tecle ENTER\n");
    scanf("%d",&nota2);

    printf("Digite a terceira nota e tecle ENTER\n");
    scanf("%d",&nota3);

    printf("Digite a quarta nota e tecle ENTER\n");
    scanf("%d",&nota4);

    int media = nota1 + nota2 + nota3 + nota4;

    if ( media / 4 >= 7){
        printf("VOCÊ ESTÁ APROVADO\n");
    }
    else { 
        printf("VOCÊ ESTÁ REPROVADO\n");
    }

    printf("\n##################################################\n");
    
    printf("Endereço de memória da variável nota1 %p \n",&nota1);
    printf("Endereço de memória da variável nota2 %p \n",&nota2);
    printf("Endereço de memória da variável nota3 %p \n",&nota3);
    printf("Endereço de memória da variável nota4 %p \n",&nota4);
    printf("Endereço de memória da variável media %p \n",&media);


    return 0;
}



