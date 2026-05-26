#include <stdio.h>

int main(){
    int ano;
    printf("Digite um ano e tecle ENTER\n");
    scanf("%d",&ano);

    if ( ano % 4 == 0 ){
        printf("O ano %d é bissexto\n",ano);
    }
    else{
        printf("O ano %d NÃO é bissexto\n",ano);
    }




    return 0;
}