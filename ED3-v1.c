/*****************************************
   Enunciado:Conversor de moedeas
   Autor: Wilson da Silva Goltara
   Histórico de versões:V1
*****************************************/

/* Importações de Bibliotecas */
#include <stdio.h>

/* Funçõe principal */
int main() {
    /* Declarações de variáveis */
    int moeda;
    float btc=276025.74, usd=5.68, gbp=7.92, eur=6.86, jpy=0.053, valor_usu;
    // ENTRADA
    printf("=== Conversor ===\n");
    printf("Moedas  || Cotação\n\n");
    printf("1- Bitcoin(BTC) || R$%.2f\n", btc);
    printf("2- Dolar(USD)   || R$%.2f\n", usd);
    printf("3- Libra(GBP)   || R$%.2f\n", gbp);
    printf("4- Euro(EUR)    || R$%.2f\n", eur);
    printf("5- Iene(JPY)    || R$%.2f\n", jpy);
    // PROCESSAMENTO
    printf("Digite o valor a ser convertido: ");
    scanf("%f", &valor_usu);
    printf("Moeda para conversão (numero da tabela): ");
    scanf("%d", &moeda);

    switch(moeda) {
        case 1:
            printf("Voce converteu %.2f reias em %.2f BTC.",valor_usu, valor_usu/btc);
            break;
        case 2:
            printf("Voce converteu %.2f reias em %.2f USD.",valor_usu, valor_usu/usd);
            break;
        case 3:
            printf("Voce converteu %.2f reias em %.2f GBP.",valor_usu, valor_usu/gbp);
            break;
        case 4:
            printf("Voce converteu %.2f reias em %.2f EUR.",valor_usu, valor_usu/eur);
            break;
        case 5:
            printf("Voce converteu %.2f reias em %.2f JPY.",valor_usu, valor_usu/jpy);
            break;
        default:
            printf("Voce não escolheu nenhuma moeda.");

    if (moeda < 0 || moeda > 5) {
        printf("Erro ao escolher moeda!!");
    }}
    return 0;
}
