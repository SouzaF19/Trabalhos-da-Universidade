#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define n 20
#include "camp_structs.h"

//função retorna o numero do time com menos gols
int menos_gol(int *total_gols)
{
    int time, maior;
    int i;
    maior = total_gols[0];
    time = 0;
    for(i = 1; i < n; i++)
    {
        if(total_gols[i] < maior)
        {
            time = i;
            maior = total_gols[i];

        }
    }
    return time;
}

//função que escreve a tabela final
void escrita_tabelaFinal(int *pontos, int *vitoria, int *derrota, int *empate, int *total_gols, int *ordem, struct NomeTime *nomeTime, int rod, int total_gols_campeonato)
{
    system("color 2F");//deicando o fundo verde
    int i;

    if(rod == 0) //isso ignifica que queremos apenas o total de gols do campeonato em geral
    {
        printf("%d", total_gols_campeonato);
    }
    else if(rod == 1) //isso significa que queremos ver o time com menos gols
    {
        printf("%s", nomeTime[menos_gol(total_gols)].nome);
    }
    else if (rod == 2)//isso significa que queremos apenas o total de gols de cada time
    {
        for ( i = 0; i < n; i++)
        {
            printf("|----------------|-------------------------------|-----------------------------------------------|\n");
            printf("| %s | Técnico: %s | Total de gols do time: %d gols                |\n", nomeTime[i].nome, nomeTime[i].nJ[11].nomeJ,total_gols[i]);
        }
    }
    else if(rod == 3) //saida dos 3 melhores para a op5
    {
        for ( i = 0; i < rod; i++)
        {
            printf("|--------------------|--------------|--------------|-------------|------------|------------------|\n| %dº | %s|Pontuação: %d |Vitórias: %d  |Derrotas: %d  |Empates: %d  |Saldo de gols: %d | \n", i+1, nomeTime[ordem[i]].nome, pontos[ordem[i]], vitoria[ordem[i]], derrota[ordem[i]], empate[ordem[i]], total_gols[ordem[i]]);
        }
    }
    else
    {
        //escreve a tabela de classificação de todos os times
        for ( i = 0; i < rod; i++)
        {
            if(i<9)
            {
                printf("|------------------------------------------------------------------------------------------------|\n| %dº | %s|Pontuação: %d |Vitórias: %d  |Derrotas: %d  |Empates: %d  |Saldo de gols: %d  \n", i+1, nomeTime[ordem[i]].nome, pontos[ordem[i]], vitoria[ordem[i]], derrota[ordem[i]], empate[ordem[i]], total_gols[ordem[i]]);
            }
            else
            {
                printf("|------------------------------------------------------------------------------------------------|\n| %dº| %s|Pontuação: %d |Vitórias: %d  |Derrotas: %d  |Empates: %d  |Saldo de gols: %d  \n", i+1, nomeTime[ordem[i]].nome, pontos[ordem[i]], vitoria[ordem[i]], derrota[ordem[i]], empate[ordem[i]], total_gols[ordem[i]]);
            }
        }
        printf("|------------------------------------------------------------------------------------------------|\n");
    }
}

//função que ordena times e armazena no vetor ordenado o numero dos times
void ordena_times(int *pontos, int *total_gols, int *ordenado)
{

    int i, j, pontosAux[n], maior, aux;

    //copia o vetor
    for (i = 0; i < n; i++)
    {
        pontosAux[i] = pontos[i];
    }

    for (i = 0; i < n; i++)
    {
        ordenado[i] = i;
        maior = pontosAux[i];

        for (j = 0; j < n; j++)
        {
            if (i != j)
            {
                if (pontosAux[j] > maior)
                {
                    maior = pontosAux[j];
                    ordenado[i] = j;
                }
            }
        }
        pontosAux[ordenado[i]] = -1;
    }

    //caso houver empate nos pontos, o desempate é feito pelo total de gols
    for (i = 0; i < n; i++)
    {

        if (pontos[ordenado[i]] == pontos[ordenado[i + 1]])
        {

            if (total_gols[ordenado[i]] < total_gols[ordenado[i + 1]])
            {

                aux = ordenado[i];
                ordenado[i] = ordenado[i + 1];
                ordenado[i + 1] = aux;
            }
        }
    }
}

//função que soma os dados para a escrita da tabela
void tabela_final(struct Campeonato *c, int rod, struct NomeTime *nomeTime)
{
    int pontos[n], vitoria[n], derrota[n], empate[n], total_gols[n], ordem_dos_times[n], total_gols_campeonato;
    int i, j;
    // inicializando os vetores de todos os times com 0
    for (i = 0; i < n; i++)
    {
        pontos[i] = 0;
        vitoria[i] = 0;
        derrota[i] = 0;
        empate[i] = 0;
        total_gols[i] = 0;
    }
    //inicializando a contagem de gols do campeonato geral
    total_gols_campeonato = 0;

    // calculando os vetores
    for (i = 0; i < (n-1); i++)
    {
        for (j = 0; j < n / 2; j++)
        {
            // somando os gols de cada time
            total_gols[c->r[i].p[j].t[0].numeroTime - 1] += c->r[i].p[j].t[0].gols;
            total_gols[c->r[i].p[j].t[1].numeroTime - 1] += c->r[i].p[j].t[1].gols;
            total_gols_campeonato += c->r[i].p[j].t[0].gols + c->r[i].p[j].t[1].gols;;

            // se o time 1 tiver ganhado a1 partida, terá acrescimo de 3 pontos
            if (c->r[i].p[j].t[0].gols > c->r[i].p[j].t[1].gols)
            {
                pontos[c->r[i].p[j].t[0].numeroTime - 1] += 3;
                vitoria[c->r[i].p[j].t[0].numeroTime - 1] += 1; // somando a vitoria pro time 0
                derrota[c->r[i].p[j].t[1].numeroTime - 1] += 1; // somando a derrota pro time 0
            }
            // senão, se o time 2 tiver ganhado a partida, terá acrescimo de 3 pontos
            else if (c->r[i].p[j].t[1].gols > c->r[i].p[j].t[0].gols)
            {
                pontos[c->r[i].p[j].t[1].numeroTime - 1] += 3;
                vitoria[c->r[i].p[j].t[1].numeroTime - 1] += 1; // somando a vitoria pro time 1
                derrota[c->r[i].p[j].t[0].numeroTime - 1] += 1; // somando a derrota pro time 1
            }
            else // em caso de empate cada time ganha um ponto
            {
                pontos[c->r[i].p[j].t[1].numeroTime - 1] += 1;
                pontos[c->r[i].p[j].t[1].numeroTime - 1] += 1;
                empate[c->r[i].p[j].t[0].numeroTime - 1] += 1; // somando a empate pro time 0
                empate[c->r[i].p[j].t[1].numeroTime - 1] += 1; // somando a empate pro time 1
            }
        }
    }
    //chamada da funçao que ordena os times
    ordena_times(pontos, total_gols, ordem_dos_times);
    //a variavel rod, é o tanto de rodadas q será escrita
    escrita_tabelaFinal(pontos, vitoria, derrota, empate, total_gols, ordem_dos_times, nomeTime, rod, total_gols_campeonato);
}


