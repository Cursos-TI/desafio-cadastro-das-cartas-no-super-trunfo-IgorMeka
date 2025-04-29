#include <stdio.h>
#include <string.h> //para remover o Enter final com strcspn()

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Variáveis.
    char estado1, estado2;
    char codigoCarta1[4], codigoCarta2[4];
    char nomeCidade1[50], nomeCidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidadePopulacional1, densidadePopulacional2;
    float perCapita1, perCapita2;

    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    // Inserir e armazenar dados da carta 1:
        printf("\nCarta 1\n");
        printf("Estado: \n"); 
        scanf("%c", &estado1);
        printf("Código: \n");
        scanf("%s", &codigoCarta1);
        getchar();
        printf("Nome da cidade: \n"); //fgets
        fgets(nomeCidade1, sizeof(nomeCidade1), stdin);
        nomeCidade1[strcspn(nomeCidade1, "\n")] = 0;
        printf("População: \n");
        scanf("%d", &populacao1);
        printf("Área: \n");
        scanf("%f", &area1);
        printf("PIB: \n");
        scanf("%f", &pib1);
        printf("Número de Pontos Turísticos: \n");
        scanf("%d", &pontosTuristicos1);
        getchar();
        
    // Inserir e armazenar dados da carta 2:
        printf("\nCarta 2\n");    
        printf("Estado: \n");
        scanf("%c", &estado2);
        printf("Código: \n");
        scanf("%s", &codigoCarta2);
        getchar();
        printf("Nome da cidade: \n"); //fgets
        fgets(nomeCidade2, sizeof(nomeCidade2), stdin);
        nomeCidade2[strcspn(nomeCidade2, "\n")] = 0;
        printf("População: \n");
        scanf("%d", &populacao2);
        printf("Área: \n");
        scanf("%f", &area2);
        printf("PIB: \n");
        scanf("%f", &pib2);
        printf("Número de Pontos Turísticos: \n");
        scanf("%d", &pontosTuristicos2);
        getchar();

    // Calcular Densidade Populacional e PIB per Capita (nível aventureiro)
        densidadePopulacional1 = populacao1 / area1;
        densidadePopulacional2 = populacao2 / area2;
        perCapita1 = pib1 / populacao1;
        perCapita2 = pib2 / populacao2;

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Carta 1: \n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigoCarta1);
    printf("Nome da cidade: %s \n", nomeCidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f KM² \n", area1);
    printf("PIB: %.2f Bilhões de reais \n", pib1);
    printf("Número de Pontos Turísticos: %d \n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f Reais\n", perCapita1);

    printf("\nCarta 2: \n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigoCarta2);
    printf("Nome da Cidade: %s \n", nomeCidade2);
    printf("Polulação %d \n", populacao2);
    printf("Área %.2f KM² \n", area2);
    printf("PIB: %.2f Bilhões de reais \n", pib2);
    printf("Número de pontos turísticos: %d \n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f Reais\n", perCapita2);


    return 0;
}
