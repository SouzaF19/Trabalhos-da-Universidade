#include "camp_structs.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//inicializa a struct dos nomes dos times.
void inicializa_nome(struct NomeTime *nomeTime)
{
    // Inicializando os nomes dos times
    strcpy(nomeTime[0].nome, "Botafogo      ");
    strcpy(nomeTime[1].nome, "Palmeiras     ");
    strcpy(nomeTime[2].nome, "Bragantino    ");
    strcpy(nomeTime[3].nome, "Gr�mio        ");
    strcpy(nomeTime[4].nome, "Atl�tico-MG   ");
    strcpy(nomeTime[5].nome, "Flamengo      ");
    strcpy(nomeTime[6].nome, "Athletico-PR  ");
    strcpy(nomeTime[7].nome, "Fluminense    ");
    strcpy(nomeTime[8].nome, "Fortaleza     ");
    strcpy(nomeTime[9].nome, "S�o Paulo     ");
    strcpy(nomeTime[10].nome, "Internacional ");
    strcpy(nomeTime[11].nome, "Cuiab�        ");
    strcpy(nomeTime[12].nome, "Corinthians   ");
    strcpy(nomeTime[13].nome, "Santos        ");
    strcpy(nomeTime[14].nome, "Bahia         ");
    strcpy(nomeTime[15].nome, "Vasco         ");
    strcpy(nomeTime[16].nome, "Cruzeiro      ");
    strcpy(nomeTime[17].nome, "Goi�s         ");
    strcpy(nomeTime[18].nome, "Coritiba      ");
    strcpy(nomeTime[19].nome, "Am�rica-MG    ");
}
