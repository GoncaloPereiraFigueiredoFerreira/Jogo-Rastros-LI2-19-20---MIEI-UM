#include "dados.h"
ESTADO* inicia();
int obter_jogador_atual(ESTADO *est);
void atualizaEstado (ESTADO *est, COORDENADA c);
int moves (ESTADO *est,COORDENADA mvs[8]);
int jogar(ESTADO *est, COORDENADA c);
void save(char cam[],ESTADO *est);