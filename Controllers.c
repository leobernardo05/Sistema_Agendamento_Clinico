//---------- Irá ter todas as minhas funções e serem executadas --------------
#include <stdio.h>
#include <stdlib.h>
#include "Bibliotecas.h"
#define MAX 10

int qtde = 0;

//vetor global para armazenar os dados dos agendamentos (no maximo 10 agendamentos, mas se houver 10 agendamentos, o sistema adapta para mais agendamentos, mas para isso, é necessário alterar o valor da constante MAX)
Consulta consultas[MAX];


// cadastrar novos atendimentos
void cadastrar_atendimentos(){
    // struct declarada para armazenar os dados do novo agendamento
    Consulta novo;
    
}

// cadastrar novos medicos
void cadastrar_medico(){
	// structs declarada para armazenar os dados do novo agendamento
	Medico novo;
	Especialidade especialidade;
	Horario inicioManha, fimManha, inicioTarde, fimTarde;
	Data data;

	// implantação de dados do novo medico
	getchar();// é responsavel por limpar o buffer do teclado, para não dar erro na hora de ler a string		
	// --- alterar aqui, porque o professor quer que o sistema já de o ID do agendamento, então não precisa pedir para o usuário digitar
	printf("\nInforme o Id da consulta\n");
	scanf("%d", &novo.id);
	getchar();
	printf("\n\nInforme o nome do médico\n");
	fgets(novo.nome,50, stdin);
	getchar();
	printf("\n\nInforme a especialidade do médico\n1-Clínico Geral\n2-Pediatra\n3-Dermatologista\n4-Cardiologista\n5-Outra\n");
	switch(especialidade){
		case 1:
			especialidade = ESPEC_CLINICO;
			break;
		case 2:
			especialidade = ESPEC_PEDIATRA;
			break;
		case 3:
			especialidade = ESPEC_DERMATO;
			break;
		case 4:
			especialidade = ESPEC_CARDIO;
			break;
		default:
			especialidade = ESPEC_OUTRA;
			break;
	}
	getchar();
	
}

// cadastrar novos pacientes
void cadastrar_paciente(){
    // struct declarada para armazenar os dados do novo agendamento
    Consulta novo;
}

// listar todos os atendimentos
void listar_atendimentos() {

}

//funcao procurar atendimentos
void procurar_atendimentos(){

}

// funcao atualizar atendimentos
void atualizar_atendimentos(){

}

// funcao excluir atendimentos
void excluir_atendimentos(){

}
