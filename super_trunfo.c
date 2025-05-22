#include <stdio.h>

int main (){
    int Populacao1, Pontos_Turisticos1;
    float Area1, PIB1;
    char Estado1 [50], Codigo1[50], Cidade1 [50];

    printf("Digite o nome do Estado:\n");
    scanf("%s", Estado1);

    printf("Digite o Código da Carta :\n");
    scanf("%s", Codigo1);

    printf("Digite o nome da Cidade:\n");
    scanf("%s", Cidade1);

    printf("Digite a População:\n");
    scanf("%d", &Populacao1);

    printf("Digite o número de Pontos Turísticos:\n");
    scanf("%d", &Pontos_Turisticos1);

    printf("Digite a Área:\n");
    scanf("%f", &Area1);

    printf("Digite o PIB:\n");
    scanf("%f", &PIB1);

    printf("\nCARTA 1\n");
    printf("Estado: %s\n", Estado1);
    printf("Código: %s\n", Codigo1);
    printf("Cidade: %s\n", Cidade1);
    printf("População: %d\n", Populacao1);
    printf("Pontos Turísticos: %d\n", Pontos_Turisticos1);
    printf("Área: %.2f km²\n", Area1);
    printf("PIB: R$ %.2f\n", PIB1);



    int Populacao2, Pontos_Turisticos2;
    float Area2, PIB2;
    char Estado2 [50], Codigo2[50], Cidade2 [50];

    printf("Digite o nome do Estado:\n");
    scanf("%s", Estado2);

    printf("Digite o Código da Carta :\n");
    scanf("%s", Codigo2);

    printf("Digite o nome da Cidade:\n");
    scanf("%s", Cidade2);

    printf("Digite a População:\n");
    scanf("%d", &Populacao2);

    printf("Digite o número de Pontos Turísticos:\n");
    scanf("%d", &Pontos_Turisticos2);

    printf("Digite a Área:\n");
    scanf("%f", &Area2);

    printf("Digite o PIB:\n");
    scanf("%f", &PIB2);

    printf("\nCARTA 2\n");
    printf("Estado: %s\n", Estado2);
    printf("Código: %s\n", Codigo2);
    printf("Cidade: %s\n", Cidade2);
    printf("População: %d\n", Populacao2);
    printf("Pontos Turísticos: %d\n", Pontos_Turisticos2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: R$ %.2f\n", PIB2);

    return 0;
}