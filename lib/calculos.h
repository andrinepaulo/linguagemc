#include <stdio.h>
#include "../lib/maior_menor.h"
int main(){
 
    int numeros[7] = {15,78,6,0,48,12,4};
 
    printf("o maior valor do array é: %d\n",maior_valor(numeros,7));
    printf("o menor valor do array é: %d\n",menor_valor(numero,7));
 
    printf("mensagem");
    return 0;
}
 
int soma (int array[],int qtd){
 int rs = 0,
 int x;
 for(x = 0; x < qtd ; x++){
    rs += array[x];
 }
return rs;
}
int media (int array[],int qtd){
 int rs = 0,
 int x;
 for(x = 0; x < qtd ; x++){
    rs +=array[x];
     }
     return rs / qtd;
      }
 
      void valores_iguais(int array[], int qdt1, int array2[], int qdt2){
        int i,j;
        for( i = 0 ; i < qtd1 ; i++){
            for(j = 0 ; < qtd2 ; j++){
                if(array1[i] == array2[j]){
                    printf("Este valor %d tem nos dois arrays\n",array1[i]);
                    break; // quando encontrar os número iguais
                        // sai do for de dentro 
                }
            }
        }


      }
 