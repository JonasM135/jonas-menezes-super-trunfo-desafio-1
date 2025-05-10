#include <stdio.h>

int main() {

    char Estado1, Estado2;
    char Codigo1[4], Codigo2[4]; //como "enter" conta como uma caracter, usar [4] para aparecer 3 digitos no "codigo"
    char Cidade1[20], Cidade2[20];
    unsigned long int Populacao1, Populacao2; 
    float Area1, Area2;
    float PIB1, PIB2;
    int NPT1, NPT2; //abreviação de Números de Pontos Turisticos
    float Dp1, Dp2; //abreviação de densidade populacional
    float PIBpc1,PIBpc2; //abrevição de PIB per capita
    float SuperPoder1, SuperPoder2; //E a soma de todos os atributos

    //primeiro inserir os dados da programação com o printf e o scanf

    //inserir dados da primeira carta
    printf("\n***inserir dados da primeira carta***\n");

    // inserir Estado
    printf("Digite o Estado: ");
    scanf(" %c", &Estado1); //dar espaço antes do % para corrigir um bug
    
    //inserir Codigo
    printf("Digite o Codigo: ");
    scanf("%3s", &Codigo1); //usar "%3s" para aparecer somente os 3 caracteres que forem digitados
    
    //inserir Cidade
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", &Cidade1); //  Usando " %[^\n]" no lugar de "%s", permite nomes com espaços sem a utilização do “fgets” 

    //inserir população
    printf("população: ");
    scanf("%lu", &Populacao1);

    //inserir Área
    printf("Área: ");
    scanf("%f", &Area1);

    //inserir PIB
    printf("PIB: ");
    scanf("%f", &PIB1);

    //inserir numero de pontos turisticos (NPT)
    printf("Número de Pontos Turisticos: ");
    scanf("%d", &NPT1);

    Dp1 = Populacao1/Area1;
    PIBpc1 = (PIB1 * 1000000000) / (float)Populacao1;

    // Calcular o Super Poder 
    // Soma de todos os atributos para calcular o Super Poder 
    SuperPoder1 = Populacao1 + Area1 + PIB1 + NPT1 + (1 / Dp1) + PIBpc1; 

    //inserir dados da segunda carta
    printf("\n***inserir dados da segunda carta***\n");

     // inserir Estado
     printf("Digite o Estado: ");
     scanf(" %c", &Estado2); //dar espaço antes do % para corrigir um bug
     
     //inserir Codigo
     printf("Digite o Codigo: ");
     scanf("%3s", &Codigo2); //usar "%3s" para aparecer somente os "3" que forem digitados
     
     //inserir Cidade
     printf("Nome da Cidade: ");
     scanf(" %[^\n]", &Cidade2); // Usando " %[^\n]" no lugar de "%s", permite nomes com espaços sem a utilização do “fgets” 
 
     //inserir população
     printf("população: ");
     scanf("%lu", &Populacao2);
 
     //inserir Área
     printf("Área: ");
     scanf("%f", &Area2);
 
     //inserir PIB
     printf("PIB: ");
     scanf("%f", &PIB2);
 
     //inserir numero de pontos turisticos (NPT)
     printf("Número de Pontos Turisticos: ");
     scanf("%d", &NPT2);
 
     Dp2 = Populacao2/Area2;
     PIBpc2 = (PIB2 * 1000000000) / (float)Populacao2;

     // Calcular o Super Poder 
    // Soma de todos os atributos para calcular o Super Poder 
    SuperPoder2 = Populacao2 + Area2 + PIB2 + NPT2 + (1 / Dp2) + PIBpc2; 

    //inserir o printf para aparecer toda a "carta" de forma uniforme, depois de se inserido as informações
    printf("\nCARTA 1:\n");
    printf("Estado: %c\n", Estado1);
    printf("Codigo: %s\n", Codigo1);
    printf("Cidade: %s\n", Cidade1);
    printf("População: %lu\n", Populacao1);
    printf("Área: %.2f Km²\n", Area1); //inserir comentario depois dos modificadores de formato.
    printf("PIB: %.2f bilhões de reais\n", PIB1); //o ".2" entre os modificadores são para aparecer somente 2 digitos depois da virgula
    printf("Número de Pontos Turísticos: %d\n", NPT1);
    printf("Densidade papulacional: %.2f hab/km²\n" , Dp1);
    printf("PIB per capita: %.2f Reais\n", PIBpc1);


    printf("\nCARTA 2:\n");
    printf("Estado: %c\n", Estado2);
    printf("Codigo: %s\n", Codigo2);
    printf("Cidade: %s\n", Cidade2);
    printf("População: %lu\n", Populacao2);
    printf("Área: %.2f Km²\n", Area2); //inserir comentario depois dos modificadores de formato.
    printf("PIB: %.2f bilhões de reais\n", PIB2); //o ".2" entre os modificadores são para aparecer somente 2 digitos depois da virgula
    printf("Número de Pontos Turísticos: %d\n", NPT2);
    printf("Densidade papulacional: %.2f hab/km²\n" , Dp2);
    printf("PIB per capita: %.2f Reais\n", PIBpc2);

    // Comparar os atributos entre as cartas 
    printf("\nCARTA 1 VS CARTA 2 (CARTA 1 = 1, CARTA 2 = 0):\n"); 

    // Comparar População 
    printf("População: "); 
    printf("%lu\n", (Populacao1 > Populacao2)); 

    // Comparar Área 
    printf("Área: "); 
    printf("%d\n", (Area1 > Area2)); 

    // Comparar PIB 
    printf("PIB: "); 
    printf("%d\n", (PIB1 > PIB2)); 

    // Comparar Número de Pontos Turísticos 
    printf("Numero de Pontos Turísticos: "); 
    printf("%d\n", (NPT1 > NPT2)); 

    // Comparar Densidade Populacional (menor densidade é melhor) 
    printf("Densidade Populacional: "); 
    printf("%d\n", (Dp1 < Dp2)); 

    // Comparar PIB per capita 
    printf("PIB per capita: "); 
    printf("%d\n", (PIBpc1 > PIBpc2)); 

    // Comparar Super Poder 
    printf("Super Poder: "); 
    printf("%d\n", (SuperPoder1 > SuperPoder2)); 
   
    return 0;
}