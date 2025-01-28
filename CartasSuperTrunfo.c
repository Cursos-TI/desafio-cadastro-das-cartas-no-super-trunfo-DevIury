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

    printf("Digite o PIB: \n");
    scanf("%f", &PIB);

    printf("Digite a área: \n");
    scanf("%f", &area);

    printf("Cite quantos pontos turísticos a cidade possui: \n");
    scanf("%d", &pontos);


    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
