typedef struct Aluno {
	char nome[60];
	int numero;
	int nota;
} Aluno;

typedef struct Turma *tPointer;

typedef struct Turma {
	Aluno aluno;
	tPointer prox;
} Turma;