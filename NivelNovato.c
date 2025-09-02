#include <stdio.h>

// Tema 3 - Desenvolvendo a Lógica do Jogo.

int main() {
    
    // Definição das variáveis para armazenar as propriedades das cidades
    char estado1[2], estado2[2], codcarta1[4], codcarta2[4], nomecid1[50], nomecid2[50];
    int numpt1, numpt2, populacao1, populacao2;
    float aream21, aream22, pib1, pib2, densPop1, densPop2, pibPCap1, pibPCap2, superPoderCarta1, superPoderCarta2;
       

    
        // Cadastro das Cartas:
        printf("******CARTA 1****** \n"); 
        
        printf("Digite a primeira letra do Estado de A a H: \n");
        scanf(" %s", estado1);
    
        printf("Digite a primeira letra do Estado de A a H seguida de um número de 01 a 04: \n");
        scanf(" %s", codcarta1);

        printf("Digite o nome da cidade: \n");
        getchar(); // usado para não pular linha e poder colocar o nome da cidade
        fgets(nomecid1, 50, stdin);
           
        printf("Digite a população desta cidade: \n");
        scanf(" %d", &populacao1);
    
        printf("Digite a área da cidade em metros quadrados: \n");
        scanf(" %f", &aream21);
    
        printf("Digite o PIB desta cidade: \n");
        scanf(" %f", &pib1);

        printf("Digite o número de pontos turisticos desta cidade: \n");
        scanf(" %d", &numpt1);
    
        //Calculando a Densidade Polulacional da primeira Carta
        densPop1 = (float) populacao1 / aream21; //Conversão explícita da população para float 
        //Calculando o PIB per Capita da primeira Carta
         pibPCap1 = pib1 / (float) populacao1; //Conversão explícita da população para float

                    // Entrada de dados da segunda Carta.
                    printf("******CARTA 2****** \n");
        
                    printf("Digite a primeira letra do Estado de A a H: \n");
                    scanf(" %s", estado2);
           
                    printf("Digite a primeira letra do Estado de A a H seguida de um número de 01 a 04: \n");
                    scanf(" %s", codcarta2);

                    printf("Digite o nome da cidade: \n");
                    getchar(); // usado para não pular linha e poder colocar o nome da cidade
                    fgets(nomecid2, 50, stdin);
                                       
                    printf("Digite a população desta cidade: \n");
                    scanf(" %d", &populacao2);
            
                    printf("Digite a área da cidade em metros quadrados: \n");
                    scanf(" %f", &aream22);
             
                    printf("Digite o PIB desta cidade: \n");
                    scanf(" %f", &pib2);

                    printf("Digite o número de pontos turísticos desta cidade: \n");
                    scanf(" %d", &numpt2);

                    //Calculando a Densidade Polulacional da segunda Carta
                    densPop2 = (float) populacao2 / aream22;//Conversão explícita da população para float 
                    //Calculando o PIB per Capita da segunda Carta
                    pibPCap2 = pib2 / (float) populacao2;//Conversão explícita da população para float 

    /* Somando todos os atributos numéricos (população, área, PIB, número de pontos turísticos, 
    PIB per capita e o inverso da densidade populacional – quanto menor a densidade, maior o "poder")*/
    superPoderCarta1 = (float) populacao1 + aream21 + pib1 + (float) numpt1 + pibPCap1 + (1 / densPop1);
    superPoderCarta2 = (float) populacao2 + aream22 + pib2 + (float) numpt2 + pibPCap2 + (1 / densPop2);
         
   
    // Comparação de Cartas:
    printf(" \n");
    
    /*printf("******COMPARAÇÃO DAS CARTAS****** \n");
    
    if(populacao1 > populacao2){
        printf("Cidade 1 tem a maior população. \n");
    }else{
        if(populacao1 == populacao2){
            printf("Cidade 1 empatou com a Cidade 2. \n");
        }else{
            printf("Cidade 2 tem a maior população. \n");
        }
    }
    
    if(aream21 > aream22){
        printf("Cidade 1 tem a maior área. \n");
    }else{
        if(aream21 == aream22){
            printf("Cidade 1 empatou com a Cidade 2. \n");
        }else{
            printf("Cidade 2 tem a maior área. \n");
        }
    }    
    
    if(pib1 > pib2){
        printf("Cidade 1 tem o maior PIB. \n");
    }else{
        if(pib1 == pib2){
            printf("Cidade 1 empatou com a Cidade 2. \n");
        }else{
            printf("Cidade 2 tem o maior PIB. \n");
        }
    }
    
    if(numpt1 > numpt2){
        printf("Cidade 1 tem o maior número de pontos turisticos. \n");
    }else{
        if(numpt1 == numpt2){
            printf("Cidade 1 empatou com a Cidade 2 \n");
        }else{
            printf("Cidade 2 tem o maior número de pontos turísticos. \n");    
        }
    }
    
    if(densPop1 > densPop2){
        printf("Cidade 1 tem a maior densidade populacional. \n");
    }else{
        if(densPop1 == densPop2){
            printf("Cidade 1 empatou com a Cidade 2. \n");
        }else{
            printf("Cidade 2 tem a maior densidade populacional. \n");
        }
    }   
    
    if(pibPCap1 > pibPCap2){
        printf("Cidade 1 tem o maior PIB per Capita. \n");
    }else{
        if(pibPCap1 == pibPCap2){
            printf("Cidade 1 empatou com Cidade 2. \n");
        }else{
            printf("Cidade 2 tem o maior PIB per Capita. \n");
        }
    }    
    
    if(superPoderCarta1 > superPoderCarta2){
        printf("Cidade 1 tem o maior Super Poder. \n");
    }else{
        if(superPoderCarta1 == superPoderCarta2){
            printf("Carta 1 empatou com Carta 2.\n");
        }else{
            printf("Cidade 2 tem o maior Super Poder. \n");
        }
    }    
    
    // Exibição dos Resultados:
    printf(" \n");*/

    printf("*******RESULTADO DA CARTA VENCEDORA POR ATRIBUTOS****** \n");
    
    if(populacao1 > populacao2){
        printf("Carta 1- %s(%s): %d habitantes \n", nomecid1, estado1, populacao1);
        printf("Carta 2- %s(%s): %d habitantes \n", nomecid2, estado2, populacao2);
        printf("Resultado: Carta 1- (%s) venceu! \n", nomecid1);
    }else{
        if(populacao1 == populacao2){
            printf("Carta 1- %s(%s): %d habitantes \n", nomecid1, estado1, populacao1);
            printf("Carta 2- %s(%s): %d habitantes \n", nomecid2, estado2, populacao2);
            printf("Resultado: Carta 1- (%s) empatou com Carta 2- (%s) \n", nomecid1, nomecid2);
        }else{
            printf("Carta 1- %s(%s): %d habitantes \n", nomecid1, estado1, populacao1);
            printf("Carta 2- %s(%s): %d habitantes \n", nomecid2, estado2, populacao2);
            printf("Resultado: Carta 2- (%s) venceu! \n", nomecid2);
        }
    }    
    
    if(aream21 > aream22){
        printf("Carta 1- %s(%s): área de: %.2f km² \n", nomecid1, estado1, aream21);
        printf("Carta 2- %s(%s): área de: %.2f km² \n", nomecid2, estado2, aream22);
        printf("Resultado: Carta 1- (%s) venceu! \n", nomecid1);
    }else{
        if(aream21 == aream22){
            printf("Carta 1- %s(%s): área de: %.2f km² \n", nomecid1, estado1, aream21);
            printf("Carta 2- %s(%s): área de: %.2f km² \n", nomecid2, estado2, aream22);
            printf("Resultado: Carta 1- (%s) empatou com Carta 2- (%s) \n", nomecid1, nomecid2);
        }else{
            printf("Carta 1- %s(%s): área de: %.2f km² \n", nomecid1, estado1, aream21);
            printf("Carta 2- %s(%s): área de: %.2f km² \n", nomecid2, estado2, aream22);
            printf("Resultado: Carta 2- (%s) venceu! \n", nomecid2);
        }    
    }
    
    if(pib1 > pib2){
        printf("Carta 1- %s(%s): PIB de: %.2f bilhões de reais \n", nomecid1, estado1, pib1);
        printf("Carta 2- %s(%s): PIB de: %.2f bilhões de reais \n", nomecid2, estado2, pib2);
        printf("Resultado: Carta 1- (%s) venceu! \n", nomecid1);
    }else{
        if(pib1 == pib2){
            printf("Carta 1- %s(%s): PIB de: %.2f bilhões de reais \n", nomecid1, estado1, pib1);
            printf("Carta 2- %s(%s): PIB de: %.2f bilhões de reais \n", nomecid2, estado2, pib2);
            printf("Resultado: Carta 1- (%s) empatou com Carta 2- (%s) \n", nomecid1, nomecid2);
        }else{
            printf("Carta 1- %s(%s): PIB de: %.2f bilhões de reais \n", nomecid1, estado1, pib1);
            printf("Carta 2- %s(%s): PIB de: %.2f bilhões de reais \n", nomecid2, estado2, pib2);
            printf("Resultado: Carta 2- (%s) venceu! \n", nomecid2);
        }
    }    
        
    if(numpt1 > numpt2){
        printf("Carta 1- %s(%s): número de pontos turísticos: %d pontos turísticos \n", nomecid1, estado1, numpt1);
        printf("Carta 2- %s(%s): número de pontos turísticos: %d pontos turísticos \n", nomecid2, estado2, numpt2);
        printf("Resultado: Carta 1- (%s) venceu! \n", nomecid1);
    }else{
        if(numpt1 == numpt2){
            rintf("Carta 1- %s(%s): número de pontos turísticos: %d pontos turísticos \n", nomecid1, estado1, numpt1);
            printf("Carta 2- %s(%s): número de pontos turísticos: %d pontos turísticos \n", nomecid2, estado2, numpt2);
            printf("Resultado: Carta 1- (%s) empatou com Carta 2- (%s) \n", nomecid1, nomecid2);
        }else{
            printf("Carta 1- %s(%s): número de pontos turísticos: %d pontos turísticos \n", nomecid1, estado1, numpt1);
            printf("Carta 2- %s(%s): número de pontos turísticos: %d pontos turísticos \n", nomecid2, estado2, numpt2);
            printf("Resultado: Carta 2- (%s) venceu! \n", nomecid2);        
         }
    }
    
    if(densPop1 < densPop2){
        printf("Carta 1- %s(%s): densidade populacional de: %.2f hab/km² \n", nomecid1, estado1, densPop1);
        printf("Carta 2- %s(%s): densidade populacional de: %.2f hab/km² \n", nomecid2, estado2, densPop2);
        printf("Resultado: Carta 1- (%s) venceu! \n", nomecid1);
    }else{
        if(densPop1 == densPop2){
            printf("Carta 1- %s(%s): densidade populacional de: %.2f hab/km² \n", nomecid1, estado1, densPop1);
            printf("Carta 2- %s(%s): densidade populacional de: %.2f hab/km² \n", nomecid2, estado2, densPop2);
            printf("Resultado: Carta 1- (%s) empatou com Carta 2- (%s) \n", nomecid1, nomecid2);
        }else{
            printf("Carta 1- %s(%s): densidade populacional de: %.2f hab/km² \n", nomecid1, estado1, densPop1);
            printf("Carta 2- %s(%s): densidade populacional de: %.2f hab/km² \n", nomecid2, estado2, densPop2);
            printf("Resultado: Carta 2- (%s) venceu! \n", nomecid2);
        }
    }    
    
    if(pibPCap1 > pibPCap2){
        printf("Carta 1- %s(%s): PIB per Capita de: %.2f reais \n", nomecid1, estado1, pibPCap1);
        printf("Carta 2- %s(%s): PIB per Capita de: %.2f reais \n", nomecid2, estado2, pibPCap2);
        printf("Resultado: Carta 1- (%s) venceu! \n", nomecid1);
    }else{
        if(pibPCap1 == pibPCap2){
            printf("Carta 1- %s(%s): PIB per Capita de: %.2f reais \n", nomecid1, estado1, pibPCap1);
            printf("Carta 2- %s(%s): PIB per Capita de: %.2f reais \n", nomecid2, estado2, pibPCap2);
            printf("Resultado: Carta 1- (%s) empatou com Carta 2- (%s) \n", nomecid1, nomecid2);
        }else{
            printf("Carta 1- %s(%s): PIB per Capita de: %.2f reais \n", nomecid1, estado1, pibPCap1);
            printf("Carta 2- %s(%s): PIB per Capita de: %.2f reais \n", nomecid2, estado2, pibPCap2);
            printf("Resultado: Carta 2- (%s) venceu! \n", nomecid2);    
        }
    }
    
    if(superPoderCarta1 > superPoderCarta2){
        printf("Carta 1- %s(%s): Super Poder de: %.0f pontos \n", nomecid1, estado1, superPoderCarta1);
        printf("Carta 2- %s(%s): Super Poder de: %.0f pontos \n", nomecid2, estado2, superPoderCarta2);
        printf("Resultado: Carta 1- (%s) venceu! \n", nomecid1);
    }else{
        if(superPoderCarta1 == superPoderCarta2){
            printf("Carta 1- %s(%s): Super Poder de: %.0f pontos \n", nomecid1, estado1, superPoderCarta1);
            printf("Carta 2- %s(%s): Super Poder de: %.0f pontos \n", nomecid2, estado2, superPoderCarta2);
            printf("Resultado: Carta 1- (%s) empatou com Carta 2- (%s) \n", nomecid1, nomecid2);
        }else{
            printf("Carta 1- %s(%s): Super Poder de: %.0f pontos \n", nomecid1, estado1, superPoderCarta1);
            printf("Carta 2- %s(%s): Super Poder de: %.0f pontos \n", nomecid2, estado2, superPoderCarta2);
            printf("Resultado: Carta 2- (%s) venceu! \n", nomecid2);
        }
    }

    return 0;
}
