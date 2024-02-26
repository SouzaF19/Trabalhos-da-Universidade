#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "camp_structs.h"

//função que escreve a tabela de artilheiros do campionato
void escreve_tabela_artilheiros(int somaJogadores[][11], int *time, int *jogador, struct NomeTime *nomeTime, int rod)
{
    system("color 2F");//deicando o fundo verde
    int i;

    if(rod == 3) //escrita da tabela para a op 5
    {
        for (i = 0; i < rod; i++)
        {
           printf("|----|---------------------|---------|-----------------------------------------------------------|\n| %dº |%s | %d gols | Time do jogador: %s                           |\n", i + 1, nomeTime[time[i]].nJ[jogador[i]].nomeJ, somaJogadores[time[i]][jogador[i]], nomeTime[time[i]].nome);
            }
    }
    else
    {
        //escrita da tabela de artilheiros.
        for (i = 0; i < rod; i++)
        {
            //verificação para quando a soma dos gols for menor que 10 ou seja numeros com um digito, a tabela ficar reta.
            if(somaJogadores[time[i]][jogador[i]] < 10)
            {
                printf("|----|---------------------|---------|-----------------------------------------------------------|\n| %dº |%s |  %d gols | Time do jogador: %s                           |\n", i + 1, nomeTime[time[i]].nJ[jogador[i]].nomeJ, somaJogadores[time[i]][jogador[i]], nomeTime[time[i]].nome);
            }
            else
            {
                printf("|----|---------------------|---------|-----------------------------------------------------------|\n| %dº | %s| %d gols | Time do jogador: %s                           |\n", i + 1, nomeTime[time[i]].nJ[jogador[i]].nomeJ, somaJogadores[time[i]][jogador[i]], nomeTime[time[i]].nome);
            }
        }
    }
}

// função que ordena os artilheiros e retorna dois vetores com as posições em ordem
void ordena_artilheiros(int somaJogadores[][11], int *time, int *jogador)
{

    int i, j, k, somaAux[20][11], maior;

    //faz uma copia da matriz
    for (i = 0; i < 20; i++)
    {
        for (j = 0; j < 11; j++)
        {
            somaAux[i][j] = somaJogadores[i][j];
        }
    }

    //ordena a matriz e armaza os indices ordenados em dois vetores
    for (k = 0; k < 5; k++)
    {
        maior = somaAux[0][0];
        for (i = 0; i < 20; i++)
        {

            for (j = 0; j < 11; j++)
            {
                if (somaAux[i][j] > maior)
                {
                    maior = somaAux[i][j];
                    time[k] = i;
                    jogador[k] = j;
                }
            }
        }

        somaAux[time[k]][jogador[k]] = -1;
    }
}

//função que soma os gols de cada jogador e armazena em uma matriz, onde as linhas sao os times e a colunas os jogadores.
void tabela_artilheiro(struct Campeonato *c, struct NomeTime *nomeTime, int rod)
{

    int i, j, k, w, time, somaJogadores[20][11], ordem_time[5], ordem_jogadores[5];

    //inicializa a matriz com 0
    for (i = 0; i < 20; i++)
    {
        for (j = 0; j < 11; j++)
        {
            somaJogadores[i][j] = 0;
        }
    }

    //soma os gols de cada jodador dentro da matriz
    for (i = 0; i < 19; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 2; k++)
            {
                time = c->r[i].p[j].t[k].numeroTime - 1;

                for (w = 0; w < 11; w++)
                {
                    if (c->r[i].p[j].t[k].j[w].golsJog != 0)
                    {

                        somaJogadores[time][w] += c->r[i].p[j].t[k].j[w].golsJog;
                    }
                }
            }
        }
    }

    //chamada da função que ordena
    ordena_artilheiros(somaJogadores, ordem_time, ordem_jogadores);

    //chamada da função que escreve a tabela ordenada
    escreve_tabela_artilheiros(somaJogadores, ordem_time, ordem_jogadores, nomeTime, rod);
}
