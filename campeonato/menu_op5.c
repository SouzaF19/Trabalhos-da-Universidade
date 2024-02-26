#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "camp_structs.h"

//fun��o que escreve o relatorio final e chama as outras fun��es para uma recaptulariza��o rapida
void relatorio_final(struct Campeonato *c, struct NomeTime *nomeTime)
{
    printf("|------------------------------------------------------------------------------------------------|\n");
    printf("|                                        CURIOSIDADES                                            |\n");
    printf("|------------------------------------------------------------------------------------------------|\n");
    printf("|1 - Total de gols feitos durate o campeonato : ");
    tabela_final(c, 0, nomeTime);
    printf(" gols.                                       |\n");
    printf("|2 - O campeonato possui 19 rodadas, com 10 partidas � cada rodada. Tendo um total de 190 jogos. |\n");
    printf("|3 - O time que MENOS fez gols: ");
    tabela_final(c, 1, nomeTime);
    printf("                                                   |\n");
    printf("|------------------------------------------------------------------------------------------------|\n");
    printf("|                                       TOP 3 VENCEDORES                                         |\n");
    //escreve a tabela final ate a 3� posi��o
    tabela_final(c, 3, nomeTime);
    printf("|------------------------------------------------------------------------------------------------|\n");
    printf("|                                       MELHOR GOLEIRO                                           |\n");
    //escreve o melhor goleiro
    top_goleiros(c, nomeTime, 1);
    printf("|------------------------------------------------------------------------------------------------|\n");
    printf("|                                      TOP 3 ARTILHEIROS                                         |\n");
    //escreve a tabela de artilheiros ate a 3� posi��o
    tabela_artilheiro(c, nomeTime, 3);
    printf("|------------------------------------------------------------------------------------------------|\n");
    printf("|                            GOLS TOTAIS DE CADA TIME E SEUS T�CNICOS                            |\n");
    //escreve o tecnico e os gols de cada time
    tabela_final(c, 2, nomeTime);


    system("color 2F");//deicando o fundo verde
}
