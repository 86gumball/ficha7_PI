#include <stdlib.h>
#include "pergunta2a.h"

int somaAprovados (Turma *t){
	tPointer current = t;
	int count = 0;
	while (current != NULL){
		if ((current->aluno).nota >= 10){
			count++;
		}
		current = current->prox;
	} 
	return count;
}