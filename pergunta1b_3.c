#include <stdlib.h>
#include "structs.h"

LInt init (LInt head){
	LInt penultimo = head;
	if (head->prox == NULL){
		free(head);
		return NULL;
	}
	while (penultimo->prox->prox != NULL){
		penultimo = penultimo->prox;
	}
	free(penultimo->prox);
	penultimo->prox = NULL;
	return head;
}