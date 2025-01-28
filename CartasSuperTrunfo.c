#include <stdio.h>


int main() {

    int codigo, pontos;
    char cidade[50];
    float povo, area;
    double PIB;

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade);

    printf("Digite o código da cidade: \n");
    scanf("%d", &codigo);

    printf("Digite a população: \n");
    scanf("%f", &povo);

    printf("Cite quantos pontos turísticos a cidade possui: \n");
    scanf("%d", &pontos);

    printf("Digite a área: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%lf", &PIB);

   
    

    printf("Nome da cidade: %s  -- Código da cidade: %d\n", cidade, codigo);
    printf("População: %f -- Pontos Turísticos: %d\n", povo, pontos);
    printf("Área: %fkm³ -- PIB: %lfR$\n", area, PIB);

    return 0;
   
}
