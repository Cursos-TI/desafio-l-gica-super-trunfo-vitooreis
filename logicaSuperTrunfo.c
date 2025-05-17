#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    char estado1[3], estado2[3];
    char codigo1[4], codigo2[4];
    char nomeCidade1[50], nomeCidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    // Cadastro das Cartas:
    // Solicitar ao usuário os dados das cidades
    printf("Insira os dados da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %s", estado1);
    printf("Código da Carta (ex: A01): ");
    scanf(" %s", codigo1);
    getchar();
    printf("Nome da Cidade: ");
    fgets(nomeCidade1, sizeof(nomeCidade1), stdin);
    nomeCidade1[strcspn(nomeCidade1, "\n")] = 0;
    printf("População: ");
    scanf("%lu", &populacao1);  
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\nInsira os dados da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %s", estado2);
    printf("Código da Carta (ex: B02): ");
    scanf(" %s", codigo2);
    getchar();
    printf("Nome da Cidade: ");
    fgets(nomeCidade2, sizeof(nomeCidade2), stdin);
    nomeCidade2[strcspn(nomeCidade2, "\n")] = 0;
    printf("População: ");
    scanf("%lu", &populacao2);  
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Calculando a Densidade Populacional e o PIB per Capita para a Carta 1
    float densidadePopulacional1 = (float)populacao1 / area1;
    float pibPerCapita1 = pib1 * 1e9 / populacao1;

    // Calculando a Densidade Populacional e o PIB per Capita para a Carta 2
    float densidadePopulacional2 = (float)populacao2 / area2;
    float pibPerCapita2 = pib2 * 1e9 / populacao2;

    // Menu Interativo com Switch
    int escolha;
    printf("\nEscolha um atributo para comparação:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha);

    // Comparação com base na escolha
    switch (escolha) {
        case 1: // Comparar População
            printf("\nComparação de Cartas (Atributo: População):\n");
            printf("Carta 1 - %s (%s): %lu\n", nomeCidade1, estado1, populacao1);
            printf("Carta 2 - %s (%s): %lu\n", nomeCidade2, estado2, populacao2);
            if (populacao1 > populacao2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
            } else if (populacao2 > populacao1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
            } else {
                printf("Resultado: Empate! Ambas as cartas têm a mesma população.\n");
            }
            break;

        case 2: // Comparar Área
            printf("\nComparação de Cartas (Atributo: Área):\n");
            printf("Carta 1 - %s (%s): %.2f km²\n", nomeCidade1, estado1, area1);
            printf("Carta 2 - %s (%s): %.2f km²\n", nomeCidade2, estado2, area2);
            if (area1 > area2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
            } else if (area2 > area1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
            } else {
                printf("Resultado: Empate! Ambas as cartas têm a mesma área.\n");
            }
            break;

        case 3: // Comparar PIB
            printf("\nComparação de Cartas (Atributo: PIB):\n");
            printf("Carta 1 - %s (%s): %.2f bilhões\n", nomeCidade1, estado1, pib1);
            printf("Carta 2 - %s (%s): %.2f bilhões\n", nomeCidade2, estado2, pib2);
            if (pib1 > pib2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
            } else if (pib2 > pib1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
            } else {
                printf("Resultado: Empate! Ambas as cartas têm o mesmo PIB.\n");
            }
            break;

        case 4: // Comparar Pontos Turísticos
            printf("\nComparação de Cartas (Atributo: Pontos Turísticos):\n");
            printf("Carta 1 - %s (%s): %d pontos\n", nomeCidade1, estado1, pontosTuristicos1);
            printf("Carta 2 - %s (%s): %d pontos\n", nomeCidade2, estado2, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
            } else {
                printf("Resultado: Empate! Ambas as cartas têm o mesmo número de pontos turísticos.\n");
            }
            break;

        case 5: // Comparar Densidade Populacional
            printf("\nComparação de Cartas (Atributo: Densidade Populacional):\n");
            printf("Carta 1 - %s (%s): %.2f hab/km²\n", nomeCidade1, estado1, densidadePopulacional1);
            printf("Carta 2 - %s (%s): %.2f hab/km²\n", nomeCidade2, estado2, densidadePopulacional2);
            if (densidadePopulacional1 < densidadePopulacional2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1); // Menor é melhor
            } else if (densidadePopulacional2 < densidadePopulacional1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2); // Menor é melhor
            } else {
                printf("Resultado: Empate! Ambas as cartas têm a mesma densidade populacional.\n");
            }
            break;

        default:
            printf("Opção inválida! Por favor, escolha uma opção válida entre 1 e 5.\n");
            break;
    }

    return 0;
}
