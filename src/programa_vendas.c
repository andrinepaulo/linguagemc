#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // DECLARAÇÃO DE VARIÁVEIS
    char nomeCliente[50], nomeVendedor[50], nomeProduto[50];
    float precoOriginal, valorFinal, valorParcela;
    int formaPagamento, numParcelas = 1;

    printf("--- SISTEMA DE VENDAS ---\n\n");

    // ENTRADA DE DADOS: TEXTOS
    // Usamos fgets para permitir nomes com espaços. 
    // A função strcspn serve para remover o 'Enter' (\n) que o fgets captura.
    printf("Nome do Cliente: ");
    fgets(nomeCliente, 50, stdin);
    nomeCliente[strcspn(nomeCliente, "\n")] = 0;

    printf("Nome do Vendedor: ");
    fgets(nomeVendedor, 50, stdin);
    nomeVendedor[strcspn(nomeVendedor, "\n")] = 0;

    printf("Nome do Produto: ");
    fgets(nomeProduto, 50, stdin);
    nomeProduto[strcspn(nomeProduto, "\n")] = 0;

    // ENTRADA DE DADOS: NÚMEROS
    printf("Preço original do Produto: R$ ");
    scanf("%f", &precoOriginal);

    printf("\n--- Forma de Pagamento ---\n");
    printf("1 - A vista (10%% de desconto)\n");
    printf("2 - Parcelado (15%% de acrescimo)\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &formaPagamento);

    // LÓGICA DE NEGÓCIO: CÁLCULOS
    if (formaPagamento == 1) {
        // Desconto de 10% (multiplicar por 0.10 e subtrair, ou apenas multiplicar por 0.90)
        valorFinal = precoOriginal - (precoOriginal * 0.10);
        valorParcela = valorFinal; // À vista é uma parcela única
    } 
    else if (formaPagamento == 2) {
        // Acréscimo de 15%
        valorFinal = precoOriginal + (precoOriginal * 0.15);
        printf("Digite o numero de parcelas: ");
        scanf("%d", &numParcelas);
        valorParcela = valorFinal / numParcelas;
    } 
    else {
        printf("\nOpcao de pagamento invalida! Encerrando...\n");
        return 1; // Encerra o programa com erro
    }

    // SAÍDA NO CONSOLE (TELA)
    printf("\n================ RESUMO DA VENDA ================\n");
    printf("Cliente: %s\n", nomeCliente);
    printf("Vendedor: %s\n", nomeVendedor);
    printf("Produto: %s\n", nomeProduto);
    printf("Valor Original: R$ %.2f\n", precoOriginal);
    printf("Valor Final: R$ %.2f\n", valorFinal);
    if (formaPagamento == 2) {
        printf("Forma de Pagamento: Parcelado em %dx de R$ %.2f\n", numParcelas, valorParcela);
    } else {
        printf("Forma de Pagamento: A vista\n");
    }
    printf("=================================================\n");

    // GRAVAÇÃO EM ARQUIVO DE TEXTO
    // "w" (write) cria o arquivo ou sobrescreve se já existir
    FILE *arquivo = fopen("files/registro_de_venda.txt", "w"); 
    
    if (arquivo == NULL) {
        printf("\nErro ao tentar criar o arquivo de texto.\n");
        return 1;
    }

    // Escrevendo no arquivo usando fprintf
    fprintf(arquivo, "================ RESUMO DA VENDA ================\n");
    fprintf(arquivo, "Cliente: %s\n", nomeCliente);
    fprintf(arquivo, "Vendedor: %s\n", nomeVendedor);
    fprintf(arquivo, "Produto: %s\n", nomeProduto);
    fprintf(arquivo, "Valor Original: R$ %.2f\n", precoOriginal);
    fprintf(arquivo, "Valor Final: R$ %.2f\n", valorFinal);
    if (formaPagamento == 2) {
        fprintf(arquivo, "Forma de Pagamento: Parcelado em %dx de R$ %.2f\n", numParcelas, valorParcela);
    } else {
        fprintf(arquivo, "Forma de Pagamento: A vista\n");
    }
    fprintf(arquivo, "=================================================\n");

    fclose(arquivo); // É fundamental fechar o arquivo para salvar as alterações no disco
    
    printf("\n[Sucesso! Os dados foram gravados no arquivo 'registro_de_venda.txt']\n");

    return 0;
}