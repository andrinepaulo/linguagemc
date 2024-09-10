# include <stdio.h>

int main(){
    int v1, v2, rs;
    
    printf("Digite um número:\n");
    
    // o comando scanf, realiza a captura do número que o usuário irá digitar. Após capturar o número será alocado na variável v1
    scanf("%d",&v1);

    printf("Digite outro número:\n");
    scanf("%d",&v2);

    printf("O valor de v1 é %d e está em %p\n", v1, &v1);
    printf("O valor de v2 é %d e está em %p\n", v2, &v2);

    rs = v1 + v2;
    printf("O resultado da soma é %d \n" ,rs);
    
    return 0;
}