#include <stdlib.h>
#include "structs.h"

LInt snoc (LInt head, int x){
	LInt current = head;
	if (head == NULL){
		LInt new = (LInt) malloc(sizeof(struct slist));
		new->valor = x;
		new->prox = NULL;
		head = new;
		return new;
	}
	while (current->prox != NULL){
		current = current->prox;
	} 
	LInt new = (LInt) malloc(sizeof(struct slist));
	new->valor = x;
	new->prox = NULL;
	current->prox = new;
	return head;
}