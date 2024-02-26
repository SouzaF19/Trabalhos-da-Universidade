#include <stdio.h>
#include "camp_structs.h"

//menu que chama todas as fun��es para as saidas
void menu(struct Campeonato *c, struct NomeTime *nomeTime)
{
    system("color 2F");//deicando o fundo verde
    int escolha, rodada;

    printf("|------------------------------------------------------------------------------------------------|\n|                                     ESCOLHA UMA OP��O:                                         |\n|------------------------------------------------------------------------------------------------|\n| 1: Ver tabela final de classifica��o.                                                          |\n|------------------------------------------------------------------------------------------------|\n| 2: Ver artilheiros do campeonato.                                                              |\n|------------------------------------------------------------------------------------------------|\n| 3: Ver goleiros menos vazados.                                                                 |\n|------------------------------------------------------------------------------------------------|\n| 4: Ver os resultados dos jogos at� uma rodada.                                                 |\n|------------------------------------------------------------------------------------------------|\n| 5: Ver relat�rio final do campeonato.                                                          |\n|------------------------------------------------------------------------------------------------|\n| Digite um numero diferente de 1 a 5 para sair.                                                 |\n|------------------------------------------------------------------------------------------------|\n|Sua escolha: ");

    scanf("%d", &escolha);

    while (escolha >= 0 && escolha <= 5)
    {
        switch (escolha)
        {

        case 1: // chamada fun��o que mostra a tabela final de classifica��o;
            printf("|------------------------------------------------------------------------------------------------|\n|                         TABELA FINAL DE CLASSIFICA��O DO CAMPEONATO                            |\n");
            tabela_final(c, 20, nomeTime);
            break;

        case 2: // chamada fun��o que mostra a tabela de artilheiros; ;
            printf("|------------------------------------------------------------------------------------------------|\n|                                  TABELA DE ARTILHEIROS                                         |\n");
            tabela_artilheiro(c, nomeTime, 5);
            break;

        case 3: // chamada fun��o que mostra a tabela de goleiros menos vazados;
            printf("|------------------------------------------------------------------------------------------------|\n|                                  GOLEIROS MENOS VAZADOS                                        |\n");
            top_goleiros(c, nomeTime, 5);
            break;

        case 4: // chamada da fun��o para imprimir os jogos do campeonato ate a rodada desejada
            do
            {
                printf("|------------------------------------------------------------------------------------------------|\n|Digite o numero da rodada desejada (1 a 19): ");
                scanf("%d", &rodada);
            }
            while (rodada < 1 || rodada > 19);
            if(rodada<10)
            {
                printf("|------------------------------------------------------------------------------------------------|\n|                         TABELA DOS RESULTADOS DOS JOGOS AT� A RODADA %d                         |\n",rodada);
            }
            else
            {
                printf("|------------------------------------------------------------------------------------------------|\n|                         TABELA DOS RESULTADOS DOS JOGOS AT� A RODADA %d                        |\n",rodada);

            }
            imprimir_campeonato(c, rodada, nomeTime);
            break;

        case 5: // chamada da fun��o para relat�rio final do campeonato
            printf("|------------------------------------------------------------------------------------------------|\n|                                RELAT�RIO FINAL DO CAMPEONATO                                   |\n");

            relatorio_final(c, nomeTime);
            break;
        }

        printf("|------------------------------------------------------------------------------------------------|\n|                                     ESCOLHA UMA OP��O:                                         |\n|------------------------------------------------------------------------------------------------|\n| 1: Ver tabela final de classifica��o.                                                          |\n|------------------------------------------------------------------------------------------------|\n| 2: Ver artilheiros do campeonato.                                                              |\n|------------------------------------------------------------------------------------------------|\n| 3: Ver goleiros menos vazados.                                                                 |\n|------------------------------------------------------------------------------------------------|\n| 4: Ver os resultados dos jogos at� uma rodada.                                                 |\n|------------------------------------------------------------------------------------------------|\n| 5: Ver relat�rio final do campeonato.                                                          |\n|------------------------------------------------------------------------------------------------|\n| Digite um numero diferente de 1 a 5 para sair.                                                 |\n|------------------------------------------------------------------------------------------------|\n|Sua escolha: ");
        scanf("%d", &escolha);
    }

    printf("----------------------------------------------\nObrigado pela visita. :)\n----------------------------------------------\n");
}

