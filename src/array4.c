#include <stdio.h>

int main(){
    int num[] = {10,5,8,14,13,28};
    int pos;
    // variável utilizada para somar os números que estão acima, guardar o resultado da soma dos números
    int rs = 0;
    for(pos = 0; pos <= 5 ; pos++){
        printf("%d\n",num [pos]);
        rs += num [pos];
    }
    printf("---------------\n%d\n",rs);
    return 0;
}