#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    
    //RESERVANDO AS VARIAVEIS
    char estado, estado2;
    char codigo[3] = "01", codigo2[3] = "02";
    char cidade[15], cidade2[15];
    int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int npt, npt2;  //VARIAVEL NUMERO DE PONTOS TURISTICOS
    float densidade, densidade2;
    float percapta, percapta2;


printf("Informe o Estado.\n");
scanf("%c", &estado);

printf("Informe a Cidade.\n");
scanf("%s", &cidade);

printf("Informe a populacao.\n");
scanf("%d", &populacao);

printf("Informe a area.\n");
scanf("%f", &area);

printf("Informe o pib.\n");
scanf("%f", &pib);

printf("Informe o numero de pontos turisticos.\n");
scanf("%d", &npt);


//INFORMAÇÕES DA SEGUNDA CARTA


printf("Informe o Estado da segunda carta.\n");
    scanf("%c", &estado2);

    printf("Informe a Cidade da segunda carta.\n");
    scanf("%s", &cidade2);

    printf("Informe a populacao da segunda carta.\n");
    scanf("%i", &populacao2);

    printf("Informe a area da segunda carta.\n");
    scanf("%f", &area2);

    printf("Informe o pib da segunda carta.\n");
    scanf("%f", &pib2);

    printf("Informe o numero de pontos turisticos da segunda carta.\n");
    scanf("%i", &npt2);

    // CALCULANDO DENSIDADE POPULACIONAL E PIB PERCAPTA
    densidade = (float) populacao / area;
    densidade2 = (float) populacao2 / area2
    percapta = (float) pib / populacao;
    percapta2 = (float) pib2 / populacao2;

    //IMPRIME AS CARTAS NA TELA


printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %c%s\n", estado, codigo);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %i\n", populacao);
    printf("Area: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Pontos Turisticos: %i\n", npt);
    printf("Densidade populacional: %.2f\n", densidade);
    printf("PIB percapta: %.2f\n", percapta);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %c%s\n", estado2, codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %i\n", populacao2);
    printf("Area: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Pontos Turisticos: %i\n", npt2);
    printf("Densidade populacional: %.2f\n", densidade2);
    printf("PIB percapta: %.2f\n", percapta2);

    return 0;
}
