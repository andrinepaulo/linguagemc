#include <stdio.h>

// este programa exibe o maior valor do array, utilizamos estruturas de comparação (maior/menor) para comparar os valores até ir chegando no maior valor possível
int main(){
    int num[] = {10,5,8,14,13,28};
    int pos;
    int maior = num[0];
        for(pos = 0; pos <= 5 ; pos++){
            if(num[pos] > maior){
            maior = num[pos];
            }
        }
        printf("O maior valor do array é %d\n",maior);
        
   return 0;
}