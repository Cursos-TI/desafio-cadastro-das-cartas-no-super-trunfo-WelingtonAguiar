/*
Nível Básico
Desafio: nível novato
Criando as Cartas do Super Trunfo

Neste primeiro nível, seu objetivo é construir a base do nosso jogo Super Trunfo de Países: um sistema para cadastrar as cartas com informações sobre as cidades. 
Você vai praticar a leitura de dados do usuário, o armazenamento em variáveis e a exibição dessas informações na tela.

O que você vai fazer

Criar um programa em C que permita ao usuário inserir os dados de duas cartas do Super Trunfo. Para cada carta, o usuário deverá fornecer as seguintes informações:

Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)
Nome da Cidade: O nome da cidade. Tipo: char[] (string)
População: O número de habitantes da cidade. Tipo: int
Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float
PIB: O Produto Interno Bruto da cidade. Tipo: float
Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int
*/

#include <stdio.h>
#include <string.h>

int main() {
    // Declaração de variáveis para armazenar os dados das cartas
    char estado1, estado2, codigo_da_carta1[4], codigo_da_carta2[4], nome_da_cidade1[30], nome_da_cidade2[30];
    int populacao1, populacao2, pontos_turisticos1, pontos_turisticos2;
    float area1, area2, pib1, pib2;

    // Mensagem de boas-vindas e breve explicação do jogo
    printf("Olá, seja bem vindo ao jogo Super Trunfo!\n\n");
    printf("Super Trunfo é um jogo de cartas no qual cada carta contém informações sobre um determinado tema. \n");
    printf("O tema deste Super Trunfo é 'Países', onde você comparará os atributos numéricos das cidades como, população, área, pib e quantidade de pontos turísticos.");
    printf("Os jogadores se revezam escolhendo um atributo para comparar com a carta do oponente, e aquele com o valor mais alto vence a rodada e fica com a carta do adversário.\n\n");
        
    printf("Para começar, vamos cadastar nossas cartas. Siga, conforme instruções.\n\n");

    // Cadastro da primeira carta
    printf("Carta 1: \n\n");

    // Obtendo o valor para variável estado1
    printf("Informe uma letra de 'A' a 'H'. Essa letra irá será a identificação para o nosso estado: ");
    scanf(" %c", &estado1);

    //Consome o caracter de nova linha deixado no buffer
    getchar();

    // Obtendo o valor para variável codigo_da_carta1
    printf("Com base na letra que digitou na opção anterior. Agora vamos criar uma identificação para essa carta (Ex: A01): ");
    fgets(codigo_da_carta1, 4 , stdin);
    codigo_da_carta1[strcspn(codigo_da_carta1, "\n")] = 0;

    //Consome o caracter de nova linha deixado no buffer
    getchar();

    // Obtendo o valor para variável nome_da_cidade1
    printf("Agora, informe o nome dessa cidade: ");
    // fgets foi utilizado para ler a entrada do usuário, incluindo espaços em branco.
    fgets(nome_da_cidade1, 30, stdin);
    // strcspn foi utilizado para encontrar a posição do caracter de nova linha '\n' e substituí-lo por '0'. 
    nome_da_cidade1[strcspn(nome_da_cidade1, "\n")] = 0;

    // Obtendo o valor para variável populacao1
    printf("Agora, informe a população dessa cidade: ");
    scanf("%d", &populacao1);

    // Obtendo o valor para variável area1
    printf("Agora, informe a área dessa cidade: ");
    scanf("%f", &area1);

    // Obtendo o valor para variável pib1
    printf("Muito bem, agora informe o PIB dessa cidade: ");
    scanf("%f", &pib1);

    // Obtendo o valor para variável pontos_turisticos1
    printf("E por último, informe a quantidade de pontos turísticos dessa cidade: ");
    scanf("%d", &pontos_turisticos1);

    // Consome o caractere de nova linha deixado no buffer
    getchar();

    printf("\n");

    printf("Muito bem! Você cadastrou a primeira carta. Agora, vamos cadastrar os dados da segunda.\n\n");

    // Cadastro da segunda carta
    printf("Carta 2: \n\n");

    // Obtendo o valor para variável estado2
    printf("Informe uma letra de 'A' a 'H'. Essa letra irá será a identificação para o nosso estado: ");
    scanf(" %c", &estado2);

    // Consome o caractere de nova linha deixado no buffer
    getchar();

    // Obtendo o valor para variável codigo_da_carta2    
    printf("Com base na letra que digitou na opção anterior. Agora vamos criar uma identificação para essa carta (Ex: B02): ");
    // fgets foi utilizado para ler a entrada do usuário, incluindo espaços em branco.
    fgets(codigo_da_carta2, 4 , stdin);
    // strcspn foi utilizado para encontrar a posição do caracter de nova linha '\n' e substituí-lo por '0'. 
    codigo_da_carta2[strcspn(codigo_da_carta2, "\n")] = 0;

    // Consome o caractere de nova linha deixado no buffer
    getchar();

    // Obtendo o valor para variável nome_da_cidade2
    printf("Agora, informe o nome dessa cidade: ");
    fgets(nome_da_cidade2, 30, stdin);
    nome_da_cidade2[strcspn(nome_da_cidade2, "\n")] = 0;

    // Obtendo o valor para variável populacao2
    printf("Agora, informe a população dessa cidade: ");
    scanf("%d", &populacao2);

    // Obtendo o valor para variável area2
    printf("Agora, informe a área dessa cidade: ");
    scanf("%f", &area2);

    // Obtendo o valor para variável pib2
    printf("Muito bem, agora informe o PIB dessa cidade: ");
    scanf("%f", &pib2);

    // Obtendo o valor para variável pontos_turisticos2
    printf("E por último, informe a quantidade de pontos turísticos dessa cidade: ");
    scanf("%d", &pontos_turisticos2);

    printf("\n");

    // Exibição dos dados cadastrados
    printf("Muito bem, você finalizou a inserção de dados para nossas cartas, as informações foram:\n\n");

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo_da_carta1);
    printf("Nome da Cidade: %s\n", nome_da_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);

    printf("\n");

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo_da_carta2);
    printf("Nome da Cidade: %s\n", nome_da_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n\n", pontos_turisticos2);

    return 0;
}
