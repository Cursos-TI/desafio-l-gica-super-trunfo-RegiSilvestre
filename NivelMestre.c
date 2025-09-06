#include <stdio.h>
#include <string.h>

// Função para limpar o buffer após scanf
void limparBuffer() {
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}

int main() {
    
    char nomepais1[30], nomepais2[30];
    char resultado1, resultado2;
    int populacao1, populacao2, numpt1, numpt2, opcao1,opcao2;
    float aream21, aream22, pib1, pib2, densPop1, densPop2;
    int pontos1 = 0, pontos2 = 0;

    // ========== Cadastro País 1 ==========
    printf("\n================== PAÍS 1 ==================\n");

    
    printf("→ Nome do país: ");
    fgets(nomepais1, sizeof(nomepais1), stdin);
    nomepais1[strcspn(nomepais1, "\n")] = 0;

    printf("→ População (habitantes): ");
    scanf("%d", &populacao1);

    printf("→ Área (em metros quadrados): ");
    scanf("%f", &aream21);

    printf("→ PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("→ Número de pontos turísticos: ");
    scanf("%d", &numpt1);

    densPop1 = (float) populacao1 / aream21;

    // ========== Cadastro País 2 ==========
    printf("\n================== PAÍS 2 ==================\n");

    limparBuffer();
    printf("→ Nome do país: ");
    fgets(nomepais2, sizeof(nomepais2), stdin);
    nomepais2[strcspn(nomepais2, "\n")] = 0;

    printf("→ População (habitantes): ");
    scanf("%d", &populacao2);

    printf("→ Área (em metros quadrados): ");
    scanf("%f", &aream22);

    printf("→ PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("→ Número de pontos turísticos: ");
    scanf("%d", &numpt2);

    densPop2 = (float) populacao2 / aream22;

    // ========== Inicio do Jogo ==========
    printf("\n================== BEM-VINDO AO JOGO! ==================\n");   
    printf("\n================== MENU PRINCIPAL ==================\n");
    printf("Escolha o primeiro atributo para disputa:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("→ Sua escolha: ");
    scanf("%d", &opcao1);

    printf("\n================== RESULTADO ==================\n");

    switch (opcao1) {
        case 1:
            printf("🔍 Atributo: População\n");
            printf("- %s: %d habitantes\n", nomepais1, populacao1);
            printf("- %s: %d habitantes\n", nomepais2, populacao2);
            pontos1 += (populacao1 > populacao2) ? 1 : 0;
            pontos2 += (populacao2 > populacao1) ? 1 : 0;
            break;

        case 2:
            printf("🏁 Atributo: Área\n");
            printf("- %s: %.2f km²\n", nomepais1, aream21);
            printf("- %s: %.2f km²\n", nomepais2, aream22);
            pontos1 += (aream21 > aream22) ? 1 : 0;
            pontos2 += (aream22 > aream21) ? 1 : 0;
            break;

        case 3:
            printf("🏁 Atributo: PIB\n");
            printf("- %s: %.2f bilhões de reais\n", nomepais1, pib1);
            printf("- %s: %.2f bilhões de reais\n", nomepais2, pib2);
            pontos1 += (pib1 > pib2) ? 1 : 0;
            pontos2 += (pib2 > pib1) ? 1 : 0;
            break;

        case 4:
            printf("🏁 Atributo: Pontos Turísticos\n");
            printf("- %s: %d pontos\n", nomepais1, numpt1);
            printf("- %s: %d pontos\n", nomepais2, numpt2);
            pontos1 += (numpt1 > numpt2) ? 1 : 0;
            pontos2 += (numpt2 > numpt1) ? 1 : 0;
            break;

        case 5:
            printf("🏁 Atributo: Densidade Demográfica\n");
            printf("- %s: %.4f Hab/Km²\n", nomepais1, densPop1);
            printf("- %s: %.4f Hab/km²\n", nomepais2, densPop2);
            pontos1 += (densPop1 < densPop2) ? 1 : 0;
            pontos2 += (densPop2 < densPop1) ? 1 : 0;
            break;

        default:
            printf("❌ Opção inválida! Tente novamente.\n");
            break;
    }

    printf("\n================== MENU PRINCIPAL ==================\n");
    printf("Escolha o segundo atributo para disputa:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("→ Sua escolha: ");
    scanf("%d", &opcao2);

    if(opcao1 == opcao2){
        printf("❌ERRO! Os atributos escolhidos devem ser diferentes!\n");
    }else{
        switch (opcao2) {
        case 1:
            printf("🔍 Atributo: População\n");
            printf("- %s: %d habitantes\n", nomepais1, populacao1);
            printf("- %s: %d habitantes\n", nomepais2, populacao2);
            pontos1 += (populacao1 > populacao2) ? 1 : 0;
            pontos2 += (populacao2 > populacao1) ? 1 : 0;
            break;

        case 2:
            printf("🏁 Atributo: Área\n");
            printf("- %s: %.2f km²\n", nomepais1, aream21);
            printf("- %s: %.2f km²\n", nomepais2, aream22);
            pontos1 += (aream21 > aream22) ? 1 : 0;
            pontos2 += (aream22 > aream21) ? 1 : 0;
            break;

        case 3:
            printf("🏁 Atributo: PIB\n");
            printf("- %s: %.2f bilhões de reais\n", nomepais1, pib1);
            printf("- %s: %.2f bilhões de reais\n", nomepais2, pib2);
            pontos1 += (pib1 > pib2) ? 1 : 0;
            pontos2 += (pib2 > pib1) ? 1 : 0;
            break;

        case 4:
            printf("🏁 Atributo: Pontos Turísticos\n");
            printf("- %s: %d pontos\n", nomepais1, numpt1);
            printf("- %s: %d pontos\n", nomepais2, numpt2);
            pontos1 += (numpt1 > numpt2) ? 1 : 0;
            pontos2 += (numpt2 > numpt1) ? 1 : 0;
            break;

        case 5:
            printf("🏁 Atributo: Densidade Demográfica\n");
            printf("- %s: %.4f Hab/Km²\n", nomepais1, densPop1);
            printf("- %s: %.4f Hab/km²\n", nomepais2, densPop2);
            pontos1 += (densPop1 < densPop2) ? 1 : 0;
            pontos2 += (densPop2 < densPop1) ? 1 : 0;
            break;

        default:
            printf("❌ Opção inválida! Tente novamente.\n");
            break;
    }
        printf("\n========== RESULTADO FINAL ==========\n");
        if(pontos1 > pontos2){
            printf("🏆 %s venceu %s - (placar %d x %d)\n", nomepais1, nomepais2, pontos1, pontos2);
        }else if(pontos2 > pontos1){
            printf("🏆 %s venceu %s - (placar %d x %d)\n", nomepais2, nomepais1, pontos2, pontos1);
        }else{
            printf("🤝 %s e %s empataram - (placar %d x %d)\n", nomepais1, nomepais2, pontos1, pontos2);
        }

    }

    return 0;
}