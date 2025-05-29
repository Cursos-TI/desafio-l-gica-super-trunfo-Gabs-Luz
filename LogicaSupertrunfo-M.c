#include <stdio.h>
int main(){
    //variáveis
    char Estado, Estado2;
    char Codecard[10], Nomecidade[50], Codecard2[10], Nomecidade2[50];
    int Pontos_Turisticos, Populacao, Pontos_Turist2, Populacao2;
    float PIB, Area, densidade_popu, Percapita, PIB2, Area2, densidade_po2, Percapita2, SuperCarta1, SuperCarta2;

    //Entrada de dados
    //CARTA 1
    printf("*** Digite as informações da carta 1 ***\n");

    printf("Digite uma letra de 'A' a 'H': \n");
    scanf(" %c", &Estado); // espaço entre o %c para evitar problemas no buffer

    printf("Digite o código da carta: \n");
    scanf("%s", Codecard);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", Nomecidade); //Com scanf(" %[^\n]", Nomecidade);, ele armazenará "Rio de Janeiro" corretamente.

    printf("Digite a Área da cidade em km²: \n");
    scanf("%f", &Area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &PIB);

    printf("Quantidade de habitantes da cidade: \n");
    scanf("%d", &Populacao);

    printf("Quantidade de pontos turísticos: \n");
    scanf("%d", &Pontos_Turisticos);

    //CARTA 2
    printf("*** Digite as informações da carta 2 ***\n");

    printf("Digite uma letra de 'A' a 'H': \n");
    scanf(" %c", &Estado2); // espaço entre o %c para evitar problemas no buffer

    printf("Digite o código da carta: \n");
    scanf("%s", Codecard2);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", Nomecidade2); 

    printf("Digite a Área da cidade em km²: \n");
    scanf("%f", &Area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &PIB2);

    printf("Quantidade de habitantes da cidade: \n");
    scanf("%d", &Populacao2);

    printf("Quantidade de pontos turísticos: \n");
    scanf("%d", &Pontos_Turist2);

    //Adição do Nível Aventureiro
    //CARTA 1
    densidade_popu = (Populacao / Area);
    Percapita = ( PIB / (float) Populacao);
    //CARTA 2
    densidade_po2 = (Populacao2 / Area2);
    Percapita2 = (PIB2 / (float) Populacao2);

    //Exibição de dados
    //CARTA 1
    printf("*** Carta 1 ***\n");
    printf("Estado: %c\n", Estado);
    printf("Código: %s\n", Codecard);
    printf("Nome cidade: %s\n", Nomecidade);
    printf("Área: %.2f Km²\n", Area);
    printf("PIB: %.2f bihões de reais\n", PIB);
    printf("População: %d\n", Populacao);
    printf("Pontos Turísticos: %d\n", Pontos_Turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_popu);
    printf("PIB per Capita: %.2f reais\n", Percapita);

    printf("\n");

    //CARTA 2
    printf("*** Carta 2 ***\n");
    printf("Estado: %c\n", Estado2);
    printf("Código: %s\n", Codecard2);
    printf("Nome cidade: %s\n", Nomecidade2);
    printf("Área: %.2f Km²\n", Area2);
    printf("PIB: %.2f bihões de reais\n", PIB2);
    printf("População: %d\n", Populacao2);
    printf("Pontos Turísticos: %d\n", Pontos_Turist2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_po2);
    printf("PIB per Capita: %.2f reais\n", Percapita2);

    printf("\n");

    //Nível Mestre -- Comparações Avançadas com Atributos Múltiplos
    char Primeiroatributo, Segundoatributo;
    int Resultado1, Resultado2;
    printf("Bem-vindo as comparações avançadas!\n");
    printf("Escolha o primeiro atributo:\n");
    printf("A. População\n");
    printf("B. Área\n");
    printf("C. PIB\n");

    printf("Digite a opção: ");
    scanf(" %c", &Primeiroatributo);

    switch (Primeiroatributo)
    {
    case 'A':
    case 'a':
        Resultado1 = Populacao > Populacao2 ? 1:0 ; 
        break;
    case 'B':
    case 'b':
        Resultado1 = Area > Area2 ? 1:0 ;
        break;
    case 'C':
    case 'c':
        Resultado1 = PIB > PIB2 ? 1:0 ;
        break;    
    default:
        printf("Opção inválida, Tente novamente!");
        break;
    }
    printf("Escolha o segundo atributo:\n");
    printf("Atenção: Você deve escolher um atributo diferente do primeiro\n");
    printf("A. População\n");
    printf("B. Área\n");
    printf("C. PIB\n");

    printf("Escolha a comparação: ");
    scanf(" %c", &Segundoatributo);
    
    // Verifica se os dois atributos foram comparados não foram repetidos
    if (Primeiroatributo == Segundoatributo)
    {
        printf("Você repetiu os atributos, Escolha outro!!\n");
        return 0;
    } else {
    switch (Segundoatributo)
    {
    case 'A':
    case 'a':
        Resultado2 = Populacao > Populacao2 ? 1:0 ; 
        break;
    case 'B':
    case 'b':
        Resultado2 = Area > Area2 ? 1:0 ;
        break;
    case 'C':
    case 'c':
        Resultado2 = PIB > PIB2 ? 1:0 ;
        break;    
    default:
        printf("Opção inválida, Tente novamente!");
        break;
    }
    }
    
    //Exibição dos resultados das comparações e cartas vencedoras
    printf("\n --- Resultado da Comparação ---\n");

    if (Resultado1 && Resultado2)
    {
        printf("A Carta 1 venceu nas duas comparações!\n");
    } else if (!Resultado1 && !Resultado2)
    {
        printf("A Carta 2 venceu nas duas comparações!\n");
    } else {
        printf("Empate parcial:\n");

        if (Resultado1)
        {
            printf("- Carta 1 venceu no primeiro atributo.\n");
        } else {
            printf("- Carta 2 venceu no primeiro atributo.\n");
        }
        
        if (Resultado2)
        {
            printf("- Carta 1 venceu no segundo atributo.\n");
        } else {
            printf("- Carta 2 venceu no segundo atributo.\n");
        }
        printf("Resultado final: Empate!!\n");
    }
    
    return 0;
}   