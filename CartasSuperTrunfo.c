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
    unsigned long int populacao, populacao2;
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
    densidade2 = (float) populacao2 / area2;
    percapta = (float) pib / populacao;
    percapta2 = (float) pib2 / populacao2;

    //CALCULANDO SUPER PODER
   float superpoder;
   float superpoder2;
   superpoder = (float) populacao + area + pib + percapta + npt;
   superpoder2 = (float) populacao2 + area2 + pib2 + percapta2 + npt2;


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
    printf("Superpoder: %.2f\n", superpoder);

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
    printf("Superpoder: %.2f\n", superpoder2);


   
   //COMPARANDO AS CARTAS
 /*printf("Comparacao de Cartas\n\n");
 printf("Populacao : Carta 1 Venceu %d\n", populacao > popolacao2);
 printf("Area : Carta 1 Venceu %d\n", area > area2);
 printf("PIB : Carta 1 Venceu %d\n", pib > pib2);
 printf("Pontos Turisticos : Carta 1 Venceu %d\n", npt > npt2);
 printf("Densidade populacional : Carta 1 Venceu %d\n", densidade < densidade2);
 printf("PIB per capta : Carta 1 Venceu %d\n", percapta > percapta2);
 printf("Super Poder : Carta 1 Venceu %d\n", superpoder > superpoder22);*/


/*COMPARANDO AS CARTAS COM IF ELSE
printf("Comparacao de cartas - Atributo : Populacao\n\n");  
if(populacao > populacao2){
  printf("Carta 1 - %s%d\n", cidade, populacao);
  printf("Carta 2 - %s%d\n", cidade2, populacao2);
  printf("Resultado: Carta 1 - %s venceu", cidade);
}
else
  printf("Carta 1 - %s%d\n", cidade, populacao);
  printf("Carta 2 - %s%d\n", cidade2, populacao2);
  printf("Resultado: Carta 2 - %s venceu\n", cidade2);
}

printf("Comparacao de cartas - Atributo : Area\n\n");  
if(area > area2){
  printf("Carta 1 - %s%f\n", cidade, area);
  printf("Carta 2 - %s%f\n", cidade2, area2);
  printf("Resultado: Carta 1 - %s venceu", cidade);
}
else{
  printf("Carta 1 - %s%f\n", cidade, area);
  printf("Carta 2 - %s%f\n", cidade2, area2);
  printf("Resultado: Carta 2 - %s venceu\n", cidade2);
}

printf("Comparacao de cartas - Atributo : PIB\n\n");  
if(pib > pib2){
  printf("Carta 1 - %s%f\n", cidade, pib);
  printf("Carta 2 - %s%f\n", cidade2, pib2);
  printf("Resultado: Carta 1 - %s venceu", cidade);
}
else{
  printf("Carta 1 - %s%f\n", cidade, pib);
  printf("Carta 2 - %s%f\n", cidade2, pib2);
  printf("Resultado: Carta 2 - %s venceu\n", cidade2);
}

printf("Comparacao de cartas - Atributo : Pontos Turisticos\n\n");  
if(npt > npt2){
  printf("Carta 1 - %s%d\n", cidade, npt);
  printf("Carta 2 - %s%d\n", cidade2, npt2);
  printf("Resultado: Carta 1 - %s venceu", cidade);
}
else{
  printf("Carta 1 - %s%d\n", cidade, npt);
  printf("Carta 2 - %s%d\n", cidade2, npt2);
  printf("Resultado: Carta 2 - %s venceu\n", cidade2);
}

printf("Comparacao de cartas - Atributo : Densidade Populacional\n\n");  
if(densidade < densidade2){
  printf("Carta 1 - %s%f\n", cidade, densidade);
  printf("Carta 2 - %s%f\n", cidade2, densidade2);
  printf("Resultado: Carta 1 - %s venceu", cidade);
}
else{
  printf("Carta 1 - %s%f\n", cidade, densidade);
  printf("Carta 2 - %s%f\n", cidade2, densidade2);
  printf("Resultado: Carta 2 - %s venceu\n", cidade2);
}

printf("Comparacao de cartas - Atributo : PIB per capta\n\n");  
if(percapta > percapta2){
  printf("Carta 1 - %s%f\n", cidade, percapta);
  printf("Carta 2 - %s%f\n", cidade2, percapta2);
  printf("Resultado: Carta 1 - %s venceu", cidade);
}
else{
  printf("Carta 1 - %s%f\n", cidade, percapta);
  printf("Carta 2 - %s%f\n", cidade2, percapta2);
  printf("Resultado: Carta 2 - %s venceu\n", cidade2);
}*/




