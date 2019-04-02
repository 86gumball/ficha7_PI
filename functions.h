#include "structs.h"
#include "pergunta2a.h"

LInt criaExemplo ();
LInt cons (LInt head, int x);
LInt tail (LInt head);
LInt init (LInt head);
LInt snoc (LInt l, int x);
LInt concat (LInt a, LInt b);
tPointer newtPointer (Aluno a, tPointer t);
int acrescentaAluno (Turma *t, Aluno a);
void imprimeT (tPointer head);
tPointer criaTurma();
Aluno *procura (Turma *t, int n);
int somaAprovados (Turma *t);