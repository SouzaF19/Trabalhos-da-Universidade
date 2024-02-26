#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "camp_structs.h"

//função que escreve o relatorio final e chama as outras funções para uma recaptularização rapida
void relatorio_final(struct Campeonato *c, struct NomeTime *nomeTime)
{
    printf("|------------------------------------------------------------------------------------------------|\n");
    printf("|                                        CURIOSIDADES                                            |\n");
    printf("|------------------------------------------------------------------------------------------------|\n");
    printf("|1 - Total de gols feitos durate o campeonato : ");
    tabela_final(c, 0, nomeTime);
    printf(" gols.                                       |\n");
    printf("|2 - O campeonato possui 19 rodadas, com 10 partidas à cada rodada. Tendo um total de 190 jogos. |\n");
    printf("|3 - O time que MENOS fez gols: ");
    tabela_final(c, 1, nomeTime);
    printf("                                                   |\n");
    printf("|------------------------------------------------------------------------------------------------|\n");
    printf("|                                       TOP 3 VENCEDORES                                         |\n");
    //escreve a tabela final ate a 3º posição
    tabela_final(c, 3, nomeTime);
    printf("|------------------------------------------------------------------------------------------------|\n");
    printf("|                                       MELHOR GOLEIRO                                           |\n");
    //escreve o melhor goleiro
    top_goleiros(c, nomeTime, 1);
    printf("|------------------------------------------------------------------------------------------------|\n");
    printf("|                                      TOP 3 ARTILHEIROS                                         |\n");
    //escreve a tabela de artilheiros ate a 3º posição
    tabela_artilheiro(c, nomeTime, 3);
    printf("|------------------------------------------------------------------------------------------------|\n");
    printf("|                            GOLS TOTAIS DE CADA TIME E SEUS TÉCNICOS                            |\n");
    //escreve o tecnico e os gols de cada time
    tabela_final(c, 2, nomeTime);


    system("color 2F");//deicando o fundo verde
}
