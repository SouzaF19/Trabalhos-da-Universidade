#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define n 20
#include "camp_structs.h"

//função que soma os gols tomados de cada partida por cada time e ordena do menor para o maior saldo de gols tomados
void ordenar_top_goleiros(int total_gols_tomados[], int goleiros_menos_vazados[], struct Campeonato *c)
{
    int i, j, k;
    int aux_troca_vetor;

    //inicializa o vetor que vai fazer a soma com 0
    for (i = 0; i < n; i++)
    {
        total_gols_tomados[i] = 0;
        goleiros_menos_vazados[i] = i;
    }

    //faz a soma de todos os gols de todas as partidas e armazena no vetor, usando o numero do time como idetificador do time para a soma.
    for (i = 0; i < 19; i++)
    {
        for (j = 0; j < n / 2; j++)
        {
            total_gols_tomados[c->r[i].p[j].t[0].numeroTime - 1] += c->r[i].p[j].t[1].gols;
            total_gols_tomados[c->r[i].p[j].t[1].numeroTime - 1] += c->r[i].p[j].t[0].gols;
        }
    }

    //função que ordena os gols e armazena o numero do time e o valor por ordem do menor para o maior
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {

            if (i != j && total_gols_tomados[i] < total_gols_tomados[j])
            {
                k = goleiros_menos_vazados[i];
                goleiros_menos_vazados[i] = goleiros_menos_vazados[j];
                goleiros_menos_vazados[j] = k;

                aux_troca_vetor = total_gols_tomados[i];
                total_gols_tomados[i] = total_gols_tomados[j];
                total_gols_tomados[j] = aux_troca_vetor;
            }
        }
    }
}

//função que escreve a tabela de goleiros menos vazados
void top_goleiros(struct Campeonato *c, struct NomeTime *nomeTime, int rod)
{
    int i;
    int total_gols_tomados[n];
    int goleiros_menos_vazados[n];

    //chamada da função que ordena e retorna os vetores ordenados
    ordenar_top_goleiros(total_gols_tomados, goleiros_menos_vazados, c);

    if(rod == 1)//é ativada quando necessitamos apenas do primeiro melhor goleiro para a op 5
    {
       printf("|----|---------------------|----------------------|----------------------------------------------|\n| %dº |%s |Time: %s  | Gols tomados: %d                             |\n", rod, nomeTime[goleiros_menos_vazados[0]].nJ[10].nomeJ,  nomeTime[goleiros_menos_vazados[0]].nome,total_gols_tomados[0]);
    }
    else
    {
        //escreve a tabela de artilheiros.
        for (i = 0; i < rod; i++)
        {
            printf("|----|---------------------|----------------------|----------------------------------------------|\n| %dº |%s |Time: %s  | Gols tomados: %d                             |\n", i+1, nomeTime[goleiros_menos_vazados[i]].nJ[10].nomeJ,  nomeTime[goleiros_menos_vazados[i]].nome,total_gols_tomados[i]);
        }
    }
}
