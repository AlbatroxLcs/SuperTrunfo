#include <stdio.h>

int main(){

    //Variáveis da Carta 1
    char estado1;
    char codigo1[20];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;
    float densidade1;
    float carpital1;

    //Variáveis da Carta 2
    char estado2;
    char codigo2[20];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;
    float densidade2;
    float carpital2;

    // Entrada e Saida da Carta 1
    printf("Cadastro da Carta 1 \n");

    printf("Digite o estado (A-Z): ");
    scanf("%c", &estado1);
    printf("O estado digitado foi: %c\n", estado1);

    printf("Digite o código da carta: "); //EX: (A01)
    scanf("%s", codigo1);
    printf("O código digitado foi: %s\n", codigo1);

    printf("Digite o nome da cidade: "); //EX: SP
    scanf("%s", cidade1);
    printf("A cidade  digitada foi: %s\n", cidade1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);
    printf("A população digitada foi: %d\n", populacao1);

    printf("Digite a área (km²): ");
    scanf("%f", &area1);
    printf("A área digitada foi: %.2f\n", area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    printf("O PIB digitado foi: %.2f\n", pib1);

    printf("Digite o número de pontos turisticos: ");
    scanf("%d", &pontos1);
    printf("O número de pontos turisticos digitado foi: %d\n", pontos1);

    densidade1 = (float) populacao1 / area1;

    printf("A Densidade populacional é: %.3f\n", densidade1);

    carpital1 = (float) populacao1 / pib1;

    printf("O PIB per capital é: %.3f\n", carpital1);
  
    
    // Entrada e Saida da Carta 2
    printf("Cadastro da Carta 2 \n");

    printf("Digite o estado (A-Z): ");
    scanf(" %c", &estado2); //OBS: Adicione um espaço antes do %c, para iniciar uma nova linha.
    printf("O estado digitado foi: %c\n", estado2);

    printf("Digite o código da carta: "); //EX: (A02)
    scanf("%s", codigo2);
    printf("O código digitado foi: %s\n", codigo2);

    printf("Digite o nome da cidade: "); //EX: SP
    scanf("%s", cidade2);
    printf("A cidade  digitada foi: %s\n", cidade2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);
    printf("A população digitada foi: %d\n", populacao2);

    printf("Digite a área (km²): ");
    scanf("%f", &area2);
    printf("A área digitada foi: %.2f\n", area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("O PIB digitado foi: %.2f\n", pib2);

    printf("Digite o número de pontos turisticos: ");
    scanf("%d", &pontos2);
    printf("O número de pontos turisticos digitado foi: %d\n", pontos2);

    densidade2 = (float) populacao2 / area2;

    printf("A Densidade populacional é: %.3f\n", densidade2);

    carpital2 = (float) populacao2 / pib2;

    printf("O PIB per capital é: %.3f\n", carpital2);

    return 0;
}
