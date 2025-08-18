#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    char c; // limpar buffer

    // Declarando vasiaveis Carta 1
    char nomePaisC1[60]; 
    //char estadoC1; // letra de 'A' a 'H'
    //char codigoC1[3]; // {estado} + numero de 01 a 04
    //char nomeCidadeC1[60];
    unsigned long int populacaoC1;
    float areaC1; // em km²
    float PIBC1;
    int pontosTuristicosC1;

    // Declarando vasiaveis Carta 2
    char nomePaisC2[60]; 
    // char estadoC2; // letra de 'A' a 'H'
    // char codigoC2[3]; // {estado} + numero de 01 a 04
    // char nomeCidadeC2[60];
    unsigned long int populacaoC2;
    float areaC2; // em km²
    float PIBC2;
    int pontosTuristicosC2;

    //Banner
    printf("+-----------------------------------+\n");
    printf("|                                   |\n");
    printf("|           Super Trunfo            |\n");
    printf("|                                   |\n");
    printf("+-----------------------------------+\n");

    // Cadastro carta 1
    printf("\nPor favor insira as informações da Carta 1\n");
    
    // printf("Digite o estado da  (uma letra de 'A' a 'H'):\n");
    // scanf(" %c", &estadoC1);

    // printf("Digite o codigo da carta (de 01 a 04):\n");
    // scanf("%s", codigoC1);

    // scanf("%c", &c); // remove \n do buffer
    // printf("Digite o nome da cidade:\n");
    // fgets(nomeCidadeC1, 60, stdin);
    // nomeCidadeC1[strcspn(nomeCidadeC1, "\n")] = 0; // remove o \n da string

    printf("Digite o nome do País:\n");
    fgets(nomePaisC1, 60, stdin);
    nomePaisC1[strcspn(nomePaisC1, "\n")] = 0; // remove o \n da string

    printf("Digite o numero de habitantes da País:\n");
    scanf("%i", &populacaoC1);

    printf("Digite a área da País em km² (não digite 'Km²'):\n");
    scanf("%f", &areaC1);

    printf("Digite o PIB da País (em bilhões de reais):\n");
    scanf("%f", &PIBC1);

    printf("Digite o número de pontos turísticos da País:\n");
    scanf("%i", &pontosTuristicosC1);


    printf("\n-------------------------------------------------------------------\n"); // divisor

    // Cadastro carta 2
    printf("\nPor favor insira as informações da Carta 2\n");
    
    // printf("Digite o codigo da carta (uma letra de 'A' a 'H'):\n");
    // scanf(" %c", &estadoC2);

    // printf("Digite o codigo da carta (de 01 a 04):\n");
    // scanf("%s", codigoC2);

    // scanf("%c", &c); // remove \n do buffer
    // printf("Digite o nome da cidade:\n");
    // fgets(nomeCidadeC2, 60, stdin);
    // nomeCidadeC2[strcspn(nomeCidadeC2, "\n")] = 0; // remove o \n da string

    scanf("%c", &c); // remove \n do buffer
    printf("Digite o nome do País:\n");
    fgets(nomePaisC2, 60, stdin);
    nomePaisC2[strcspn(nomePaisC2, "\n")] = 0; // 

    printf("Digite o numero de habitantes da País:\n");
    scanf("%i", &populacaoC2);

    printf("Digite a área da País em km² (não digite 'Km²'):\n");
    scanf("%f", &areaC2);

    printf("Digite o PIB da País (em bilhões de reais):\n");
    scanf("%f", &PIBC2);

    printf("Digite o número de pontos turísticos da País:\n");
    scanf("%i", &pontosTuristicosC2);

    // Calculando desnsidaed,PIB per capita e super poder
    float densidadePopulacionalC1 = (float) populacaoC1 / areaC1; // hab/km²
    // float PIBPerCapitaC1 = (float) PIBC1 * 1000000000.00 / populacaoC1;
    // float superPoderC1 =  (float) populacaoC1 + areaC1 + (PIBC1 * 1000000000.00) + pontosTuristicosC1 + PIBPerCapitaC1 + (1.00/densidadePopulacionalC1);

    float densidadePopulacionalC2 = (float) populacaoC2 / areaC2; // hab/km²
    // float PIBPerCapitaC2 = (float) PIBC2 * 1000000000.00 / populacaoC2;
    // float superPoderC2 =  (float) populacaoC2 + areaC2 + (PIBC2 * 1000000000.00) + pontosTuristicosC2 + PIBPerCapitaC2 + (1.00/densidadePopulacionalC2);


    //Comparação das Cartas
    printf("\n+-----------------------------------+\n");
    printf("|        Comparando Cartas          |\n");
    printf("+-----------------------------------+\n");

     // menu seleção de atributo
    int opicao;

    printf("\nSelecione o Atributo para comparar: \n");
    printf("[1] População \n");
    printf("[2] Área \n");
    printf("[3] PIB \n");
    printf("[4] Pontos Turísticos \n");
    printf("[5] Densidade demogáfica \n");
    scanf("%d", &opicao);

    printf("\n-------------------------------------\n\n");

    switch (opicao){
        case 1: // comparacao população  
            printf("[ População ]\n");
            printf("Carta 1 - %s: %lu habitantes\n", nomePaisC1, populacaoC1);
            printf("Carta 2 - %s: %lu habitantes\n", nomePaisC2, populacaoC2);
            
            if (populacaoC1 > populacaoC2) {
                printf("Resultado: Carta 1 (%s) Venceu!\n", nomePaisC1);
            } else if (populacaoC1 < populacaoC2) {
                printf("Resultado: Carta 1 (%s) Venceu!\n", nomePaisC2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 2: // comparacao area
            printf("[ Área ]\n");
            printf("Carta 1 - %s: %.2f Km²\n", nomePaisC1, areaC1);
            printf("Carta 2 - %s: %.2f Km²\n", nomePaisC2, areaC2);
            
            if (areaC1 > areaC2) {
                printf("Resultado: Carta 1 (%s) Venceu!\n", nomePaisC1);
            } else if (areaC1 < areaC2){
                printf("Resultado: Carta 1 (%s) Venceu!\n", nomePaisC2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3: // comparacao PIB
            printf("[ PIB ]\n");
            printf("Carta 1 - %s: %.2f bilhões de Reais\n", nomePaisC1, PIBC1);
            printf("Carta 2 - %s: %.2f bilhões de Reais\n", nomePaisC2, PIBC2);
            
            if (PIBC1 > PIBC2) {
                printf("Resultado: Carta 1 (%s) Venceu!\n", nomePaisC1);
            } else if (PIBC1 < PIBC2) {
                printf("Resultado: Carta 1 (%s) Venceu!\n", nomePaisC2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 4: // comparacao pontosTuristicos
            printf("[ Pontos Turisticos ]\n");
            printf("Carta 1 - %s: %d\n", nomePaisC1, pontosTuristicosC1);
            printf("Carta 2 - %s: %d\n", nomePaisC2, pontosTuristicosC2);
            
            if (pontosTuristicosC1 > pontosTuristicosC2) {
                printf("Resultado: Carta 1 (%s) Venceu!\n", nomePaisC1);
            } else if(pontosTuristicosC1 < pontosTuristicosC2) {
                printf("Resultado: Carta 1 (%s) Venceu!\n", nomePaisC2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 5: // comparacao densidadePopulacional
            printf("[ Densidade Demografica ]\n");
            printf("Carta 1 - %s: %.2f hab/Km²\n", nomePaisC1, densidadePopulacionalC1);
            printf("Carta 2 - %s: %.2f hab/Km²\n", nomePaisC2, densidadePopulacionalC2);
            
            if (densidadePopulacionalC1 < densidadePopulacionalC2) {
                printf("Resultado: Carta 1 (%s) Venceu!\n", nomePaisC1);
            } else if(densidadePopulacionalC1 > densidadePopulacionalC2) {
                printf("Resultado: Carta 1 (%s) Venceu!\n", nomePaisC2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default:
            printf("[!] Opição Invalida\n");
            break;
    }

    // rodape
    printf("\n-------------------------------------\n\n");


    return 0;
}
