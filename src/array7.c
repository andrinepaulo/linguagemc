#include <stdio.h>

int main(){
    // se estou utilizando char é porque utilizarei um caractere, se utilizo mais de um vira um array, vira uma coleção
    // então tenho que dizer para o programa também
    // texto ocupa muito espaço em memória, evitar sempre que possível
    char nome[]="Marcelo";
    int i = 0;
    
    
    
    
    for (i ; i <= 6 ; i++){
    printf("%c -> %d -> %p\n",nome[i], nome[i], &nome[i]);
    }
   return 0;
}
