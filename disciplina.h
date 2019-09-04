#ifndef DISCIPLINA_H
#define DISCIPLINA_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct ds Ds;

Ds* cria_ds();
void deletar(Ds* dis);
void set_ds(Ds* dis);
void print_ds(Ds* dis);
#endif
