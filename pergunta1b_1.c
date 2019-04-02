#include <stdlib.h>
#include "structs.h"

LInt cons (LInt head, int x){
	LInt new = (LInt) malloc(sizeof(struct slist));
	new->valor = x;
	new->prox = head;
	return new;
}