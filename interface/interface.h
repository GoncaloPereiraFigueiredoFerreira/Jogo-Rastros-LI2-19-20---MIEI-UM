#ifndef PL6_4_IMPRIMIR_H
#define PL6_4_IMPRIMIR_H

#include "../Logica/funcoes.h"

#define BUF_SIZE 1024

void showCOORD (COORDENADA c);
void prompt (ESTADO *est);
void desenhal();
void desenha(ESTADO *est);

int interpretador(ESTADO *est);


#endif