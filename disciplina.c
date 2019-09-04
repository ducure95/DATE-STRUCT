#include "disciplina.h"

struct ds
{
  char nome[20];
  int carga_h;
};

Ds* cria_ds()
{
  Ds* ds = (Ds*)malloc(sizeof(Ds));
  return ds;
}
void deletar(Ds* ds)
{
  free(ds);
}
void set_ds(Ds* ds)
{
  printf("Nome: ");
  scanf("%[^\n]s",ds->nome);
  setbuf(stdin, NULL);


  printf("Carga H: ");
  scanf("%d",&ds->carga_h);
  setbuf(stdin, NULL);
}
void print_ds(Ds* ds)
{
  printf("Nome: %s\nCarga H: %d", ds->nome, ds->carga_h);
}
