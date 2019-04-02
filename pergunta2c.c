#include <stdio.h>
#include <stdlib.h>
#include "pergunta2a.h"

Aluno *procura (Turma *t, int n){
	tPointer current = t;
	if (t == NULL){
		return NULL;
	}
	while (current != NULL){
		if ((current->aluno).numero == n){
			printf("O Aluno foi encontrado na Turma.\n");
			return &(current->aluno);
		}
		current = current->prox;
	}
	printf("O Aluno não foi encontrado na Turma.\n");
	return NULL;
}