#include <stdio.h>
#include <string.h>

// Função para limpar o buffer após scanf
void limparBuffer() {
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}

int main() {
    char nomepais1[50], nomepais2[50];
    int populacao1, populacao2, numpt1, numpt2, opcao;
    float aream21, aream22, pib1, pib2, densPop1, densPop2;

    // ========== Cadastro País 1 ==========
    printf("\n================== PAÍS 1 ==================\n");

    
    printf("→ Nome do país: ");
    fgets(nomepais1, sizeof(nomepais1), stdin);
    nomepais1[strcspn(nomepais1, "\n")] = 0;

    printf("→ População (habitantes): ");
    scanf("%d", &populacao1);

    printf("→ Área (em quilometros quadrados): ");
    scanf("%f", &aream21);

    printf("→ PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("→ Número de pontos turísticos: ");
    scanf("%d", &numpt1);

    //Conversão explícita da variável populacao1 para float
    densPop1 = (float) populacao1 / aream21;

    // ========== Cadastro País 2 ==========
    printf("\n================== PAÍS 2 ==================\n");

    limparBuffer();
    printf("→ Nome do país: ");
    fgets(nomepais2, sizeof(nomepais2), stdin);
    nomepais2[strcspn(nomepais2, "\n")] = 0;

    printf("→ População (habitantes): ");
    scanf("%d", &populacao2);

    printf("→ Área (em quilometros quadrados): ");
    scanf("%f", &aream22);

    printf("→ PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("→ Número de pontos turísticos: ");
    scanf("%d", &numpt2);

    //Conversão explícita da variável populacao2 para float
    densPop2 = (float) populacao2 / aream22;

    // ========== Menu de Atributos ==========
    printf("\n================== MENU PRINCIPAL ==================\n");
    printf("Escolha o atributo para disputa:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("→ Sua escolha: ");
    scanf("%d", &opcao);

    printf("\n================== RESULTADO ==================\n");

    switch (opcao) {
        case 1:
            printf("🏁 Atributo: População\n");
            printf("- %s: %d habitantes\n", nomepais1, populacao1);
            printf("- %s: %d habitantes\n", nomepais2, populacao2);
            if (populacao1 > populacao2)
                printf("✅ Resultado: %s venceu!\n", nomepais1);
            else if (populacao1 < populacao2)
                printf("✅ Resultado: %s venceu!\n", nomepais2);
            else
                printf("🤝 Resultado: Empate entre %s e %s!\n", nomepais1, nomepais2);
            break;

        case 2:
            printf("🏁 Atributo: Área\n");
            printf("- %s: %.2f Km²\n", nomepais1, aream21);
            printf("- %s: %.2f Km²\n", nomepais2, aream22);
            if (aream21 > aream22)
                printf("✅ Resultado: %s venceu!\n", nomepais1);
            else if (aream21 < aream22)
                printf("✅ Resultado: %s venceu!\n", nomepais2);
            else
                printf("🤝 Resultado: Empate entre %s e %s!\n", nomepais1, nomepais2);
            break;

        case 3:
            printf("🏁 Atributo: PIB\n");
            printf("- %s: %.2f bilhões de reais\n", nomepais1, pib1);
            printf("- %s: %.2f bilhões de reais\n", nomepais2, pib2);
            if (pib1 > pib2)
                printf("✅ Resultado: %s venceu!\n", nomepais1);
            else if (pib1 < pib2)
                printf("✅ Resultado: %s venceu!\n", nomepais2);
            else
                printf("🤝 Resultado: Empate entre %s e %s!\n", nomepais1, nomepais2);
            break;

        case 4:
            printf("🏁 Atributo: Pontos Turísticos\n");
            printf("- %s: %d pontos\n", nomepais1, numpt1);
            printf("- %s: %d pontos\n", nomepais2, numpt2);
            if (numpt1 > numpt2)
                printf("✅ Resultado: %s venceu!\n", nomepais1);
            else if (numpt1 < numpt2)
                printf("✅ Resultado: %s venceu!\n", nomepais2);
            else
                printf("🤝 Resultado: Empate entre %s e %s!\n", nomepais1, nomepais2);
            break;

        case 5:
            printf("🏁 Atributo: Densidade Demográfica\n");
            printf("- %s: %.2f Hab/Km²\n", nomepais1, densPop1);
            printf("- %s: %.2f Hab/Km²\n", nomepais2, densPop2);
            if (densPop1 < densPop2)
                printf("✅ Resultado: %s venceu!\n", nomepais1);
            else if (densPop1 > densPop2)
                printf("✅ Resultado: %s venceu!\n", nomepais2);
            else
                printf("🤝 Resultado: Empate entre %s e %s!\n", nomepais1, nomepais2);
            break;

        default:
            printf("❌ Opção inválida! Tente novamente.\n");
            break;
    }

    return 0;
}