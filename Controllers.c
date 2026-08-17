//---------- Irá ter todas as minhas funções e serem executadas --------------
#include <stdio.h>
#include <stdlib.h>
#include "Bibliotecas.h"
#define MAX 10

int qtde = 0;

void cadastrar_atendimentos(){
    // struct declarada para armazenar os dados do novo agendamento
    Consulta novo;
    getchar();			
	printf("\nInforme a matricula do aluno\n");
	scanf("%d", &novo.id);
	getchar();
	printf("\n\nInforme o nome do aluno\n");
	fgets(novo.nome,50, stdin);
				
	printf("\n\nInforme as tres notas do aluno\n");
	scanf("%d %d %d", &novo.notas[0],&novo.notas[1],&novo.notas[2]);
				
	escrever_novo_aluno(novo);
	printf("\nNovo aluno inserido no arquivo!\n");
}

void cadastrar_medico(){
    // struct declarada para armazenar os dados do novo agendamento
    Consulta novo;
    getchar();
}

// id sequencial
void cadastrar_paciente(){
    // struct declarada para armazenar os dados do novo agendamento
    Consulta novo;

}
