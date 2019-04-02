#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "functions.h"

void imprimeL (LInt head) {
	LInt current = head;
	while (current != NULL){
		printf("%d\n", (*current).valor);
		current = current->prox;
	} 
}

int main() {
	/* Teste pergunta1a
    LInt a = criaExemplo();
    imprimeL(a); 
    */

    /* Teste pergunta1b_1
    LInt a = criaExemplo();
    LInt b = cons(a, 8);
    imprimeL(b);
    */

    /* Teste pergunta1b_2
    LInt a = criaExemplo();
    a = tail(a);
    imprimeL(a);
    */

    /* Teste pergunta1b_3
	LInt a = criaExemplo();
	a = init(a);
	imprimeL(a);
    */

	/* Teste pergunta1b_4
    LInt a = criaExemplo();
    a = snoc(a, 95);
    imprimeL(a);
    */

	/* Teste pergunta1b_5
    LInt a = criaExemplo();
    LInt b = criaExemplo();
    a = snoc(a, 95);
    a = concat(a, b);
    imprimeL(a);
    */

    /* Teste pergunta2a
    tPointer turma1 = criaTurma();
    imprimeT(turma1);
    */
    
    /* Teste pergunta2b
	Aluno Pedras;
    strcpy(Pedras.nome, "Pedras");
    Pedras.numero = 85;
    Pedras.nota = 15;

	tPointer new;
	new = criaTurma();
	acrescentaAluno(new, Pedras);
	imprimeT(new);
	*/

	/* Teste pergunta2c
	tPointer new;
	new = criaTurma();
	printf("%p\n", procura (new, 86));
	*/

	/* Teste pergunta2d
	tPointer new;
	new = criaTurma();
	printf("Passaram %d alunos à disciplina.\n", somaAprovados(new));
	*/
	
    return 0;
}