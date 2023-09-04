#include <stdio.h>
#include <string.h>

#include "conjunto.h"

//iniciar conjunto vazio
void inicializar(t_conjunto A){
	memset(A, 0, sizeof(t_conjunto));
}

//funcao privada
static char limite(t_elemento e){

	if(e < 0 || e > MAX){
		printf("Valor %d invalido.\n", e);
		return 0;
	}

	return 1;

}

int pertence(t_elemento e, t_conjunto A){

	if(!limite(e)){
		return INVALIDO;
	}

	return A[e];

}

int inserir(t_elemento e, t_conjunto A){

	if(!limite(e)){
		return INVALIDO;
	}

	if (pertence(e, A)){
		printf("Já existe.\n");
		return JA_EXISTE;
	}

	A[e] = 1;
	return SUCESSO;

}

int remover(t_elemento e, t_conjunto A){

	if(!limite(e)){
		return INVALIDO;
	}

	if (!pertence(e, A)){
		printf("Não existe.\n");
		return NAO_EXISTE;
	}

	A[e] = 0;
	return SUCESSO;

}

void interseccao(t_conjunto A, t_conjunto  B, t_conjunto C) {

	for (int i = 0; i < MAX; i++) {
		C[i] = A[i] && B[i];
	}

}

void uniao(t_conjunto A, t_conjunto  B, t_conjunto C) {

	for (int i = 0; i < MAX; i++) {
		C[i] = A[i] || B[i];
	}

}

void imprimir(t_conjunto A) {

	printf("{");

	for (int i = 0; i < MAX; i++) {
		if (pertence(i, A)) {
			printf("%d, ", i);
		}
	}

	printf("}\n");

}