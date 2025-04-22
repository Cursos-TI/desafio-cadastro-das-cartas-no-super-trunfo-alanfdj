#include <stdio.h>


int main(){


    //RESERVANDO VARIAVEIS
    char estado = 'A', estado2 = 'B';
    char codigo[3] = "01", codigo2[3] = "02";
    char cidade[15] = "Brasilia", cidade2[15] = "Salvador";
    int populacao = 1200000, populacao2 = 1100000;
    float area = 245000.12, area2 = 320000.15;
    float pib = 600000000, pib2 = 500000000;
    int npt = 20, npt2 = 50;  //VARIAVEL NUMERO DE PONTOS TURISTICOS
    float densidade = 745.98, densidade2 = 456.63;
    float percapta = 1400.54, percapta2 = 1350.76;
    float superpoder = (float) populacao + area + pib + percapta + npt;
    float superpoder2 = (float) populacao2 + area2 + pib2 + percapta2 + npt2;
    int menuprincipal;
    int atributo1, atributo2;
    int verificaatributovalido;
    float valoratributo1carta1, valoratributo2carta1, valoratributo1carta2, valoratributo2carta2;
    float resultadocarta1, resultadocarta2;


    //TITULO DO JOGO
    printf("\n   JOGO SUPER TRUNFO\n\n");


    //MENU PRINCIPAL
    printf("\n  - Menu Principal\n");
    printf("       1 - Iniciar Jogo\n");
    printf("       2 - Sair do jogo\n\n");
    scanf("%d", &menuprincipal);

    if(menuprincipal == 1){

        // CODIGO A SER EXECUTADO CASO SEJA DIGITADO NUMERO 1
        printf("\n   CARTAS DISPONIVEIS\n");

        // IMPRIME CARTAS NA TELA
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %c%s\n", estado, codigo);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %i\n", populacao);
    printf("Area: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos Turisticos: %i\n", npt);
    printf("Densidade populacional: %.2f\n", densidade);
    printf("PIB percapta: %.2f\n", percapta);
    printf("Superpoder: %.2f\n\n", superpoder);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %c%s\n", estado2, codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %i\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %i\n", npt2);
    printf("Densidade populacional: %.2f\n", densidade2);
    printf("PIB percapta: %.2f\n", percapta2);
    printf("Superpoder: %.2f\n", superpoder2);
    
    printf("\n   VOCE DEVE COMPARAR 2 ATRIBUTOS DE CADA CARTA\n");

    printf("\n   ATRIBUTOS DISPONIVEIS\n\n");
        printf("   1 - Populacao\n");
        printf("   2 - Area\n");
        printf("   3 - PIB\n");
        printf("   4 - Pontos Turisticos\n");
        printf("   5 - Densidade Populacional\n");
        printf("   6 - PIB Percapta\n\n");
    

        printf("\nEscolha o primeiro atributo a ser comparado : ");
        scanf("%d", &atributo1);

        //VERIFICA SE O NUMERO DE ATRIBUTO DIGITADO ESTÁ ENTRE 1 E 6
        verificaatributovalido = (atributo1 < 1) || (atributo1 > 6) ? 1 : 0;        

        if(verificaatributovalido == 1 ){

            printf("\nAtributo invalido. O jogo foi encerrado.\n");
            return 0;
        }

