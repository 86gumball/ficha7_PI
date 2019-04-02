#include <stdlib.h>
#include "pergunta2a.h"

tPointer newtPointer (Aluno a, tPointer t){
    tPointer new = (tPointer) malloc (sizeof (struct Turma));
    
    if (new!=NULL) {
        new->aluno = a;
        new->prox  = t;
    }
    return new;
}

int acrescentaAluno (Turma *t, Aluno a){
	tPointer current = t;
	if (current == NULL){
		return 1;
	}
	int i;
	tPointer tmp;
    for (i = 0; a.numero > (current->aluno).numero && current->prox != NULL; i++){
    	tmp = current;
    	current = current->prox;
    }
    if (a.numero > (current->aluno).numero){
    	tPointer new = newtPointer (a, NULL);
    	current->prox = new;
    } else {
    	tPointer new = newtPointer (a, current);
    	if (i == 0){
    		t = new;
    	} else {
	    	tmp->prox = new;
    	} 
    }
	return 0;
}