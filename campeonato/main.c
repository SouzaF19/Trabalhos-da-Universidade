#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include "camp_structs.h"
#include "declarar_funcoes.h"

int main()
{
    setlocale(LC_ALL, "Portuguese");

    struct Campeonato c;
    struct NomeTime nomeTime[20];

    system("color 2F");//deixando o fundo verde

    // inicializa os nomes dos times e jogadores
    inicializa_nome(nomeTime);
    inicializa_nome_jogadores(nomeTime);

    // Inicializa a semente para números aleatórios
    srand(time(NULL));

    //função que gera o campeonato e armazana na struct campeonato
    gera_campeonato(&c);

    //função que gera os gols e armazena em cada partida dentro da struct campeonato
    gera_gols(&c);

    //função que distruibui os gols gerados aleatoriamente para os jogadores
    distribui_gols_jogadores(&c);

    //função que chama o menu para iniciar o codigo;
    menu(&c, nomeTime);

    system("pause");
    return 0;
}

