#include "aluno.h"

struct al
{
  char nome[20];
  long int cpf;
};

Al* cria_al()
{
  Al* al = (Al*)malloc(sizeof(Al));
  return al;
}
void deletar(Al* al)
{
  free(al);
}
void set_al(Al* al)
{
  printf("Nome: ");
  scanf("%[^\n]s",al->nome);
  setbuf(stdin, NULL);


  printf("CPF: ");
  scanf("%ld",&al->cpf);
  setbuf(stdin, NULL);
}
void print_al(Al* al)
{
  printf("Nome: %s\nCPF: %ld", al->nome, al->cpf);
}
