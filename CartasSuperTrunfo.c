#include <stdio.h>
int main (){
    char estado1 , estado2;
    char cod1 [4] , cod2 [4];
    char nomecid1 [20] , nomecid2 [20];
    unsigned long int populacao1 , populacao2;
    float area1 , area2 , pib1 , pib2;
    int turismo1 , turismo2;
    float densidadepop1 , densidadepop2, pibpc1 , pibpc2 , densidadeinv1 , densidadeinv2,
    superpoder1 , superpoder2;
    


                //cidade A
    
    printf("Digite os dados da Carta \n");
    printf("Estado (A-H): ");
    scanf(" %c" , &estado1);
    printf("Digite o código da carta: ");
    scanf("%s" , cod1);
    printf("Qual o nome da cidade? ");
    scanf("%s", nomecid1);
    printf("Qual a população da cidade?");
    scanf("%lu" , &populacao1);
    printf("Qual a área da cidade? ");
    scanf("%f", &area1);
    printf("Qual o PIB da cidade (em bilhões)? ");
    scanf("%f" , &pib1);
    printf("Quantos pontos turisticos tem a cidade? ");
    scanf("%d" , &turismo1);
 
                //cidade B

    printf("\nDigite os dados da Carta \n");
    printf("Estado (A-H): ");
    scanf(" %c" , &estado2);
    printf("Digite o código da carta: ");
    scanf("%s" , cod2);
    printf("Qual o nome da cidade? ");
    scanf("%s", nomecid2);
    printf("Qual a população da cidade?");
    scanf("%lu" , &populacao2);
    printf("Qual a área da cidade? ");
    scanf("%f", &area2);
    printf("Qual o PIB da cidade (em bilhões)? ");
    scanf("%f" , &pib2);
    printf("Quantos pontos turisticos tem a cidade? ");
    scanf("%d" , &turismo2);
    
    densidadepop1 = populacao1 / area1;
    densidadepop2 = populacao2 / area2;
    pibpc1 = (pib1 * 1000000000.0) / populacao1;
    pibpc2 = (pib2 * 1000000000.0) / populacao2;
    densidadeinv1 = 1.0 / densidadepop1;
    densidadeinv2 = 1.0 / densidadepop2;
    superpoder1 = (float) populacao1 + area1 + (pib1 * 1000000000.0) + turismo1 + pibpc1 + densidadeinv1;
    superpoder2 = (float) populacao2 + area2 + (pib2 * 1000000000.0) + turismo2 + pibpc2 + densidadeinv2;

    
    printf("\nCarta 1: \n");
    printf("Estado: %c\n" , estado1);
    printf("Código: %s \n" , cod1);
    printf("Nome da cidade: %s\n" , nomecid1);
    printf("População: %lu\n" , populacao1);
    printf("Área: %.2f km²\n" , area1);
    printf("PIB: %.2f bilhões de reais\n" , pib1);
    printf("Número de pontos turísticos: %d\n" , turismo1);
    printf("A densidade populacional é: %.2f hab/km²\n" , densidadepop1);
    printf("O PIB per Capita é: %.2f reais\n" , pibpc1);

    printf("\nCarta 2: \n");
    printf("Estado: %c\n" , estado2);
    printf("Código: %s \n" , cod2);
    printf("Nome da cidade: %s\n" , nomecid2);
    printf("População: %lu\n" , populacao2);
    printf("Área: %.2f km²\n" , area2);
    printf("PIB: %.2f bilhões de reais\n" , pib2);
    printf("Número de pontos turísticos: %d\n" , turismo2);
    printf("A densidade populacional é: %.2f hab/km²\n" , densidadepop2);
    printf("O PIB per Capita é: %.2f reais\n" , pibpc2);

    printf("\n****Comparação das cartas****\n");

    if (populacao1 > populacao2){
        printf("População: Carta 1 venceu \n");
    } else {
        printf("População: Carta 2 venceu \n");
    }
    if (area1 > area2){
        printf("Área: Carta 1 venceu \n");
    } else {
        printf("Área: Carta 2 venceu \n");
    }
    if (pib1 > pib2) {
        printf("PIB: Carta 1 venceu \n");
    } else {
        printf("PIB: Carta 2 venceu \n");
    }
    if (turismo1 > turismo2){
        printf("Pontos turísticos: Carta 1 venceu \n");
    } else {
        printf("Pontos turísticos: Carta 2 venceu \n");
    }
    if (densidadepop1 < densidadepop2){
        printf("Densidade populacional: Carta 1 venceu \n");
    } else {
        printf("Densidade populacional: Carta 2 venceu \n");
    }
    if (pibpc1 > pibpc2){
        printf("PIB per Capita: Carta 1 venceu \n");
    } else {
        printf("PIB per Capita: Carta 2 venceu \n");
    }
    if (superpoder1 > superpoder2){
        printf("Super Poder: Carta 1 venceu \n");
    } else {
        printf("Super Poder: Carta 2 venceu \n");
    }

    return 0;
