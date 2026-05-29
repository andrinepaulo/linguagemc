#include <stdio.h>
#include <stdlib.h>

// vamos criar uma variável do tipo inteira que guarda o valor 35

int main(){

    int a = 35;
    int *pa = &a; //poderia ser *ptra ou *aptr ou *pa dependendo de como você quiser contan
    // to que aponte e tenha de preferência o P e principalmente o * para apontar para o en

    printf("O valor da variável a é %d\n",a);
    printf("O endereço de memória da variável a é %p\n",pa);
    printf("O valor que está no endereço da variável a é %d\n",*pa);

    return 0;
    
}