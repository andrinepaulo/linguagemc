#include <stdio.h>

int main(){
    int linha, coluna;
    linha = 1;
    coluna = 1;
    while(linha <= 20){
        while(coluna <= linha){
            printf("@");
            coluna++;
        }
        //Voltar a contagem da coluna ao valor
        //inicial 1
        coluna = 1;
        printf("\n");
        linha++;
    }
    return 0;
}