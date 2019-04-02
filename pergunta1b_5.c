#include <stdlib.h>
#include "structs.h"

LInt concat (LInt a, LInt b){
	if (a == NULL){
		a = b;
		return a;
	} else if (b == NULL){
		return a;
	}

	LInt current = a;
	while (current->prox != NULL){
		current = current->prox;
	} 
	current->prox = b;
	return a;
}