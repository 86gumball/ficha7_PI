#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pergunta2a.h"

void imprimeT (tPointer head){
	tPointer current = head;
	while (current != NULL){
		printf("%s\n", (current->aluno).nome);
		printf("%d\n", (current->aluno).numero);
		printf("%d\n\n", (current->aluno).nota);
		current = current->prox;
	} 
}

tPointer criaTurma(){
    tPointer nodo1 = malloc(sizeof(struct Turma));
    tPointer nodo2 = malloc(sizeof(struct Turma));
    tPointer nodo3 = malloc(sizeof(struct Turma));
    tPointer nodo4 = malloc(sizeof(struct Turma));

    Aluno Persa;
    strcpy(Persa.nome, "Persa");
    Persa.numero = 53;
    Persa.nota = 12;

    Aluno Gumball;
    strcpy(Gumball.nome, "Gumball");
    Gumball.numero = 86;
    Gumball.nota = 14;

    Aluno Deejay;
    strcpy(Deejay.nome, "Deejay");
    Deejay.numero = 139;
    Deejay.nota = 14;

    Aluno Hasdrubal;
    strcpy(Hasdrubal.nome, "Hasdrubal");
    Hasdrubal.numero = 141;
    Hasdrubal.nota = 14;

    nodo1->aluno = Persa;
    nodo1->prox = nodo2;
    nodo2->aluno = Gumball;
    nodo2->prox = nodo3;
    nodo3->aluno = Deejay;
    nodo3->prox = nodo4;
    nodo4->aluno = Hasdrubal;
    nodo4->prox = NULL;

    return nodo1;
}