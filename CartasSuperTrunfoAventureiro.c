#include <stdio.h>
// Necessário para utilizar as funções fgets e strcspn.
#include <string.h>

int main() {
    // Declaração de variáveis para armazenar os dados das cartas
    char estado1, estado2; 
    char codigo_da_carta1[4], codigo_da_carta2[4];
    char nome_da_cidade1[30], nome_da_cidade2[30];
    int populacao1, populacao2, pontos_turisticos1, pontos_turisticos2;
    float area1, area2, pib1, pib2;
    double densidade_populacional1, densidade_populacional2, pib_capita1, pib_capita2;

    // Mensagem de boas-vindas e breve explicação do jogo
    printf("Olá, seja bem vindo ao jogo Super Trunfo!\n\n");
    printf("Super Trunfo é um jogo de cartas no qual cada carta contém informações sobre um determinado tema. \n");
    printf("O tema deste Super Trunfo é 'Países', onde você comparará os atributos numéricos das cidades como, população, área, pib e quantidade de pontos turísticos.");
    printf("Os jogadores se revezam escolhendo um atributo para comparar com a carta do oponente, e aquele com o valor mais alto vence a rodada e fica com a carta do adversário.\n\n");
        
    printf("Para começar, vamos cadastar nossas cartas. Siga, conforme instruções.\n\n");

    // Cadastro da Primeira Carta--------------------------------------------------------------------------------------------------------------------------------------------------

    printf("Carta 1: \n\n");

    // Obtendo o valor para variável estado1
    printf("Informe uma letra de 'A' a 'H'. Essa letra irá será a identificação para o nosso estado: ");
    scanf(" %c", &estado1);

    // Consome o caractere de nova linha deixado no buffer
    getchar();

    // Obtendo o valor para variável codigo_da_carta1
    printf("Com base na letra que digitou na opção anterior. Agora vamos criar uma identificação para essa carta (Ex: 01): ");
    fgets(codigo_da_carta1, 4 , stdin);
    codigo_da_carta1[strcspn(codigo_da_carta1, "\n")] = 0;

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

    printf("\n");

    printf("Muito bem! Você cadastrou a primeira carta. Agora, vamos cadastrar os dados da segunda.\n\n");

    // Cálculo densidade populacional carta 1
    // Utilizado conversão explicita (casting) para correção na saída de dados.
    densidade_populacional1 = (double) populacao1 / area1;

    // Calculo pib per capita carta 1
    // Utilizado conversão explicita (casting) para correção na saída de dados.
    // O valor exibido está em bilhões, para a saída deseja, foi necessário multiplicar por 1b para depois dividir.
    pib_capita1 = (double) (pib1 * 1000000000) / populacao1;

    // Cadastro da Segunda Carta--------------------------------------------------------------------------------------------------------------------------------------------------

    printf("Carta 2: \n\n");

    // Obtendo o valor para variável estado2
    printf("Informe uma letra de 'A' a 'H'. Essa letra irá será a identificação para o nosso estado: ");
    scanf(" %c", &estado2);

    // Consome o caractere de nova linha deixado no buffer
    getchar();    
    
    // Obtendo o valor para variável codigo_da_carta2    
    printf("Com base na letra que digitou na opção anterior. Agora vamos criar uma identificação para essa carta (Ex: 02): ");
    // fgets foi utilizado para ler a entrada do usuário, incluindo espaços em branco.
    fgets(codigo_da_carta2, 4 , stdin);
    // strcspn foi utilizado para encontrar a posição do caracter de nova linha '\n' e substituí-lo por '0'. 
    codigo_da_carta2[strcspn(codigo_da_carta2, "\n")] = 0;

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

    // Cálculo densidade populacional carta 2
    // Utilizado conversão explicita (casting) para correção na saída de dados.
    densidade_populacional2 = (double) populacao2 / area2;

    // Calculo pib per capita carta 2
    // Utilizado conversão explicita (casting) para correção na saída de dados
    // O valor exibido está em bilhões, para a saída deseja, foi necessário multiplicar por 1b para depois dividir.
    pib_capita2 = (double) (pib2 * 1000000000)  / populacao2;    

    printf("\n");

    // Exibição dos dados cadastrados
    printf("Muito bem, você finalizou a inserção de dados para nossas cartas. Calculamos automaticamente a densidade populacional e PIB per Capita.\n");
    printf("Confira abaixo: \n\n");

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, codigo_da_carta1);
    printf("Nome da Cidade: %s\n", nome_da_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per Capita: %.2f reais\n\n", pib_capita1);

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, codigo_da_carta2);
    printf("Nome da Cidade: %s\n", nome_da_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n\n", pib_capita2);

    return 0;
}
