#include <stdio.h>

int main(){
    int final_placa;
    printf("Digite o número final da placa do seu veículo:\n");
    scanf("%d",&final_placa);

    switch(final_placa){
        case 1:
            printf("Rodízio na segunda-feira\n");
            break;
        case 2:
            printf("Rodízio na segunda-feira\n");
            break;
        case 3:
            printf("Rodízio na terça-feira\n");
            break;
        case 4:
            printf("Rodízio na terça-feira\n");
            break;
        case 5:
            printf("Rodízio na quarta-feira\n");
            break;
        case 6:
            printf("Rodízio na quarta-feira\n");
            break;
        case 7:
            printf("Rodízio na quinta-feira\n");
            break;
        case 8:
            printf("Rodízio na quinta-feira\n");
            break;
        case 9:
            printf("Rodízio na sexta-feira\n");
            break;
        case 0:
            printf("Rodízio na sexta-feira\n");
            break;
        default:
            printf("Final de placa inexistente\n");
            break;
    }
    return 0;

}