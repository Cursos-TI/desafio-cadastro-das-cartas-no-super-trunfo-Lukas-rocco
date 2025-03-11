#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    char estado1[25], codigo1[4], cidade1[20];
    int pop1, pontos1;
    float area1, pib1;

    char estado2[20], codigo2[4], cidade2[19];
    int pop2, pontos2;
    float area2, pib2;

    printf("Desafio do Super Trunfo!\n");

    int opcao, escolhajogador, atributo;

    printf("Menu principal.\n");
    printf("1. iniciar o jogo.\n");
    printf("2. regras do jogo.\n");
    printf("3. Sair do jogo.\n");
    scanf("%d", &opcao);

    srand(time(0));

    switch (opcao) {
    case 1:
        printf("Escolha a carta\n");
        printf("1. Carta 1\n");
        printf("2. Carta 2\n");
        scanf("%d", &escolhajogador);
        break;
    case 2:
        printf("Escolha uma carta e compare seu atributo com a outra.\n");
        return 0;
    case 3:
        printf("Saindo do jogo...\n");
        return 0;
    default:
        printf("Opção inválida\n");
        return 0;
    }

   
    printf("Carta 1:\n");
    printf("Qual estado da sua carta? ");
    scanf("%19s", estado1);
    printf("Qual o codigo dela? ");
    scanf("%4s", codigo1);
    printf("Qual a cidade? ");
    scanf("%19s", cidade1);
    printf("Qual população da cidade? ");
    scanf("%d", &pop1);
    printf("Qual a área da cidade? ");
    scanf("%f", &area1);
    printf("Qual o PIB? ");
    scanf("%f", &pib1);
    printf("Quantos pontos turísticos possui? ");
    scanf("%d", &pontos1);

    
    float Densidade1 = (float)pop1 / area1;
    float pibpercapita1 = (float)pib1 * 1000000000 / pop1;
    float super1 = (float)pop1 + area1 + pib1 + pontos1 + Densidade1 + pibpercapita1;

    
    printf("\nAgora a segunda carta\n");
    printf("Qual estado? ");
    scanf("%19s", estado2);
    printf("Qual o codigo? ");
    scanf("%4s", codigo2);
    printf("Qual a cidade? ");
    scanf("%19s", cidade2);
    printf("Qual população da cidade? ");
    scanf("%d", &pop2);
    printf("Qual a área dessa cidade? ");
    scanf("%f", &area2);
    printf("Qual o PIB da cidade? ");
    scanf("%f", &pib2);
    printf("Quantos pontos turísticos tem? ");
    scanf("%d", &pontos2);

   
    float Densidade2 = (float)pop2 / area2;
    float pibpercapita2 = (float)pib2 * 1000000000 / pop2;
    float super2 = (float)pop2 + area2 + pib2 + pontos2 + Densidade2 + pibpercapita2;

    
    printf("Carta 1:\n");
   printf("Estado: %s \n", estado1);
   printf("Codigo: %s \n",codigo1);
   printf("Cidade: %s \n",cidade1);
   printf("População: %d \n",pop1);
   printf("Área: %.2f Km²\n",area1);
   printf("PIB: %.2f bilhões de reais\n",pib1);
   printf("Pontos turísticos: %d \n",pontos1);
   printf("Desidade populacional: %.2f hab/km²\n", Densidade1);
   printf("PIB per capita: %.2f reais\n", pibpercapita1);
   printf("Super poder: %.2f\n", super1)

   printf("Carta 2:\n");
   printf("Estado: %s \n", estado2);
   printf("Codigo: %s \n",codigo2);
   printf("Cidade: %s \n",cidade2);
   printf("População: %d \n",pop2);
   printf("Área: %.2f Km²\n",area2);
   printf("PIB: %.2f bilhões de reais\n",pib2);
   printf("Pontos turísticos: %d \n",pontos2);
   printf("Desidade populacional: %.2f hab/km²\n", Densidade2);
   printf("PIB per capita: %.2f reais\n", pibpercapita2);
   printf("Super poder: %.2f \n", super2);
 
    

    
    printf("\nQual atributo será escolhido? \n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos turísticos\n");
    printf("5. Densidade populacional\n");
    printf("6. PIB per capita\n");
    printf("7. Super poder\n");
    scanf("%d", &atributo);

    
    if (atributo == 1) {  
        if (pop1 > pop2) {
            printf("População: %d - %d / carta 1 venceu!\n", pop1, pop2);
        } else if (pop1 < pop2) {
            printf("População: %d - %d / carta 2 venceu!\n", pop1, pop2);
        } else {
            printf("Empate! População: %d - %d\n", pop1, pop2);
        }
    }
    else if (atributo == 2) {  
        if (area1 > area2) {
            printf("Área: %.2f - %.2f / carta 1 venceu!\n", area1, area2);
        } else if (area1 < area2) {
            printf("Área: %.2f - %.2f / carta 2 venceu!\n", area1, area2);
        } else {
            printf("Empate! Área: %.2f - %.2f\n", area1, area2);
        }
    }
    else if (atributo == 3) {  
        if (pib1 > pib2) {
            printf("PIB: %.2f - %.2f / carta 1 venceu!\n", pib1, pib2);
        } else if (pib1 < pib2) {
            printf("PIB: %.2f - %.2f / carta 2 venceu!\n", pib1, pib2);
        } else {
            printf("Empate! PIB: %.2f - %.2f\n", pib1, pib2);
        }
    }
    else if (atributo == 4) { 
        if (pontos1 > pontos2) {
            printf("Pontos turísticos: %d - %d / carta 1 venceu!\n", pontos1, pontos2);
        } else if (pontos1 < pontos2) {
            printf("Pontos turísticos: %d - %d / carta 2 venceu!\n", pontos1, pontos2);
        } else {
            printf("Empate! Pontos turísticos: %d - %d\n", pontos1, pontos2);
        }
    }
    else if (atributo == 5) { 
        if (Densidade1 > Densidade2) {
            printf("Densidade: %.2f - %.2f / carta 1 venceu!\n", Densidade1, Densidade2);
        } else if (Densidade1 < Densidade2) {
            printf("Densidade: %.2f - %.2f / carta 2 venceu!\n", Densidade1, Densidade2);
        } else {
            printf("Empate! Densidade: %.2f - %.2f\n", Densidade1, Densidade2);
        }
    }
    else if (atributo == 6) {  
        if (pibpercapita1 > pibpercapita2) {
            printf("PIB per capita: %.2f - %.2f / carta 1 venceu!\n", pibpercapita1, pibpercapita2);
        } else if (pibpercapita1 < pibpercapita2) {
            printf("PIB per capita: %.2f - %.2f / carta 2 venceu!\n", pibpercapita1, pibpercapita2);
        } else {
            printf("Empate! PIB per capita: %.2f - %.2f\n", pibpercapita1, pibpercapita2);
        }
    }
    else if (atributo == 7) {  
        if (super1 > super2) {
            printf("Super poder: %.2f - %.2f / carta 1 venceu!\n", super1, super2);
        } else if (super1 < super2) {
            printf("Super poder: %.2f - %.2f / carta 2 venceu!\n", super1, super2);
        } else {
            printf("Empate! Super poder: %.2f - %.2f\n", super1, super2);
        }
    }

    return 0;
}