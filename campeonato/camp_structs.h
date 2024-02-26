#ifndef CAMP_STRUCTS
#define CAMP_STRUCTS

//structs que armazenas os confrontos e os gols dos times e jogadores em cada confronto
struct Jogadores
{
    int golsJog;
};

struct Time
{
    int numeroTime;
    int gols;
    struct Jogadores j[11];
};

struct Partida
{
    struct Time t[2]; // Indice 0: time 1, Indice 1: time 2
};

struct Rodada
{
    struct Partida p[10]; // 10 partidas em cada rodada para 20 times
};

struct Campeonato
{
    struct Rodada r[19]; // 19 rodadas para 20 times
};

//structs para armazenas os nomes
struct NomeJogadores
{
    char nomeJ[30];
};

struct NomeTime
{
    char nome[30];
    struct NomeJogadores nJ[12]; // 0 ao 9 = jogadores, 10 = goleiro, 11 = tecnico;
};

#endif // CAMP_STRUCTS
