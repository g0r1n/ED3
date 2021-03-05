/*****************************************
   Enunciado:Conversor de moedeas
   Autor: Wilson da Silva Goltara
   Histórico de versões:V1
*****************************************/

/* Importações de Bibliotecas */
#include <stdio.h>

/* Funçõe principal */
int main() {
    /* Declarações de variáveis */                                          /*Declarei as variaveis e já assumi o valor das moedas.*/
    int moeda;
    float btc=276025.74, usd=5.68, gbp=7.92, eur=6.86, jpy=0.053, valor_usu;
    // ENTRADA                                              /*No primeiro momento aprensentei as moedas e recolhi os dados do valor a ser convertido*/
    printf("=== Conversor ===\n");                          /*e qual a moeda que o usuaário deseja utilizar.*/
    printf("Moedas  || Cotação\n\n");
    printf("1- Bitcoin(BTC) || R$%.2f\n", btc);
    printf("2- Dolar(USD)   || R$%.2f\n", usd);
    printf("3- Libra(GBP)   || R$%.2f\n", gbp);
    printf("4- Euro(EUR)    || R$%.2f\n", eur);
    printf("5- Iene(JPY)    || R$%.2f\n", jpy);
    // PROCESSAMENTO
    printf("Digite o valor a ser convertido:R$ ");
    scanf("%f", &valor_usu);
    printf("Moeda para conversão (numero da tabela): ");
    scanf("%d", &moeda);

    switch(moeda) {                                                                        /*No segundo momento da função principal, usei o "switch - case" para já imprimir*/
        case 1:                                                                            /* a conversão de reias para a moeda selecionada, colocando um if para verificar*/
            printf("Voce converteu %.2f reias em %.2f BTC.\n",valor_usu, valor_usu/btc);     /* se a moeda realmente se encaixa no que foi pedido.*/
            break;
        case 2:
            printf("Voce converteu %.2f reias em %.2f USD.\n",valor_usu, valor_usu/usd);
            break;
        case 3:
            printf("Voce converteu %.2f reias em %.2f GBP.\n",valor_usu, valor_usu/gbp);
            break;
        case 4:
            printf("Voce converteu %.2f reias em %.2f EUR.\n",valor_usu, valor_usu/eur);
            break;
        case 5:
            printf("Voce converteu %.2f reias em %.2f JPY.\n",valor_usu, valor_usu/jpy);
            break;
        default:
            printf("Erro ao escolher moeda!!\n");

    }
    return 0;
}
