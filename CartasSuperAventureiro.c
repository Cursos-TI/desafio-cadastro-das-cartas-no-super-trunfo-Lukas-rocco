#include <stdio.h>

int main(){

    char estado1[25];
    char codigo1 [4];
    char cidade1[20];
    int pop1;
    float area1;
    float pib1;
    int pontos1;
   
    char estado2 [20];
    char codigo2[4];
    char cidade2[19];
    int pop2;
    float area2;
    float pib2 ;
    int pontos2;
   
       printf("Desafio do Super Trunfo!\n");
    
    printf("\n"); // apenas para dar mais espaços nas linhas para facilitar a leitura.
    
    printf("Carta 1:\n");
   
    printf("Qual estado da sua carta? ");
   scanf("%19s", estado1);
   
   printf("Qual o codigo dela? ");
   scanf("%4s",codigo1);
   
   printf("Qual a cidade? ");
   scanf("%19s", cidade1);
   
   printf("Qual população da cidade? ");
   scanf("%d", &pop1);
   
   printf("Qual a área da cidade? ");
   scanf("%f",&area1);
   
   printf("Qual o PIB? ");
   scanf("%f", &pib1);
   
   printf("Quantos pontos turísticos possui? ");
   scanf("%d",&pontos1);
   
   
   float Densidade1 = (float) pop1/ area1;
   float pibpercapita1 = (float) pib1 * 1000000000 / pop1;
   
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
   
   
   

   printf("Agora a segunda carta\n");
   
   printf("Qual estado? ");
   scanf("%s", estado2);
   
   printf("Qual o codigo? ");
   scanf("%s", codigo2);
   
   printf("Qual a cidade? ");
   scanf("%s", cidade2);
   
   printf("Qual população da cidade? ");
   scanf("%d", &pop2);
   
   printf("Qual a area dessa cidade? ");
   scanf("%f", &area2);
   
   printf("Qual o pib da cidade? ");
   scanf("%f", &pib2);
   
   printf("Quantos pontos turísticos tem? ");
   scanf("%d", &pontos2);
   
   float Densidade2 = (float) pop2/ area2;
   float pibpercapita2 =(float) pib2* 1000000000 / pop2;




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

   
   
   
   
   
   
   
   
   
   
       
       return 0;
   }