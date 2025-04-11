#include <stdio.h>

int main (){

    char Estado;
    char Codigo [10];
    char Nome_da_Cidade [50];
    int Populacao;
    float Area;
    float PIB;
    int Numero_Pontos_turisticos;

    printf("Digite o estado:");
    scanf("%s", &Estado);
    printf("Estado: %c\n", Estado);

    printf("Digite o codigo da carta:");
    scanf("%s", &Codigo);
    printf("Codigo da carta: %s \n", Codigo);

    printf("Digite o nome da Cidade:");
    scanf("%s", &Nome_da_Cidade);
    printf("Nome da cidade: %s \n", Nome_da_Cidade);

    printf("Digite o numero Populacional:");
    scanf("%d", &Populacao);       
    printf("Numero Populacional: %d\n", Populacao);

    printf ("Digite a Area:");
    scanf ("%f", &Area);
    printf("Area Total: %f \n", Area);

    printf("Digite o PIB:");
    scanf("%f", &PIB);
    printf("PIB Total: %f \n", PIB);

    printf("Digite o Numero de Pontos turisticos:");
    scanf("%d", &Numero_Pontos_turisticos);
    printf("Numero Pontos turisticos: %d \n", Numero_Pontos_turisticos);

    return 0;


















}