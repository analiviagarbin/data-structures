#ifndef LISTA_H
#define LISTA_H

#define MAX 128

#define SUCESSO 1
#define NAO_EXISTE -1
#define JA_EXISTE -2
#define INVALIDO -3
#define CHEIA -4
#define VAZIA -5

typedef int t_chave; //todos os t_chave são int
typedef struct {
	t_chave chave;
	char nome[50];
	//aqui cabem n parametros
} t_elemento;

typedef struct{
	int último;
	t_elemento lista[MAX];
} t_lista;

int criar(t_lista *l);
int inserir(t_elemento e, t_lista *l);
int remover(t_chave chave, t_lista *l);
int pesquisar(t_chave chave, t_lista *l);
int vazia(t_lista *l);
int cheia(t_lista *l);
void imprimir(t_lista *l);

#endif