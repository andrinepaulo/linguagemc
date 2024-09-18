# include <stdio.h>

int main(){
    float n1, n2, n3, n4, media;
    
    printf("Digite uma nota: \n");
    scanf("%f",&n1);
    printf("Digite uma nota: \n");
    scanf("%f",&n2);
    printf("Digite uma nota: \n");
    scanf("%f",&n3);
    printf("Digite uma nota: \n");
    scanf("%f",&n4);
    
    media = (n1 + n2 + n3 + n4) /4;
    
    if(media >= 6)
    {
        printf("Aprovado\n");
    }
    else
    {
        printf("Reprovado\n");

    }
    return 0;

}