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

    // Menu Interativo com Switch para o primeiro atributo
    int escolha1;
    printf("\nEscolha o primeiro atributo para comparação:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha1);

    // Menu Interativo com Switch para o segundo atributo (excluindo a escolha anterior)
    int escolha2;
    printf("\nEscolha o segundo atributo para comparação:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");

    // Desabilitar a opção já escolhida no primeiro menu
    if (escolha1 == 1) printf("2. Área\n3. PIB\n4. Pontos Turísticos\n5. Densidade Populacional\n");
    if (escolha1 == 2) printf("1. População\n3. PIB\n4. Pontos Turísticos\n5. Densidade Populacional\n");
    if (escolha1 == 3) printf("1. População\n2. Área\n4. Pontos Turísticos\n5. Densidade Populacional\n");
    if (escolha1 == 4) printf("1. População\n2. Área\n3. PIB\n5. Densidade Populacional\n");
    if (escolha1 == 5) printf("1. População\n2. Área\n3. PIB\n4. Pontos Turísticos\n");

    printf("Digite sua escolha: ");
    scanf("%d", &escolha2);

    // Comparação dos atributos escolhidos
    float valor1, valor2;

    // Função para comparar os atributos escolhidos
    switch (escolha1) {
        case 1: valor1 = populacao1; break;
        case 2: valor1 = area1; break;
        case 3: valor1 = pib1; break;
        case 4: valor1 = pontosTuristicos1; break;
        case 5: valor1 = densidadePopulacional1; break;
        default: printf("Opção inválida!\n"); return 0;
    }

    switch (escolha2) {
        case 1: valor2 = populacao2; break;
        case 2: valor2 = area2; break;
        case 3: valor2 = pib2; break;
        case 4: valor2 = pontosTuristicos2; break;
        case 5: valor2 = densidadePopulacional2; break;
        default: printf("Opção inválida!\n"); return 0;
    }

    // Comparando os atributos selecionados
    printf("\nComparação de Cartas:\n");
    if (valor1 > valor2) {
        printf("Carta 1 (%s) venceu no primeiro atributo!\n", nomeCidade1);
    } else if (valor2 > valor1) {
        printf("Carta 2 (%s) venceu no primeiro atributo!\n", nomeCidade2);
    } else {
        printf("Empate no primeiro atributo!\n");
    }

    // Calculando a soma dos atributos
    float soma1 = (escolha1 == 5 ? densidadePopulacional1 : valor1) + (escolha2 == 5 ? densidadePopulacional2 : valor2);
    float soma2 = valor1 + valor2;

    // Comparando a soma
    if (soma1 > soma2) {
        printf("Carta 1 venceu na soma dos atributos!\n");
    } else if (soma2 > soma1) {
        printf("Carta 2 venceu na soma dos atributos!\n");
    } else {
        printf("Empate na soma dos atributos!\n");
    }

    return 0;
}
