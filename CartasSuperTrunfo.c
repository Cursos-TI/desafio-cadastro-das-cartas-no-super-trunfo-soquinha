#include <stdio.h>

// Desafio Super Trunfo
// Cadastro de cartas para usuários

int main() {

     // Variáveis para a primeira carta

    char estado[30], cidade[20], carta[4]; // Variável criada no tipo char, para armazenar o nome do estado, da cidade e da carta
    int populacao, pt; // Variável criada no tipo inteiro, para armazenar a população da cidade e a quantidade de pontos turísticos 
    float area, pib; // Variável criada no tipo float, para armazenar a área e o PIB

    // Variáveis para a segunda carta

    char estado2[30], cidade2[20], carta2[4]; // Variável criada no tipo char, para armazenar o nome do estado, da cidade e da carta da segunda carta
    int populacao2, pt2; // Variável criada no tipo inteiro, para armazenar a população da cidade e a quantidade de pontos turísticos da segunda carta
    float area2, pib2; // Variável criada no tipo float, para armazenar a área e o PIB da segunda carta
    
    // Entrada e saída da primeira carta

    printf("Olá, jogador! Para começarmos, precisaremos que você registre duas cartas!\n");
    printf("Vamos registrar a primeira carta.");

    printf("Defina um código para sua carta: (Exemplo: A03) \n");
    scanf(" %s", carta);

    printf("Informe o nome do estado: \n");
    getchar ();
    scanf(" %[^\n]", estado);

    printf("Informe o nome da cidade: \n");
    getchar ();
    scanf(" %[^\n]", cidade);

    printf("Informe a quantidade de habitantes desta cidade: \n");
    scanf(" %d", &populacao);

    printf("Informe a área (em km²) desta cidade: \n");
    scanf(" %f", &area);

    printf("Informe o PIB atual desta cidade: \n");
    scanf(" %f", &pib);

    printf("Informe a quantidade de pontos turísticos que há nesta cidade: \n");
    scanf(" %d", &pt);

    // Entrada e saída da segunda carta

    printf("Agora, vamos criar sua segunda carta. \n");
    printf("Defina o código para sua segunda carta: (Exemplo: B04) \n");
    scanf(" %s", carta2);

    printf("Informe o nome do estado: \n");
    getchar ();
    scanf(" %[^\n]", estado2);
    
    printf("Informe o nome da cidade: \n");
    getchar ();
    scanf(" %[^\n]", cidade2);

    printf("Insira a quantidade de habitantes desta cidade: \n");
    scanf("%d", &populacao2);

    printf("Insira a área (em km²) desta cidade: \n");
    scanf("%f", &area2);

    printf("Insira o PIB atual desta cidade: \n");
    scanf("%f", &pib2);

    printf("Insira a quantidade de pontos turísticos dessa cidade: \n");
    scanf("%d", &pt2);

    // Atributos da PRIMEIRA carta cadastrada pelo usuário

    printf("Suas cartas foram criadas com sucesso!!! \n");
    printf("Estes são os atributos da sua primeira carta: \n");
    printf("Código: %s \n", carta);
    printf("Estado: %s \n", estado);
    printf("Cidade: %s \n", cidade);
    printf("População: %d habitantes \n", populacao);
    printf("Área: %.1fkm² \n", area); 
    printf("PIB: R$%.1f \n", pib);  
    printf("Pontos turísticos: %d \n", pt);

    // Atributos da SEGUNDA carta cadastrada pelo usuário

    printf("Estes são os atributos da sua segunda carta! \n");
    printf("Código: %s \n", carta2);
    printf("Estado: %s \n", estado2);
    printf("Cidade: %s \n", cidade2);
    printf("População: %d habitantes \n", populacao2);
    printf("Área: %.1fkm² \n", area2);  
    printf("PIB: R$%.1f \n", pib2);  
    printf("Pontos turísticos: %d \n", pt2);

    printf("Obrigado por realizar o cadastro. Boa jogatina!");

    return 0;
}