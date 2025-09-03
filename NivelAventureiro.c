#include <stdio.h>
#include <string.h> // biblioteca para strcspn

// Função para limpar o buffer do teclado após scanf
void limparBuffer() {
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}

// Tema 3 - Desenvolvendo a Lógica do Jogo - Nível Aventureiro
int main() {
    // Definição das variáveis para armazenar as propriedades dos Países
    char nomepais1[50], nomepais2[50];
    int numpt1, numpt2, populacao1, populacao2, opcao;
    float aream21, aream22, pib1, pib2, densPop1, densPop2;

    // Cadastro das Cartas:
    
    printf("****** PAÍS 1 ******\n");

    printf("Digite o nome do país:\n");
    fgets(nomepais1, sizeof(nomepais1), stdin);
    nomepais1[strcspn(nomepais1, "\n")] = 0;

    printf("Digite a população do país:\n");
    scanf("%d", &populacao1);

    printf("Digite a área do país em metros quadrados:\n");
    scanf("%f", &aream21);

    printf("Digite o PIB deste país:\n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos deste país:\n");
    scanf("%d", &numpt1);

    // Calculando a Densidade Populacional do primeiro País
    densPop1 = (float) populacao1 / aream21;

    // Cadastro do segundo País
    printf("\n****** PAÍS 2 ******\n");

    limparBuffer(); // limpa buffer antes do próximo fgets
    printf("Digite o nome do país:\n");
    fgets(nomepais2, sizeof(nomepais2), stdin);
    nomepais2[strcspn(nomepais2, "\n")] = 0;

    printf("Digite a população deste país:\n");
    scanf("%d", &populacao2);

    printf("Digite a área do país em metros quadrados:\n");
    scanf("%f", &aream22);

    printf("Digite o PIB deste país:\n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos deste país:\n");
    scanf("%d", &numpt2);

    // Calculando a Densidade Populacional da segunda Carta
    densPop2 = (float) populacao2 / aream22;

    // MENU DE COMPARAÇÃO
    printf("\n******* MENU PRINCIPAL *******\n");
    printf("Escolha o atributo para disputa:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("\n-- Atributo: População --\n");
            printf("%s com %d habitantes e %s com %d habitantes\n", nomepais1, populacao1, nomepais2, populacao2);
            if (populacao1 > populacao2)
                printf("Resultado: %s venceu!\n", nomepais1);
            else if (populacao1 == populacao2)
                printf("Resultado: %s empatou com %s\n", nomepais1, nomepais2);
            else
                printf("Resultado: %s venceu!\n", nomepais2);
            break;

        case 2:
            printf("\n-- Atributo: Área --\n");
            printf("%s com %.2f m² e %s com %.2f m²\n", nomepais1, aream21, nomepais2, aream22);
            if (aream21 > aream22)
                printf("Resultado: %s venceu!\n", nomepais1);
            else if (aream21 == aream22)
                printf("Resultado: %s empatou com %s\n", nomepais1, nomepais2);
            else
                printf("Resultado: %s venceu!\n", nomepais2);
            break;

        case 3:
            printf("\n-- Atributo: PIB --\n");
            printf("%s com %.2f bilhões de reais e %s com %.2f bilhões de reais\n", nomepais1, pib1, nomepais2, pib2);
            if (pib1 > pib2)
                printf("Resultado: %s venceu!\n", nomepais1);
            else if (pib1 == pib2)
                printf("Resultado: %s empatou com %s\n", nomepais1, nomepais2);
            else
                printf("Resultado: %s venceu!\n", nomepais2);
            break;

        case 4:
            printf("\n-- Atributo: Pontos Turísticos --\n");
            printf("%s com %d pontos e %s com %d pontos\n", nomepais1, numpt1, nomepais2, numpt2);
            if (numpt1 > numpt2)
                printf("Resultado: %s venceu!\n", nomepais1);
            else if (numpt1 == numpt2)
                printf("Resultado: %s empatou com %s\n", nomepais1, nomepais2);
            else
                printf("Resultado: %s venceu!\n", nomepais2);
            break;

        case 5:
            printf("\n-- Atributo: Densidade Demográfica --\n");
            printf("%s com %.2f Hab/Km² e %s com %.2f Hab/Km²\n", nomepais1, densPop1, nomepais2, densPop2);
            if (densPop1 > densPop2)
                printf("Resultado: %s venceu!\n", nomepais1);
            else if (densPop1 == densPop2)
                printf("Resultado: %s empatou com %s\n", nomepais1, nomepais2);
            else
                printf("Resultado: %s venceu!\n", nomepais2);
            break;

        default:
            printf("Opção inválida!\n");
            break;
    }

    return 0;
}