#include <stdio.h>


int main() {

    int codigo, PIB, pontos;
    char cidade[50];
    float povo, area;

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
    scanf("%f", &PIB);

   
    

    printf("Nome da cidade: %s  -- Código da cidade: %d", cidade, codigo);
    printf("População: %f -- Pontos Turísticos: %d", povo, pontos);
    

    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

   
}
