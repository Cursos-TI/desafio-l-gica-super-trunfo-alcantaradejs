#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {

    // Declarando vasiaveis Carta 1
    char estadoC1 = 'A'; // letra de 'A' a 'H'
    char codigoC1[3] = "01"; // {estado} + numero de 01 a 04
    char nomeCidadeC1[60] = "São Paulo";
    unsigned long int populacaoC1 = 12325000;
    float areaC1 = 1521.11; // em km²
    float PIBC1 = 699.28;
    int pontosTuristicosC1 = 50;

    // Declarando vasiaveis Carta 2
    char estadoC2 = 'A'; // letra de 'A' a 'H'
    char codigoC2[3] = "02"; // {estado} + numero de 01 a 04
    char nomeCidadeC2[60] = "Rio de Janeiro";
    unsigned long int populacaoC2 = 6748000;
    float areaC2 = 1200.25; // em km²
    float PIBC2 = 300.5;
    int pontosTuristicosC2 = 30;

    //Banner
    printf("+-----------------------------------+\n");
    printf("|                                   |\n");
    printf("|       Super Trunfo (teste)        |\n");
    printf("|                                   |\n");
    printf("+-----------------------------------+\n");

    // Cadastro carta 1
    /*printf("\nPor favor insira as informações da Carta 1\n");
    
    printf("Digite o estado da  (uma letra de 'A' a 'H'):\n");
    scanf(" %c", &estadoC1);

    printf("Digite o codigo da carta (de 01 a 04):\n");
    scanf("%s", codigoC1);

    scanf("%c"); // remove \n do buffer
    printf("Digite o nome da cidade:\n");
    fgets(nomeCidadeC1, 60, stdin);
    nomeCidadeC1[strcspn(nomeCidadeC1, "\n")] = 0; // remove o \n da string

    printf("Digite o numero de habitantes da cidade:\n");
    scanf("%i", &populacaoC1);

    printf("Digite a área da cidade em km² (não digite 'Km²'):\n");
    scanf("%f", &areaC1);

    printf("Digite o PIB da cidade (em bilhões de reais):\n");
    scanf("%f", &PIBC1);

    printf("Digite o número de pontos turísticos da cidade:\n");
    scanf("%i", &pontosTuristicosC1);


    printf("\n-------------------------------------------------------------------\n"); // divisor

    // Cadastro carta 2
    printf("\nPor favor insira as informações da Carta 2\n");
    
    printf("Digite o codigo da carta (uma letra de 'A' a 'H'):\n");
    scanf(" %c", &estadoC2);

    printf("Digite o codigo da carta (de 01 a 04):\n");
    scanf("%s", codigoC2);

    scanf("%c"); // remove \n do buffer
    printf("Digite o nome da cidade:\n");
    fgets(nomeCidadeC2, 60, stdin);
    nomeCidadeC2[strcspn(nomeCidadeC2, "\n")] = 0; // remove o \n da string

    printf("Digite o numero de habitantes da cidade:\n");
    scanf("%i", &populacaoC2);

    printf("Digite a área da cidade em km² (não digite 'Km²'):\n");
    scanf("%f", &areaC2);

    printf("Digite o PIB da cidade (em bilhões de reais):\n");
    scanf("%f", &PIBC2);

    printf("Digite o número de pontos turísticos da cidade:\n");
    scanf("%i", &pontosTuristicosC2);*/

    // Calculando desnsidaed,PIB per capita e super poder
    float desidadePopulacionalC1 = (float) populacaoC1 / areaC1; // hab/km²
    float PIBPerCapitaC1 = (float) PIBC1 * 1000000000.00 / populacaoC1;
    float superPoderC1 =  (float) populacaoC1 + areaC1 + (PIBC1 * 1000000000.00) + pontosTuristicosC1 + PIBPerCapitaC1 + (1.00/desidadePopulacionalC1);

    float desidadePopulacionalC2 = (float) populacaoC2 / areaC2; // hab/km²
    float PIBPerCapitaC2 = (float) PIBC2 * 1000000000.00 / populacaoC2;
    float superPoderC2 =  (float) populacaoC2 + areaC2 + (PIBC2 * 1000000000.00) + pontosTuristicosC2 + PIBPerCapitaC2 + (1.00/desidadePopulacionalC2);


    //Comparação das Cartas
    printf("+-----------------------------------+\n");
    printf("|        Comparando Cartas          |\n");
    printf("+-----------------------------------+\n\n");

    printf("[ População ]\n");
    printf("Carta 1 - %s (%c%s): %lu habitantes\n", nomeCidadeC1, estadoC1, codigoC1, populacaoC1);
    printf("Carta 2 - %s (%c%s): %lu habitantes\n", nomeCidadeC2, estadoC2, codigoC2, populacaoC2);
    

    printf("\n-------------------------------------\n\n"); // rodape


    return 0;
}
