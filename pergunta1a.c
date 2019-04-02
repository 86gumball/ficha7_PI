#include <stdlib.h>
#include "structs.h"

LInt criaExemplo (){
	LInt primeiro = (LInt) malloc (sizeof(struct slist));
	LInt segundo  = (LInt) malloc (sizeof(struct slist));
	LInt terceiro = (LInt) malloc (sizeof(struct slist));

	primeiro->valor = 10;
	segundo ->valor = 5;
	terceiro->valor = 15;

	primeiro->prox = segundo;
	segundo->prox = terceiro;

	return primeiro;
}