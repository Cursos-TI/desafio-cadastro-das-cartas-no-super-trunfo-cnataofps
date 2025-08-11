#include <stdio.h>

int main() {

    // Variaveis para primeira carta 

    char estado[3], codigo[4], nomeCidade[100];
    unsigned int pontoTuristico;
    unsigned long int populacao;
    float area, pib, densidadepopulacional, pibpercapita;
    double SuperPoder;
    int temp_char;
    unsigned int resultado_pop, resultado_area, resultado_pib, resultado_pontos, resultado_dens, resultado_pib_pc, resultado_super_poder;
    
    
    // Variaveis para segunda carta 

    char estado2[3], codigo2[4], nomeCidade2[100];
    unsigned int  pontoTuristico2;
    unsigned long int populacao2;
    float area2, pib2, densidadepopulacional2, pibpercapita2;
    double SuperPoder2;

    // Variavel para o Menu de comparação

    int menu, menu2;
    int resultado1, resultado2;

    
        
    // Entrada de dados para primeira carta

    printf("Numero da Carta 1:\n");   
    printf("Informe uma letra para o Estado(Ex: MG):: \n");
    scanf("%2s", estado);
    while ((temp_char = getchar()) != '\n' && temp_char != EOF);   

    printf("Informe um código(ex: A01): \n");
    scanf("%3s", codigo);
    while ((temp_char = getchar()) != '\n' && temp_char != EOF);

    printf("Nome da cidade(sem espaços): \n");
    scanf("%99s", nomeCidade);
    while ((temp_char = getchar()) != '\n' && temp_char != EOF);

    printf("Populacao: \n");
    scanf(" %lu", &populacao);  
    while ((temp_char = getchar()) != '\n' && temp_char != EOF);

    printf("Area: \n");
    scanf("%f", &area);
    while ((temp_char = getchar()) != '\n' && temp_char != EOF);

    printf("Pib: \n");
    scanf("%f", &pib);
    while ((temp_char = getchar()) != '\n' && temp_char != EOF);

    printf("Numero de Pontos Turisticos: \n");
    scanf(" %d", &pontoTuristico);
    while ((temp_char = getchar()) != '\n' && temp_char != EOF);

    
    
    // Entrada de dados para segunda carta

    printf("Numero da Carta 2: \n");
    printf("Informe uma letra para o Estado(Ex: MG):: \n");
    scanf("%2s", estado2);
    while ((temp_char = getchar()) != '\n' && temp_char != EOF);   

    printf("Informe um código(ex: A01): \n");
    scanf("%3s", codigo2);
    while ((temp_char = getchar()) != '\n' && temp_char != EOF);

    printf("Nome da cidade(sem espaços): \n");
    scanf("%99s", nomeCidade2);
    while ((temp_char = getchar()) != '\n' && temp_char != EOF);

    printf("Populacao: \n");
    scanf(" %lu", &populacao2);  
    while ((temp_char = getchar()) != '\n' && temp_char != EOF);

    printf("Area: \n");
    scanf("%f", &area2);
    while ((temp_char = getchar()) != '\n' && temp_char != EOF);

    printf("Pib: \n");
    scanf("%f", &pib2);
    while ((temp_char = getchar()) != '\n' && temp_char != EOF);

    printf("Numero de Pontos Turisticos: \n");
    scanf(" %d", &pontoTuristico2);
    while ((temp_char = getchar()) != '\n' && temp_char != EOF);




    // Calcular densidade populacional e PIB per capita CARTA 1 e CARTA 2

    densidadepopulacional = (float)populacao / area;
    pibpercapita = (pib * 1000000000.0f) / populacao;     
    densidadepopulacional2 = (float)populacao2 / area2;
    pibpercapita2 = (pib2 * 1000000000.0f) / populacao2;
   
             
    // Calcular o Super Poder CARTA 1 E CARTA 2

    SuperPoder = (double)populacao + area + pib + (double)pontoTuristico + pibpercapita + (1.0 / densidadepopulacional);       
    SuperPoder2 = (double)populacao2 + area2 + pib2 + (double)pontoTuristico2 + pibpercapita2 + (1.0 / densidadepopulacional2);    
    
    // Comparação das cartas

    resultado_pop = populacao > populacao2;
    resultado_area = area > area2;
    resultado_pib = pib > pib2;
    resultado_pontos = pontoTuristico > pontoTuristico2;
    resultado_dens = densidadepopulacional < densidadepopulacional2;
    resultado_pib_pc = pibpercapita > pibpercapita2;
    resultado_super_poder = SuperPoder > SuperPoder2;

    
    // Exibição dos Resultados Carta 1 
    

    printf(" Informações Da Carta 1: \n");
    printf("Estado: %s\n", estado);
    printf("Código: %s \n", codigo);
    printf("Cidade: %s\n", nomeCidade);
    printf("População: %lu\n", populacao);
    printf("Área: %.2fkm²\n", area);
    printf("PIB: %.2f Bi.\n", pib);
    printf("Pontos Turísticos: %u Lugares\n", pontoTuristico);
    printf("Densidade Populacional: %'.2f Hab/km²\n", densidadepopulacional);
    printf("PIB per Capita: %.2f R$\n", pibpercapita);
    printf("Super Poder: %.2lf\n", SuperPoder);

    

   // Exibição dos Resultados Carta 2
   

    printf(" Informações Da Carta 2: \n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f Bi\n", pib2);
    printf("Pontos Turísticos: %u Lugares\n", pontoTuristico2);
    printf("Densidade Populacional: %.2f Hab/km²\n", densidadepopulacional2);
    printf("PIB per Capita: %.2f R$\n", pibpercapita2);
    printf("Super Poder: %.2lf \n", SuperPoder2);

       
    
    // Menu Interativo para comparar cartas 1.
    

    printf("\n \033[1;31m Menu Comparação das Cartas 1: \033[0m \n");
    printf("[1] - Comparar por População \n");
    printf("[2] - Comparar por Área \n");
    printf("[3] - Comparar por Pib \n");
    printf("[4] - Comparar por Pontos Turisticos \n");
    printf("[5] - Comparar por Densidade Demográfica \n");

    scanf("%i", &menu);
    switch(menu) {

    case 1:

    printf ("\n \033[1;31m O Atributo usado será População \033[0m \n");
    printf ("%s: %lu hab.\n",nomeCidade, populacao);
    printf ("%s: %lu hab.\n",nomeCidade2, populacao2);
      
       resultado1 = populacao > populacao2 ? 1:0 ;

        break;  
        
    case 2:

    printf ("\n \033[1;31m O Atributo usado será Área \033[0m \n");
    printf ("%s: %.2f Km².\n",nomeCidade, area);
    printf ("%s: %.2f Km².\n",nomeCidade2,area2);
      
       resultado1 = area > area2 ? 1:0 ;

        break; 

    case 3:

    printf ("\n \033[1;31m O Atributo usado será PIB \033[0m \n");
    printf ("%s: %.2f hab.\n",nomeCidade, pib);
    printf ("%s: %.2f hab.\n",nomeCidade2,pib2);
      
       resultado1 = pib > pib2 ? 1:0 ;

        break; 

    case 4:

    printf ("\n \033[1;31m O Atributo usado será Pontos Turísticos \033[0m \n");
    printf ("%s: %u hab.\n",nomeCidade, pontoTuristico);
    printf ("%s: %u hab.\n",nomeCidade2, pontoTuristico2);
      
       resultado1 = pontoTuristico > pontoTuristico2 ? 1:0 ;

        break; 
        
    case 5:

    printf("\n \033[1;31m O Atributo usado será Densidade Demográfica \033[0m \n");
    printf ("%s: %.2f Hab/km²\n",nomeCidade, densidadepopulacional);
    printf ("%s: %.2f Hab/km²\n",nomeCidade2, densidadepopulacional2);
      
       resultado1 = densidadepopulacional < densidadepopulacional2 ? 1:0 ;

        break;     

    default:
            printf("Número inválido, por favor tentar novamente\n");
        break;
    
    }

    // Menu Interativo para comparar cartas 2.

    printf("\n \033[1;31m Menu Comparação das Cartas 2: \033[0m \n");
    printf("[1] - Comparar por População \n");
    printf("[2] - Comparar por Área \n");
    printf("[3] - Comparar por Pib \n");
    printf("[4] - Comparar por Pontos Turisticos \n");
    printf("[5] - Comparar por Densidade Demográfica \n");

    scanf("%i", &menu2);
    switch(menu2) {

    case 1:

    printf ("\n \033[1;31m O Atributo usado será População \033[0m \n");
    printf ("%s: %lu hab.\n",nomeCidade, populacao);
    printf ("%s: %lu hab.\n",nomeCidade2, populacao2);
      
       resultado2 = populacao > populacao2 ? 1:0; 

        break;  
        
    case 2:

    printf ("\n \033[1;31m O Atributo usado será Área \033[0m \n");
    printf ("%s: %.2f Km².\n",nomeCidade, area);
    printf ("%s: %.2f Km².\n",nomeCidade2,area2);
      
       resultado2 = area > area2 ? 1:0;

        break; 

    case 3:

    printf ("\n \033[1;31m O Atributo usado será PIB \033[0m \n");
    printf ("%s: %.2f hab.\n",nomeCidade, pib);
    printf ("%s: %.2f hab.\n",nomeCidade2,pib2);
      
       resultado2 = pib > pib2 ? 1:0 ;

        break; 

    case 4:

    printf ("\n \033[1;31m O Atributo usado será Pontos Turísticos \033[0m \n");
    printf ("%s: %u hab.\n",nomeCidade, pontoTuristico);
    printf ("%s: %u hab.\n",nomeCidade2, pontoTuristico2);
      
       resultado2 = pontoTuristico > pontoTuristico2 ? 1:0; 

        break; 
        
    case 5:

    printf("\n \033[1;31m O Atributo usado será Densidade Demográfica \033[0m \n");
    printf ("%s: %.2f Hab/km²\n",nomeCidade, densidadepopulacional);
    printf ("%s: %.2f Hab/km²\n",nomeCidade2, densidadepopulacional2);
      
       resultado2 = densidadepopulacional < densidadepopulacional2 ? 1:0 ;

        break;     

    default:
            printf("Número inválido, por favor tentar novamente\n");

        break;
    
    }
    
    
    // Calculando o Vencedor da rodada


    if ( resultado1 == 1 && resultado2 == 1) {
        printf("Carta 1 Ganhou a rodada \n");

    } else if(resultado1 == 0 && resultado2 == 0) {
        printf("Carta 2 Ganhou a rodada \n");

    }else {
        printf("Empate na rodada \n");
    }

    return 0;
}
