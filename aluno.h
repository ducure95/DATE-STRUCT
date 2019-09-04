#ifndef ALUNO_H
#define ALUNO_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct al Al;

Al* cria_al();
void deletar(Al* al);
void set_al(Al* al);
void print_al(Al* al);
#endif