//****************************************************************************
//INICIANDO O JOGO E COMPARANDO AS CARTAS POR ATRIBUTOS
printf("    1 - Iniciar Jogo\n");
    printf("    2 - Sair do jogo\n\n");
    scanf("%d", &menuprincipal);

    if(menuprincipal == 1){

        //MENU DE ESCOLHA DE ATRIBUTO
        printf("\nQUAL ATRIBUTO DESEJA COMPARAR ?\n\n");
        printf("1 - Populacao\n");
        printf("2 - Area\n");
        printf("3 - PIB\n");
        printf("4 - Pontos Turisticos\n");
        printf("5 - Densidade Demografica\n\n");

        scanf("%d", &comparaatributo);

        
        // COMPARACAO DOS ATRIBUTOS
        switch (comparaatributo)
        {
        case 1:  //ATRIBUTO POPULACAO

            printf("\n Carta 1");
            printf("\n Estado : %s ", &estado);
            printf("\n Populacao : %i\n", &populacao);

            printf("\n Carta 2");
            printf("\n Estado: %s", &estado2);
            printf("\n Populacao : %i\n\n", &populacao2);

            if(populacao > populacao2){

                printf(" CARTA 1 VENCEU\n");

            }else if(populacao == populacao2){

                printf(" EMPATE\n");

            }else{

                printf(" CARTA 2 VENCEU\n");   
                
            }

            break;

        
        case 2 : //ATRIBUTO AREA
           
        printf("\n Carta 1");
        printf("\n Estado : %s ", &estado);
        printf("\n Area : %f\n", &area);

        printf("\n Carta 2");
        printf("\n Estado: %s", &estado2);
        printf("\n Area : %f\n\n", &area2);

        if(area > area2){

            printf(" CARTA 1 VENCEU\n");

        }else if(area == area2){

            printf(" EMPATE\n");

        }else{

            printf(" CARTA 2 VENCEU\n");   
            
        }


            break;


        case 3 : //ATRIBUTO PIB
        
        
        printf("\n Carta 1");
        printf("\n Estado : %s ", &estado);
        printf("\n PIB : %f\n", &pib);

        printf("\n Carta 2");
        printf("\n Estado: %s", &estado2);
        printf("\n PIB : %f\n\n", &pib2);

        if(pib > pib2){

            printf(" CARTA 1 VENCEU\n");

        }else if(pib == pib2){

            printf(" EMPATE\n");

        }else{

            printf(" CARTA 2 VENCEU\n");   
            
        }


            break;


        case 4 : //ATRIBUTO NUMERO DE PONTOS TURISTICOS


        printf("\n Carta 1");
        printf("\n Estado : %s ", &estado);
        printf("\n Pontos Turisticos : %i\n", &npt);

        printf("\n Carta 2");
        printf("\n Estado: %s", &estado2);
        printf("\n Pontos Turisticos : %i\n\n", &npt2);

        if(npt > npt2){

            printf(" CARTA 1 VENCEU\n");

        }else if(npt == npt2){

            printf(" EMPATE\n");

        }else{

            printf(" CARTA 2 VENCEU\n");   
            
        }

            break;


        case 5 : //ATRIBUTO DENSIDADE DEMOGRAFICA


        printf("\n Carta 1");
        printf("\n Estado : %s ", &estado);
        printf("\n Densidade Demografica : %2.f\n", &densidade);

        printf("\n Carta 2");
        printf("\n Estado: %s", &estado2);
        printf("\n Densidade Demografica : %2.f\n\n", &densidade2);

        if(npt < npt2){

            printf(" CARTA 1 VENCEU\n");

        }else if(npt == npt2){

            printf(" EMPATE\n");

        }else{

            printf(" CARTA 2 VENCEU\n");   
            
        }


            break;




        default:
            break;
        }




    }else{

        printf("Opcao Invalida\n");

    }


    return 0;


}





    return 0;

    
}
