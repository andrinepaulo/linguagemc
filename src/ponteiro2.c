#include <stdio.h>
// não precisava colocar o lib, colocamos mas não usamos na atividade anterior


int soma(int *v1, int *v2){
    printf("O valor de v1 em soma é %d\n",*v1);
    printf("O endereço de v1 em soma é %p\n",v1);

    printf("O valor de v2 em soma é %d\n",*v2);
    printf("O endereço de v2 em soma é %p\n",v2);
    
    return *v1+*v2;
    
}

int main(){
    int num1, num2;
    num1 = 10;
    num2 = 15;

    int *pnum1 = &num1;
    int *pnum2 = &num2;

    printf("O valor de num é %d\n",num1);
    printf("O endereço de num é %p\n",pnum1);

    printf("O valor de num2 é %d\n",num2);
    printf("O endereço de num2 é %p\n",pnum2);

    printf("O resultado é %d\n",soma(&num1,&num2));

    return 0;

}