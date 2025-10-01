#include <stdio.h>

int main() {
    char estado, codigo_carta[4], nome_cidade[30], estado2, codigo_carta2[4], nome_cidade2[30];
    int pontos_turisticos, pontos_turisticos2, opcao;
    int populacao, populacao2;
    float area, pib, area2, pib2, densidade, densidade2, pib_percapita, pib_percapita2, densidade_invertida, densidade_invertida2;

    printf("******* CARTA 1 ********\n");
    printf("Estado: Uma letra de 'A' a 'H' (representando um dos oito estados): ");
    scanf(" %c", &estado);

    printf("Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
    scanf("%s", &codigo_carta);
    
    printf("Nome da Cidade: O nome da cidade: ");
    scanf("%s", &nome_cidade);

    printf("População: O número de habitantes da cidade: ");
    scanf("%d", &populacao);

    printf("Área (em km²): A área da cidade em quilômetros quadrados: ");
    scanf("%f", &area);

    printf("PIB: O Produto Interno Bruto da cidade: ");
    scanf("%f", &pib);

    printf("Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade: ");
    scanf("%i", &pontos_turisticos); 

    printf("\n******* CARTA 2 ********\n");
    printf("Estado: Uma letra de 'A' a 'H' (representando um dos oito estados): ");
    scanf(" %c", &estado2);

    printf("Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
    scanf("%s", &codigo_carta2);
    
    printf("Nome da Cidade: O nome da cidade: ");
    scanf("%s", &nome_cidade2);

    printf("População: O número de habitantes da cidade: ");
    scanf("%d", &populacao2);

    printf("Área (em km²): A área da cidade em quilômetros quadrados: ");
    scanf("%f", &area2);

    printf("PIB: O Produto Interno Bruto da cidade: ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade: ");
    scanf("%i", &pontos_turisticos2); 

    densidade = populacao / area;
    densidade2 = populacao2/ area2;

    printf("\nQual atributo comparar?\n");
    printf("1 - População, 2 - Área, 3 - PIB\n");
    printf("4 - Pontos turísticos & 5 - Densidade demográfica\n");
    scanf("%d", &opcao);

    switch (opcao){
        case 1:
                printf("\n***OPÇÃO ESCOLHIDA FOI POPULAÇÃO***\n");
                if (populacao > populacao2){
                    printf("\nCarta 1 venceu!\n");
                    printf("População carta 1 = %d\n", populacao);
                    printf("População carta 2 = %d\n", populacao2);
                } else if (populacao < populacao2) {
                    printf("\nCarta 2 venceu!\n");
                    printf("População carta 2 = %d\n", populacao2);
                    printf("População carta 1 = %d\n", populacao);
                } else {
                    printf("\n***EMPATE!!!***\n");
                }
            break;

            case 2:
                printf("\n***OPÇÃO ESCOLHIDA FOI ÁREA***\n");
                if (area > area2){
                    printf("\nCarta 1 venceu!\n");
                    printf("Área carta 1 = %f\n", area);
                    printf("Área carta 2 = %f\n", area2);
                } else if (area < area2){
                    printf("\nCarta 2 venceu!\n");
                    printf("Área carta 2 = %f\n", area2);
                    printf("Área carta 1 = %f\n", area);
                } else {
                    printf("\n***EMPATE!!!***\n");
                }
            break;

            case 3:
                printf("\n***OPÇÃO ESCOLHIDA FOI PIB***\n");
                if (pib > pib2){
                    printf("\nCarta 1 venceu!\n");
                    printf("PIB carta 1 = %f\n", pib);
                    printf("PIB carta 2 = %f\n", pib2);
                } else if ((pib < pib2)) {
                    printf("\nCarta 2 venceu!\n");
                    printf("PIB carta 2 = %fd\n", pib2);
                    printf("PIB carta 1 = %f\n", pib);
                } else {
                    printf("\n***EMPATE!!!***\n");
                }
            break;

            case 4:
                printf("\n***OPÇÃO ESCOLHIDA FOI PONTOS TURÍSTICOS***\n");
                if (pontos_turisticos > pontos_turisticos2){
                    printf("\nCarta 1 venceu!\n");
                    printf("Pontos turísticos carta 1 = %d\n", pontos_turisticos);
                    printf("Pontos turísticos carta 2 = %d\n", pontos_turisticos2);
                } else if ((pontos_turisticos < pontos_turisticos2)) {
                    printf("\nCarta 2 venceu!\n");
                    printf("Pontos turísticos carta 2 = %d\n", pontos_turisticos2);
                    printf("Pontos turísticos carta 1 = %d\n", pontos_turisticos);
                } else {
                    printf("\n***EMPATE!!!***\n");
                }
            break;
            
            case 5:
                printf("\n***OPÇÃO ESCOLHIDA FOI DENSIDADE DEMOGRÁFICA***\n");
                if (densidade < densidade2){
                    printf("\nCarta 1 venceu!\n");
                    printf("Densidade carta 1 = %f\n", densidade);
                    printf("Densidade carta 2 = %f\n", densidade2);
                } else if (densidade > densidade2) {
                    printf("\nCarta 2 venceu!\n");
                    printf("Densidade carta 2 = %f\n", densidade2);
                    printf("Densidade carta 1 = %f\n", densidade);
                } else {
                    printf("\n***EMPATE!!!***\n");
                }
            break;
        default:
            printf("\n NÚMERO ESCOLHIDO INVÁLIDO! ***\n");
    }
    return 0;
}