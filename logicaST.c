#include <stdio.h>

int main() {
    int opcao1, opcao2;
    float valor1_c1, valor2_c1, valor1_c2, valor2_c2;

    //carta 1
    char estado1;           //A
    char codigo1[5];        //A01
    char cidade1[25];       //Brasília
    int populacao1;         //2810000
    float area1;            //5761 
    float pib1;             //265800000000 
    int turisticos1;        //32 
    float densidadepopulacional1, pibpercapita1;
    
    //carta 2
    char estado2;           //B
    char codigo2[5];        //B02
    char cidade2[25];       //Fortaleza
    int populacao2;         //2570000
    float area2;            //313.8
    float pib2;             //73400000000 
    int turisticos2 ;       //16
    float densidadepopulacional2, pibpercapita2;

    //Carta1
    printf("Dados da Carta 1: \n");

    printf("Estado da carta 1: \n");
    scanf(" %c", &estado1);

    printf("Código da carta 1: \n");
    scanf("%s", codigo1);

    printf("Nome da Cidade: \n");
    scanf("%s", cidade1);

    printf("População: \n");
    scanf("%d", &populacao1);

    printf("Área do Estado: \n");
    scanf("%f", &area1);

    printf("Pib do Estado: \n");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &turisticos1);

    //carta 2
     printf("Dados da Carta 2: \n");

    printf("Estado da carta 2: \n");
    scanf(" %c", &estado2);

    printf("Código da carta 2: \n");
    scanf("%s", codigo2);

    printf("Nome da Cidade: \n");
    scanf("%s", cidade2);

    printf("População: \n");
    scanf("%d", &populacao2);

    printf("Área do estado: \n");
    scanf("%f", &area2);

    printf("Pib do Estado: \n");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &turisticos2);


    // Cálculos
    densidadepopulacional1 = (float) populacao1 / area1;
    densidadepopulacional2 = (float) populacao2 / area2;
    
    pibpercapita1 = pib1 / populacao1;
    pibpercapita2 = pib2 / populacao2;

    //Escolha de atributos
    printf("\nEscolha o primeiro atributo:\n");
    printf("1. População\n2. Área\n3. PIB\n4. Pontos Turísticos\n5. Densidade Demográfica\n");
    scanf("%d", &opcao1);

    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    scanf("%d", &opcao2);

    while ( opcao1 == opcao2){
        printf("Os atributos não podem ser iguais. Tente novamento:\n");
        scanf("%d", &opcao2);
    }

    // Atributo 1
    switch (opcao1){
    case 1:
        valor1_c1 = populacao1;
        valor1_c2 = populacao2;
    break;
    case 2:
        valor1_c1 = area1;
        valor1_c2 = area2;
    break;
    case 3:
        valor1_c1 = pib1;
        valor1_c2 = pib2;
    break;
    case 4: 
        valor1_c1 = turisticos1;
        valor1_c2 = turisticos2;
    break;
    case 5:
        valor1_c1 = densidadepopulacional1;
        valor1_c2 = densidadepopulacional2;
    break;
    default:
        valor1_c1 = valor1_c2 = 0;
        break;
    }

    // Atributo 2 
    switch (opcao2){
    case 1:
        valor2_c1 = populacao1;
        valor2_c2 = populacao2;
    break;
    case 2:
        valor2_c1 = area1;
        valor2_c2 = area2;
    break;
    case 3:
        valor2_c1 = pib1;
        valor2_c2 = pib2;
    break;
    case 4: 
        valor2_c1 = turisticos1;
        valor2_c2 = turisticos2;
    break;
    case 5:
        valor2_c1 = densidadepopulacional1;
        valor2_c2 = densidadepopulacional2;
    break;
    default:
        valor2_c1 = valor2_c2 = 0;
        break;
    }

    // Soma
    float soma1 = valor1_c1 + valor2_c1;
    float soma2 = valor1_c2 + valor2_c2;

    // Resultado
    printf("\n=== Resultado ===\n");
    printf("%s: %.2f + %.2f = %.2f\n", cidade1, valor1_c1, valor2_c1, soma1);
    printf("%s: %.2f + %.2f = %.2f\n", cidade2, valor1_c2, valor2_c2, soma2);
    
    if (soma1 > soma2)
        printf("Vencedor: %s\n", cidade1);
    else if (soma2 > soma1)
        printf("Vencedor: %s\n", cidade2);
    else
        printf("Empate!\n");
    
    return 0;
    
} 