#include <stdlib.h>
#include "structs.h"

LInt tail (LInt head){
	LInt tmp = head;
	head = head->prox;
	free(tmp);
	return head;
}