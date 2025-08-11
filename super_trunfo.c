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

    int menu;
    
        
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

    printf("Numero da Carta 2:\n");
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
    

    printf("\n\n \033[1;34m Informações_Da_Carta 1: \033[0m \n\n");
    printf("Estado: \033[1;34m%s\033[0m\n", estado);
    printf("Código: \033[1;34m%s\033[0m\n", codigo);
    printf("Cidade: \033[1;34m%s\033[0m\n", nomeCidade);
    printf("População: \033[1;34m%lu\033[0m\n", populacao);
    printf("Área: \033[1;34m%'.2fkm²\033[0m\n", area);
    printf("PIB: \033[1;34m%'.2f Bi\033[0m \n", pib);
    printf("Pontos Turísticos: \033[1;34m%u Lugares\033[0m\n", pontoTuristico);
    printf("Densidade Populacional: \033[1;34m%'.2f Hab/km²\033[0m\n", densidadepopulacional);
    printf("PIB per Capita: \033[1;34m%'.2f R$\033[0m\n", pibpercapita);
    printf("Super Poder: \033[1;33m%.2lf\033[0m\n\n", SuperPoder);

    

   // Exibição dos Resultados Carta 2
   

    printf("\n\n \033[1;31m Informações_Da_Carta 2: \033[0m \n\n");
    printf("Estado: \033[1;34m%s\033[0m\n", estado2);
    printf("Código: \033[1;34m%s\033[0m\n", codigo2);
    printf("Cidade: \033[1;34m%s\033[0m\n", nomeCidade2);
    printf("População: \033[1;34m%lu\033[0m\n", populacao2);
    printf("Área: \033[1;34m%'.2fkm²\033[0m\n", area2);
    printf("PIB: \033[1;34m%'.2f Bi\033[0m \n", pib2);
    printf("Pontos Turísticos: \033[1;34m%u Lugares\033[0m\n", pontoTuristico2);
    printf("Densidade Populacional: \033[1;34m%'.2f Hab/km²\033[0m\n", densidadepopulacional2);
    printf("PIB per Capita: \033[1;34m%'.2f R$\033[0m\n", pibpercapita2);
    printf("Super Poder: \033[1;33m%.2lf\033[0m\n\n", SuperPoder2);

       
    
    // Menu Interativo para comparar cartas.
    // Mude essa linha abaixo para comparar por outro atributo: "População", "Area", "Densidade", "Pibpercapita"

    printf("\n \033[1;31m Menu Comparação das Cartas: \033[0m \n");
    printf("[1] - Comparar por População \n");
    printf("[2] - Comparar por Área \n");
    printf("[3] - Comparar por Pib \n");
    printf("[4] - Comparar por Pontos Turisticos \n");
    printf("[5] - Comparar por Densidade Demográfica \n");
    scanf(" %i", &menu);
    switch(menu) {

    case 1:

    printf ("\n \033[1;31m O Atributo usado será População \033[0m \n");
    printf ("%s: %ld hab.\n",nomeCidade, populacao);
    printf ("%s: %ld hab.\n",nomeCidade2, populacao2);
      
       if (populacao > populacao2) {
            printf("A Carta 1 Venceu");
        }else if (populacao2 > populacao) {
            printf("A Carta 2 Venceu");
        }else {
            printf("Ocorreu um Empate");
        }
        break;  
        
    case 2:

    printf ("\n \033[1;31m O Atributo usado será Área \033[0m \n");
    printf ("%s: %ld hab.\n",nomeCidade, area);
    printf ("%s: %ld hab.\n",nomeCidade2,area2);
      
       if (area> area2) {
            printf("A Carta 1 Venceu");
        }else if (area2 > area) {
            printf("A Carta 2 Venceu");
        }else {
            printf("Ocorreu um Empate");
        }
        break; 

    case 3:

    printf ("\n \033[1;31m O Atributo usado será PIB \033[0m \n");
    printf ("%s: %ld hab.\n",nomeCidade, pib);
    printf ("%s: %ld hab.\n",nomeCidade2,pib2);
      
       if (pib> pib2) {
            printf("A Carta 1 Venceu");
        }else if (pib2 > pib) {
            printf("A Carta 2 Venceu");
        }else {
            printf("Ocorreu um Empate");
        }
        break; 

    case 4:

    printf ("\n \033[1;31m O Atributo usado será Pontos Turísticos \033[0m \n");
    printf ("%s: %ld hab.\n",nomeCidade, pontoTuristico);
    printf ("%s: %ld hab.\n",nomeCidade2, pontoTuristico2);
      
       if (pontoTuristico> pontoTuristico2) {
            printf("A Carta 1 Venceu");
        }else if (pontoTuristico2 > pontoTuristico) {
            printf("A Carta 2 Venceu");
        }else {
            printf("Ocorreu um Empate");
        }
        break; 
        
    case 5:

    printf("\n \033[1;31m O Atributo usado será Densidade Demográfica \033[0m \n");
    printf ("%s: %ld hab.\n",nomeCidade, densidadepopulacional);
    printf ("%s: %ld hab.\n",nomeCidade2, densidadepopulacional2);
      
       if (densidadepopulacional > densidadepopulacional2) {
            printf("A Carta 1 Venceu");
        }else if (densidadepopulacional2 > densidadepopulacional) {
            printf("A Carta 2 Venceu");
        }else {
            printf("Ocorreu um Empate");
        }
        break;     

    default:
            printf("Número inválido, por favor tentar novamente");
        break;
    


    }
    return 0;
}