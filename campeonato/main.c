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

    // Inicializa a semente para n�meros aleat�rios
    srand(time(NULL));

    //fun��o que gera o campeonato e armazana na struct campeonato
    gera_campeonato(&c);

    //fun��o que gera os gols e armazena em cada partida dentro da struct campeonato
    gera_gols(&c);

    //fun��o que distruibui os gols gerados aleatoriamente para os jogadores
    distribui_gols_jogadores(&c);

    //fun��o que chama o menu para iniciar o codigo;
    menu(&c, nomeTime);

    system("pause");
    return 0;
}

