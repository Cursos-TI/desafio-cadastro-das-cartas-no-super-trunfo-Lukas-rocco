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
   float super1 = (float) pop1 + area1 + pib1 +pontos1+ Densidade1 + pibpercapita1;

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
   printf("Super poder: %.2f\n", super1);
   
   printf("\n"); // apenas para dar mais espaços nas linhas para facilitar a leitura.

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
   float super2 = (float) pop2 + area2 + pib2 + pontos2 + Densidade2 + pibpercapita2;



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
     
   printf("\n"); // apenas para dar mais espaços nas linhas para facilitar a leitura.

   // EXEMPLO:

   //int num = 10;
   //float result = 10.0;

  // int comparison = (float)num == result;

   //printf("num == result: %d\n", comparison);
   
   int resultado1 = pop1 > pop2;
   float resultado2 =  area1 > area2;
   float resultado3 =  pib1 > pib2;
   int resultado4 = pontos1 > pontos2;
   float resultado5 = Densidade1 < Densidade2;
   float resultado6 = pibpercapita1 > pibpercapita2;
   float resultado7 =  super1 > super2;
   
   printf("População - Carta vencedora: %d \n", resultado1);
   printf("Área - Carta vencedora: %.f \n", resultado2);
   printf("PIB - Carta vencedora: %.f \n", resultado3);
   printf("Pontos turísticos - Carta vencedora: %d \n", resultado4);
   printf("Densidade populacional - Carta vencedora: %.f \n", resultado5);
   printf("PIB per capita - Carta vencedora: %.f \n", resultado6);
   printf("Super poder - Carta vencedora: %.f \n", resultado7);
   
   
   
       
       return 0;
}