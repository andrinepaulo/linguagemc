#include <stdio.h>

int main(){
    
    // a primeira variável o usuário irá digitar para realizar a tabuada, não sabemos qual
    int num;
    // variável que inicia a tabuada em 0(zero) e vai até 10
    int contar=0;
    // variável irá quardar o resultado a multiplicação da variável num com a variável contar
    int rs;

    // printf interage com o usuário enviando ao mesmo uma mensagem perguntando o número para que ele digite
    printf("Digite um número para fazer a tabuada:\n");
    scanf("%d",&num);

    while (contar <=10){
        rs = num * contar;
        printf("%d x %d = %d\n",num,contar,rs);
        contar++;

    }

    return 0;
}