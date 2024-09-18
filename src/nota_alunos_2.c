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
    
    // Para alunos com média maior ou igual a 6, aprovado
    // Para alunos com média menor ou igual a 4, reprovado
    // Para os demais com notas entre 4 e menor 6, recuperação

    media = (n1 + n2 + n3 + n4) /4;
    
    if(media >= 6)
    {
        printf("Aprovado\n");
    }
    else if(media <= 4){
        printf("A nota média do aluno é %.2f e está reprovado\n",media);
    }
    
    else
    {
        printf("Recuperação\n");

    }
    return 0;

}