//IMPRIME MENU SEM A OPCAO QUE JA FOI ESCOLHIDA NO PRIMEIRO ATRIBUTO
switch (atributo1)
{
case 1:
    
    printf("\n   ATRIBUTOS DISPONIVEIS\n\n");
    printf("   2 - Area\n");
    printf("   3 - PIB\n");
    printf("   4 - Pontos Turisticos\n");
    printf("   5 - Densidade Populacional\n");
    printf("   6 - PIB Percapta\n\n");

    break;

    case 2 :

    printf("\n   ATRIBUTOS DISPONIVEIS\n\n");
    printf("   1 - Populacao\n");    
    printf("   3 - PIB\n");
    printf("   4 - Pontos Turisticos\n");
    printf("   5 - Densidade Populacional\n");
    printf("   6 - PIB Percapta\n\n");

    break;

    case 3 :

    printf("\n   ATRIBUTOS DISPONIVEIS\n\n");
    printf("   1 - Populacao\n");
    printf("   2 - Area\n");    
    printf("   4 - Pontos Turisticos\n");
    printf("   5 - Densidade Populacional\n");
    printf("   6 - PIB Percapta\n\n");

    break;

    case 4 :

    printf("\n   ATRIBUTOS DISPONIVEIS\n\n");
    printf("   1 - Populacao\n");
    printf("   2 - Area\n");
    printf("   3 - PIB\n");    
    printf("   5 - Densidade Populacional\n");
    printf("   6 - PIB Percapta\n\n");

    break;

    case 5 :

    printf("\n   ATRIBUTOS DISPONIVEIS\n\n");
    printf("   1 - Populacao\n");
    printf("   2 - Area\n");
    printf("   3 - PIB\n");
    printf("   4 - Pontos Turisticos\n");  
    printf("   6 - PIB Percapta\n\n");

    break;


    case 6 :

    printf("\n   ATRIBUTOS DISPONIVEIS\n\n");
    printf("   1 - Populacao\n");
    printf("   2 - Area\n");
    printf("   3 - PIB\n");
    printf("   4 - Pontos Turisticos\n");
    printf("   5 - Densidade Populacional\n");

    break;

default:
    break;

}

        printf("\nEscolha o segundo atributo a ser comparado : ");
        scanf("%d", &atributo2);

        verificaatributovalido = (atributo2 < 1) || (atributo2 > 6) ? 1 : 0;        

        if(verificaatributovalido == 1 ){

            printf("\nAtributo invalido. O jogo foi encerrado.\n");
            return 0;

            // VERIFICA SE O SEGUNDO ATRIBUTO É DIFERENTE DO PRIMEIRO
        }else if(atributo2 == atributo1){

            printf("\nO segundo Atributo deve ser diferente do primeiro. O jogo foi encerrado.\n");
            return 0;
        }          
        



        printf("\nCarta 1:\n");
        printf("Estado: %c\n", estado);       
        printf("Cidade: %s\n", cidade);


        // IMPRIME PRIMWEIRO ATRIBUTO DA PRIMEIRA CARTA
        switch (atributo1)
        {
        case 1 :        
        
        printf("Populacao: %i\n", populacao);
        valoratributo1carta1 = (float) populacao;

            break;

            case 2 :
        
            printf("Area: %.2f\n", area);
            valoratributo1carta1 = (float) area;

            break;

            case 3 :

            printf("PIB: %.2f\n", pib);
            valoratributo1carta1 = (float) pib;

            break;

            case 4 :

            printf("Pontos Turisticos: %i\n", npt);
            valoratributo1carta1 = (float) npt;

            break;

            case 5 :

            printf("Densidade populacional: %.2f\n", densidade);
            valoratributo1carta1 = (float) densidade;

            break;

            case 6 :

            printf("PIB percapta: %.2f\n", percapta);
            valoratributo1carta1 = (float) percapta;

            break;


        default:
            break;
        }

       


        // IMPRIME SEGUNDO ATRIBUTO DA PRIMEIRA CARTA E SOMA OS VALORES DOS 2 ATRIBUTOS
        switch (atributo2)
        {
        case 1 :        
        
        printf("Populacao: %i\n", populacao);
        valoratributo2carta1 = (float) populacao;
        printf("Soma dos Atributos : %.2f\n", (valoratributo1carta1 + valoratributo2carta1));

            break;

            case 2 :
        
            printf("Area: %.2f\n", area);
            valoratributo2carta1 = (float) area;
            printf("Soma dos Atributos : %.2f\n", (valoratributo1carta1 + valoratributo2carta1));
            break;

            case 3 :

            printf("PIB: %.2f\n", pib);
            valoratributo2carta1 = (float) pib;
            printf("Soma dos Atributos : %.2f\n", (valoratributo1carta1 + valoratributo2carta1));

            break;

            case 4 :

            printf("Pontos Turisticos: %i\n", npt);
            valoratributo2carta1 = (float) npt;
            printf("Soma dos Atributos : %.2f\n", (valoratributo1carta1 + valoratributo2carta1));

            break;

            case 5 :

            printf("Densidade populacional: %.2f\n", densidade);
            valoratributo2carta1 = (float) densidade;
            printf("Soma dos Atributos : %.2f\n", (valoratributo1carta1 - valoratributo2carta1));

            break;

            case 6 :

            printf("PIB percapta: %.2f\n", percapta);
            valoratributo2carta1 = (float) percapta;
            printf("Soma dos Atributos : %.2f\n", (valoratributo1carta1 + valoratributo2carta1));

            break;


        default:
            break;
        }





        printf("\nCarta 2:\n");
        printf("Estado: %c\n", estado2);       
        printf("Cidade: %s\n", cidade2);


        // IMPRIME PRIMWEIRO ATRIBUTO DA SEGUNDA CARTA
        switch (atributo1)
        {
        case 1 :        
        
        printf("Populacao: %i\n", populacao2);
        valoratributo1carta2 = (float) populacao2;

            break;

            case 2 :
        
            printf("Area: %.2f\n", area2);
            valoratributo1carta2 = (float) area2;

            break;

            case 3 :

            printf("PIB: %.2f\n", pib2);
            valoratributo1carta2 = (float) pib2;

            break;

            case 4 :

            printf("Pontos Turisticos: %i\n", npt2);
            valoratributo1carta2 = (float) npt2;

            break;

            case 5 :

            printf("Densidade populacional: %.2f\n", densidade2);
            valoratributo1carta2 = (float) densidade2;

            break;

            case 6 :

            printf("PIB percapta: %.2f\n", percapta2);
            valoratributo1carta2 = (float) percapta2;

            break;


        default:
            break;
        }

       


        // IMPRIME SEGUNDO ATRIBUTO DA SEGUNDA CARTA E SOMA OS VALORES DOS 2 ATRIBUTOS
        switch (atributo2)
        {
        case 1 :        
        
        printf("Populacao: %i\n", populacao2);
        valoratributo2carta2 = (float) populacao2;
        printf("Soma dos Atributos : %.2f\n", (valoratributo1carta2 + valoratributo2carta2));

            break;

            case 2 :
        
            printf("Area: %.2f\n", area2);
            valoratributo2carta2 = (float) area2;
            printf("Soma dos Atributos : %.2f\n", (valoratributo1carta2 + valoratributo2carta2));
            break;

            case 3 :

            printf("PIB: %.2f\n", pib2);
            valoratributo2carta2 = (float) pib2;
            printf("Soma dos Atributos : %.2f\n", (valoratributo1carta2 + valoratributo2carta2));
            break;

            case 4 :

            printf("Pontos Turisticos: %i\n", npt2);
            valoratributo2carta2 = (float) npt2;
            printf("Soma dos Atributos : %.2f\n", (valoratributo1carta2 + valoratributo2carta2));
            break;

            case 5 :

            printf("Densidade populacional: %.2f\n", densidade2);
            valoratributo2carta2 = (float) densidade2;
            printf("Soma dos Atributos : %.2f\n", (valoratributo1carta2 - valoratributo2carta2));
            break;

            case 6 :

            printf("PIB percapta: %.2f\n", percapta2);
            valoratributo2carta2 = (float) percapta2;
            printf("Soma dos Atributos : %.2f\n", (valoratributo1carta2 + valoratributo2carta2));
            break;


        default:
            break;
        }


        // VARIAVEIS QUE ARMAZENAM O RESULTADO FINAL DE CADA ATRIBUTO
       resultadocarta1 = (valoratributo1carta1 + valoratributo2carta1);
       resultadocarta2 = (valoratributo1carta2 + valoratributo2carta2);

        // IMPRIMINDO RESULTADO FINAL DO JOGO
       if(resultadocarta1 > resultadocarta2){

            printf("\n\n   CARTA 1 VENCEU\n\n");

       }else if(resultadocarta1 < resultadocarta2){

            printf("\n\n   CARTA 2 VENCEU\n\n");

       }else{

        printf("\n\n   O JOGO EMPATOU\n\n");

       }



        
        


    }else{

        // CODIGO A SER EXECUTADO CASO SEJA DIGITADO NUMERO 2 OU OUTRO NUMERO
        printf("\n   Voce saiu do jogo\n");

    }

    






    return 0;


}
