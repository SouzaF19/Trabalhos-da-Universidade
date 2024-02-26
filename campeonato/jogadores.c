#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "camp_structs.h"

//inicializa a struct dos nomes dos jogadores, goleiros(10) e tecnicos(11)
void inicializa_nome_jogadores(struct NomeTime *nomeTime)
{
    // Inicializando os nomes dos jogadores do time Botafogo
    strcpy(nomeTime[0].nJ[0].nomeJ, "Eduardo             ");
    strcpy(nomeTime[0].nJ[1].nomeJ, "Marçal              ");
    strcpy(nomeTime[0].nJ[2].nomeJ, "Tiquinho            ");
    strcpy(nomeTime[0].nJ[3].nomeJ, "Adryelson           ");
    strcpy(nomeTime[0].nJ[4].nomeJ, "Lucas Fernandes     ");
    strcpy(nomeTime[0].nJ[5].nomeJ, "Luis Segovia        ");
    strcpy(nomeTime[0].nJ[6].nomeJ, "Tchê Tchê           ");
    strcpy(nomeTime[0].nJ[7].nomeJ, "Carlos Alberto      ");
    strcpy(nomeTime[0].nJ[8].nomeJ, "Gustavo Sauer       ");
    strcpy(nomeTime[0].nJ[9].nomeJ, "Danilo Barbosa      ");
    strcpy(nomeTime[0].nJ[10].nomeJ, "Lucas Perri         ");
    strcpy(nomeTime[0].nJ[11].nomeJ, "Lúcio Flávio        ");

    // Inicializando os nomes dos jogadores do time Palmeiras
    strcpy(nomeTime[1].nJ[0].nomeJ, "Dudu                ");
    strcpy(nomeTime[1].nJ[1].nomeJ, "G. Gómez            ");
    strcpy(nomeTime[1].nJ[2].nomeJ, "R. Veiga            ");
    strcpy(nomeTime[1].nJ[3].nomeJ, "Endrick             ");
    strcpy(nomeTime[1].nJ[4].nomeJ, "Marcos Rocha        ");
    strcpy(nomeTime[1].nJ[5].nomeJ, "Murilo              ");
    strcpy(nomeTime[1].nJ[6].nomeJ, "Piquerez            ");
    strcpy(nomeTime[1].nJ[7].nomeJ, "Rony                ");
    strcpy(nomeTime[1].nJ[8].nomeJ, "Zé Rafael           ");
    strcpy(nomeTime[1].nJ[9].nomeJ, "Artur               ");
    strcpy(nomeTime[1].nJ[10].nomeJ, "Weverton            ");
    strcpy(nomeTime[1].nJ[11].nomeJ, "Abel Ferreira       ");

    // Inicializando os nomes dos jogadores do time Bragantino
    strcpy(nomeTime[2].nJ[0].nomeJ, "Léo Ortiz           ");
    strcpy(nomeTime[2].nJ[1].nomeJ, "Alerrandro          ");
    strcpy(nomeTime[2].nJ[2].nomeJ, "Bruninho            ");
    strcpy(nomeTime[2].nJ[3].nomeJ, "Eduardo Sasha       ");
    strcpy(nomeTime[2].nJ[4].nomeJ, "Hurtado             ");
    strcpy(nomeTime[2].nJ[5].nomeJ, "Juninho Capixaba    ");
    strcpy(nomeTime[2].nJ[6].nomeJ, "L. Evangelista      ");
    strcpy(nomeTime[2].nJ[7].nomeJ, "Luan Cândido        ");
    strcpy(nomeTime[2].nJ[8].nomeJ, "Lucas Cunha         ");
    strcpy(nomeTime[2].nJ[9].nomeJ, "Matheus Fernandes   ");
    strcpy(nomeTime[2].nJ[10].nomeJ, "Lucão               ");
    strcpy(nomeTime[2].nJ[11].nomeJ, "Pedro Caixinha      ");

    // Inicializando os nomes dos jogadores do time Grêmio
    strcpy(nomeTime[3].nJ[0].nomeJ, "Luis Suárez         ");
    strcpy(nomeTime[3].nJ[1].nomeJ, "Bitello             ");
    strcpy(nomeTime[3].nJ[2].nomeJ, "Kannemann           ");
    strcpy(nomeTime[3].nJ[3].nomeJ, "Bruno Alves         ");
    strcpy(nomeTime[3].nJ[4].nomeJ, "Carballo            ");
    strcpy(nomeTime[3].nJ[5].nomeJ, "Cristaldo           ");
    strcpy(nomeTime[3].nJ[6].nomeJ, "Ferreira            ");
    strcpy(nomeTime[3].nJ[7].nomeJ, "Pedro Geromel       ");
    strcpy(nomeTime[3].nJ[8].nomeJ, "Pepê                ");
    strcpy(nomeTime[3].nJ[9].nomeJ, "Reinaldo            ");
    strcpy(nomeTime[3].nJ[10].nomeJ, "Adriel              ");
    strcpy(nomeTime[3].nJ[11].nomeJ, "Renato Portaluppi   ");

    // Inicializando os nomes dos jogadores do time Atlético-MG
    strcpy(nomeTime[4].nJ[0].nomeJ, "Hulk                ");
    strcpy(nomeTime[4].nJ[1].nomeJ, "Paulinho            ");
    strcpy(nomeTime[4].nJ[2].nomeJ, "Allan               ");
    strcpy(nomeTime[4].nJ[3].nomeJ, "Arana               ");
    strcpy(nomeTime[4].nJ[4].nomeJ, "Patrick             ");
    strcpy(nomeTime[4].nJ[5].nomeJ, "Zaracho             ");
    strcpy(nomeTime[4].nJ[6].nomeJ, "Battaglia           ");
    strcpy(nomeTime[4].nJ[7].nomeJ, "Edenílson           ");
    strcpy(nomeTime[4].nJ[8].nomeJ, "Hyoran              ");
    strcpy(nomeTime[4].nJ[9].nomeJ, "Jemerson            ");
    strcpy(nomeTime[4].nJ[10].nomeJ, "Everson             ");
    strcpy(nomeTime[4].nJ[11].nomeJ, "Luiz F. Scolari     ");

    // Inicializando os nomes dos jogadores do time Flamengo
    strcpy(nomeTime[5].nJ[0].nomeJ, "Arrascaeta          ");
    strcpy(nomeTime[5].nJ[1].nomeJ, "Gabriel             ");
    strcpy(nomeTime[5].nJ[2].nomeJ, "Pedro               ");
    strcpy(nomeTime[5].nJ[3].nomeJ, "Ayrton lucas        ");
    strcpy(nomeTime[5].nJ[4].nomeJ, "Bruno Henrique      ");
    strcpy(nomeTime[5].nJ[5].nomeJ, "Fabrício Bruno      ");
    strcpy(nomeTime[5].nJ[6].nomeJ, "E. Ribeiro          ");
    strcpy(nomeTime[5].nJ[7].nomeJ, "Filipe Luís         ");
    strcpy(nomeTime[5].nJ[8].nomeJ, "Léo Pereira         ");
    strcpy(nomeTime[5].nJ[9].nomeJ, "David Luiz          ");
    strcpy(nomeTime[5].nJ[10].nomeJ, "Santos              ");
    strcpy(nomeTime[5].nJ[11].nomeJ, "Tite                ");

    // Inicializando os nomes dos jogadores do time Athletico-PR
    strcpy(nomeTime[6].nJ[0].nomeJ, "Fernandinho         ");
    strcpy(nomeTime[6].nJ[1].nomeJ, "Thiago Heleno       ");
    strcpy(nomeTime[6].nJ[2].nomeJ, "Terans              ");
    strcpy(nomeTime[6].nJ[3].nomeJ, "Vitor Roque         ");
    strcpy(nomeTime[6].nJ[4].nomeJ, "Erick               ");
    strcpy(nomeTime[6].nJ[5].nomeJ, "Khellven            ");
    strcpy(nomeTime[6].nJ[6].nomeJ, "Pablo               ");
    strcpy(nomeTime[6].nJ[7].nomeJ, "Vitor Bueno         ");
    strcpy(nomeTime[6].nJ[8].nomeJ, "Willian             ");
    strcpy(nomeTime[6].nJ[9].nomeJ, "Zé Ivaldo           ");
    strcpy(nomeTime[6].nJ[10].nomeJ, "Bento               ");
    strcpy(nomeTime[6].nJ[11].nomeJ, "Wesley Carvalho     ");

    // Inicializando os nomes dos jogadores do time Fluminense
    strcpy(nomeTime[7].nJ[0].nomeJ, "André               ");
    strcpy(nomeTime[7].nJ[1].nomeJ, "Cano                ");
    strcpy(nomeTime[7].nJ[2].nomeJ, "Marcelo             ");
    strcpy(nomeTime[7].nJ[3].nomeJ, "Arias               ");
    strcpy(nomeTime[7].nJ[4].nomeJ, "Ganso               ");
    strcpy(nomeTime[7].nJ[5].nomeJ, "Nino                ");
    strcpy(nomeTime[7].nJ[6].nomeJ, "Alexsander          ");
    strcpy(nomeTime[7].nJ[7].nomeJ, "Keno                ");
    strcpy(nomeTime[7].nJ[8].nomeJ, "Lelê                ");
    strcpy(nomeTime[7].nJ[9].nomeJ, "Manoel              ");
    strcpy(nomeTime[7].nJ[10].nomeJ, "Fábio               ");
    strcpy(nomeTime[7].nJ[11].nomeJ, "Fernando Diniz      ");


    // Inicializando os nomes dos jogadores do time Fortaleza
    strcpy(nomeTime[8].nJ[0].nomeJ, "Lucero              ");
    strcpy(nomeTime[8].nJ[1].nomeJ, "Benevenuto          ");
    strcpy(nomeTime[8].nJ[2].nomeJ, "Brítez              ");
    strcpy(nomeTime[8].nJ[3].nomeJ, "Caio Alexandre      ");
    strcpy(nomeTime[8].nJ[4].nomeJ, "Calebe              ");
    strcpy(nomeTime[8].nJ[5].nomeJ, "Galhado             ");
    strcpy(nomeTime[8].nJ[6].nomeJ, "Hércules            ");
    strcpy(nomeTime[8].nJ[7].nomeJ, "Lucas Sasha         ");
    strcpy(nomeTime[8].nJ[8].nomeJ, "Moisés              ");
    strcpy(nomeTime[8].nJ[9].nomeJ, "Pikachu             ");
    strcpy(nomeTime[8].nJ[10].nomeJ, "Fernando Miguel     ");
    strcpy(nomeTime[8].nJ[11].nomeJ, "Juan P. Vojvoda     ");

    // Inicializando os nomes dos jogadores do time São Paulo
    strcpy(nomeTime[9].nJ[0].nomeJ, "Arboleda            ");
    strcpy(nomeTime[9].nJ[1].nomeJ, "Calleri             ");
    strcpy(nomeTime[9].nJ[2].nomeJ, "Alan Franco         ");
    strcpy(nomeTime[9].nJ[3].nomeJ, "Beraldo             ");
    strcpy(nomeTime[9].nJ[4].nomeJ, "Diego Costa         ");
    strcpy(nomeTime[9].nJ[5].nomeJ, "Erison              ");
    strcpy(nomeTime[9].nJ[6].nomeJ, "Igor Vinícius       ");
    strcpy(nomeTime[9].nJ[7].nomeJ, "Luan                ");
    strcpy(nomeTime[9].nJ[8].nomeJ, "Luciano             ");
    strcpy(nomeTime[9].nJ[9].nomeJ, "Méndez              ");
    strcpy(nomeTime[9].nJ[10].nomeJ, "Rafael              ");
    strcpy(nomeTime[9].nJ[11].nomeJ, "Dorival Júnior      ");

    // Inicializando os nomes dos jogadores do time Internacional
    strcpy(nomeTime[10].nJ[0].nomeJ, "Alan Patrick        ");
    strcpy(nomeTime[10].nJ[1].nomeJ, "Arángui             ");
    strcpy(nomeTime[10].nJ[2].nomeJ, "Bustos              ");
    strcpy(nomeTime[10].nJ[3].nomeJ, "Gabriel             ");
    strcpy(nomeTime[10].nJ[4].nomeJ, "Luiz Adriano        ");
    strcpy(nomeTime[10].nJ[5].nomeJ, "Maurício            ");
    strcpy(nomeTime[10].nJ[6].nomeJ, "Mercado             ");
    strcpy(nomeTime[10].nJ[7].nomeJ, "Moledo              ");
    strcpy(nomeTime[10].nJ[8].nomeJ, "Pedro Henrique      ");
    strcpy(nomeTime[10].nJ[9].nomeJ, "Renê                ");
    strcpy(nomeTime[10].nJ[10].nomeJ, "John                ");
    strcpy(nomeTime[10].nJ[11].nomeJ, "Eduardo Coudet      ");

    // Inicializando os nomes dos jogadores do time Cuiabá
    strcpy(nomeTime[11].nJ[0].nomeJ, "Alan Empereur       ");
    strcpy(nomeTime[11].nJ[1].nomeJ, "Ceppelini           ");
    strcpy(nomeTime[11].nJ[2].nomeJ, "Deyverson           ");
    strcpy(nomeTime[11].nJ[3].nomeJ, "Isidro Pitta        ");
    strcpy(nomeTime[11].nJ[4].nomeJ, "Marllon             ");
    strcpy(nomeTime[11].nJ[5].nomeJ, "Allyson             ");
    strcpy(nomeTime[11].nJ[6].nomeJ, "Denilson            ");
    strcpy(nomeTime[11].nJ[7].nomeJ, "F. Sobral           ");
    strcpy(nomeTime[11].nJ[8].nomeJ, "Mateusinho          ");
    strcpy(nomeTime[11].nJ[9].nomeJ, "Matheus Alexandre   ");
    strcpy(nomeTime[11].nJ[10].nomeJ, "Walter              ");
    strcpy(nomeTime[11].nJ[11].nomeJ, "António Oliveira    ");

    // Inicializando os nomes dos jogadores do time Corinthians
    strcpy(nomeTime[12].nJ[0].nomeJ, "Renato Augusto      ");
    strcpy(nomeTime[12].nJ[1].nomeJ, "Fagner              ");
    strcpy(nomeTime[12].nJ[2].nomeJ, "Róger Guedes        ");
    strcpy(nomeTime[12].nJ[3].nomeJ, "Yuri Alberto        ");
    strcpy(nomeTime[12].nJ[4].nomeJ, "Adson               ");
    strcpy(nomeTime[12].nJ[5].nomeJ, "Bruno Méndez        ");
    strcpy(nomeTime[12].nJ[6].nomeJ, "Fábio Santos        ");
    strcpy(nomeTime[12].nJ[7].nomeJ, "Fausto Vera         ");
    strcpy(nomeTime[12].nJ[8].nomeJ, "Gil                 ");
    strcpy(nomeTime[12].nJ[9].nomeJ, "Giuliano            ");
    strcpy(nomeTime[12].nJ[10].nomeJ, "Cássio              ");
    strcpy(nomeTime[12].nJ[11].nomeJ, "Mano Menezes        ");

    // Inicializando os nomes dos jogadores do time Santos
    strcpy(nomeTime[13].nJ[0].nomeJ, "Dodi                ");
    strcpy(nomeTime[13].nJ[1].nomeJ, "Marcos Leonardo     ");
    strcpy(nomeTime[13].nJ[2].nomeJ, "Ângelo              ");
    strcpy(nomeTime[13].nJ[3].nomeJ, "Fernández           ");
    strcpy(nomeTime[13].nJ[4].nomeJ, "Lucas Lima          ");
    strcpy(nomeTime[13].nJ[5].nomeJ, "Lucas Barbosa       ");
    strcpy(nomeTime[13].nJ[6].nomeJ, "Mendoza             ");
    strcpy(nomeTime[13].nJ[7].nomeJ, "Soteldo             ");
    strcpy(nomeTime[13].nJ[8].nomeJ, "B. Mezenga          ");
    strcpy(nomeTime[13].nJ[9].nomeJ, "Bauermann           ");
    strcpy(nomeTime[13].nJ[10].nomeJ, "João Paulo          ");
    strcpy(nomeTime[13].nJ[11].nomeJ, "Marcelo Fernandes   ");

    // Inicializando os nomes dos jogadores do time Bahia
    strcpy(nomeTime[14].nJ[0].nomeJ, "Ademir              ");
    strcpy(nomeTime[14].nJ[1].nomeJ, "Biel                ");
    strcpy(nomeTime[14].nJ[2].nomeJ, "Cauly               ");
    strcpy(nomeTime[14].nJ[3].nomeJ, "Chávez              ");
    strcpy(nomeTime[14].nJ[4].nomeJ, "Daniel              ");
    strcpy(nomeTime[14].nJ[5].nomeJ, "Kanu                ");
    strcpy(nomeTime[14].nJ[6].nomeJ, "Rezende             ");
    strcpy(nomeTime[14].nJ[7].nomeJ, "Thaciano            ");
    strcpy(nomeTime[14].nJ[8].nomeJ, "Vitor Hugo          ");
    strcpy(nomeTime[14].nJ[9].nomeJ, "Vitor Jacaré        ");
    strcpy(nomeTime[14].nJ[10].nomeJ, "D. Fernandes        ");
    strcpy(nomeTime[14].nJ[11].nomeJ, "Rogério Ceni        ");

    // Inicializando os nomes dos jogadores do time Vasco
    strcpy(nomeTime[15].nJ[0].nomeJ, "Andrey Santos       ");
    strcpy(nomeTime[15].nJ[1].nomeJ, "Alex Teixeira       ");
    strcpy(nomeTime[15].nJ[2].nomeJ, "Capasso             ");
    strcpy(nomeTime[15].nJ[3].nomeJ, "Gabriel Pec         ");
    strcpy(nomeTime[15].nJ[4].nomeJ, "Jair                ");
    strcpy(nomeTime[15].nJ[5].nomeJ, "Léo                 ");
    strcpy(nomeTime[15].nJ[6].nomeJ, "Lucas Piton         ");
    strcpy(nomeTime[15].nJ[7].nomeJ, "Marlon Gomes        ");
    strcpy(nomeTime[15].nJ[8].nomeJ, "Orellano            ");
    strcpy(nomeTime[15].nJ[9].nomeJ, "Pedro Raul          ");
    strcpy(nomeTime[15].nJ[10].nomeJ, "Ivan                ");
    strcpy(nomeTime[15].nJ[11].nomeJ, "Ramón Díaz          ");

    // Inicializando os nomes dos jogadores do time Cruzeiro
    strcpy(nomeTime[16].nJ[0].nomeJ, "Gilberto            ");
    strcpy(nomeTime[16].nJ[1].nomeJ, "Bruno Rodrigues     ");
    strcpy(nomeTime[16].nJ[2].nomeJ, "Daniel Junior       ");
    strcpy(nomeTime[16].nJ[3].nomeJ, "Felipe Machado      ");
    strcpy(nomeTime[16].nJ[4].nomeJ, "Kaiki               ");
    strcpy(nomeTime[16].nJ[5].nomeJ, "Lucas Oliveira      ");
    strcpy(nomeTime[16].nJ[6].nomeJ, "Marlon              ");
    strcpy(nomeTime[16].nJ[7].nomeJ, "Mateus Vital        ");
    strcpy(nomeTime[16].nJ[8].nomeJ, "Neto Moura          ");
    strcpy(nomeTime[16].nJ[9].nomeJ, "Wallison            ");
    strcpy(nomeTime[16].nJ[10].nomeJ, "Rafael Cabral       ");
    strcpy(nomeTime[16].nJ[11].nomeJ, "Paulo Autuori       ");

    // Inicializando os nomes dos jogadores do time Goiás
    strcpy(nomeTime[17].nJ[0].nomeJ, "Lucas Halter        ");
    strcpy(nomeTime[17].nJ[1].nomeJ, "Matheus Peixoto     ");
    strcpy(nomeTime[17].nJ[2].nomeJ, "Sander              ");
    strcpy(nomeTime[17].nJ[3].nomeJ, "Vinicius            ");
    strcpy(nomeTime[17].nJ[4].nomeJ, "Alesson             ");
    strcpy(nomeTime[17].nJ[5].nomeJ, "Apodi               ");
    strcpy(nomeTime[17].nJ[6].nomeJ, "Ariel               ");
    strcpy(nomeTime[17].nJ[7].nomeJ, "Bruno Melo          ");
    strcpy(nomeTime[17].nJ[8].nomeJ, "Felipe Ferreira     ");
    strcpy(nomeTime[17].nJ[9].nomeJ, "Felipe Bastos       ");
    strcpy(nomeTime[17].nJ[10].nomeJ, "Tadeu               ");
    strcpy(nomeTime[17].nJ[11].nomeJ, "Armando Evangelista ");

    // Inicializando os nomes dos jogadores do time Coritiba
    strcpy(nomeTime[18].nJ[0].nomeJ, "Alef Manga          ");
    strcpy(nomeTime[18].nJ[1].nomeJ, "Andrey              ");
    strcpy(nomeTime[18].nJ[2].nomeJ, "Bruno Gomes         ");
    strcpy(nomeTime[18].nJ[3].nomeJ, "Jamerson            ");
    strcpy(nomeTime[18].nJ[4].nomeJ, "Júnior Urso         ");
    strcpy(nomeTime[18].nJ[5].nomeJ, "Kaio César          ");
    strcpy(nomeTime[18].nJ[6].nomeJ, "Kuscevic            ");
    strcpy(nomeTime[18].nJ[7].nomeJ, "Liziero             ");
    strcpy(nomeTime[18].nJ[8].nomeJ, "Natanael            ");
    strcpy(nomeTime[18].nJ[9].nomeJ, "Rodrigo Pinho       ");
    strcpy(nomeTime[18].nJ[10].nomeJ, "Gabriel             ");
    strcpy(nomeTime[18].nJ[11].nomeJ, "Thiago Kosloski     ");

    // Inicializando os nomes dos jogadores do time América-MG
    strcpy(nomeTime[19].nJ[0].nomeJ, "Juninho             ");
    strcpy(nomeTime[19].nJ[1].nomeJ, "Alê                 ");
    strcpy(nomeTime[19].nJ[2].nomeJ, "Aloísio             ");
    strcpy(nomeTime[19].nJ[3].nomeJ, "Arthur              ");
    strcpy(nomeTime[19].nJ[4].nomeJ, "Benítez             ");
    strcpy(nomeTime[19].nJ[5].nomeJ, "Éder                ");
    strcpy(nomeTime[19].nJ[6].nomeJ, "Felipe Azevedo      ");
    strcpy(nomeTime[19].nJ[7].nomeJ, "Iago Maidana        ");
    strcpy(nomeTime[19].nJ[8].nomeJ, "Nicolas             ");
    strcpy(nomeTime[19].nJ[9].nomeJ, "Ricardo Silva       ");
    strcpy(nomeTime[19].nJ[10].nomeJ, "Cavichioli          ");
    strcpy(nomeTime[19].nJ[11].nomeJ, "Fabián Bustos       ");
}

