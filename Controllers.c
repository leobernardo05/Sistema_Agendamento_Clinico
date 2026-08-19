//---------- Irá ter todas as minhas funções e serem executadas --------------
#include <stdio.h>
#include <stdlib.h>
#include "Bibliotecas.h"
#define MAX 10

int qtde = 0;

//vetor global para armazenar os dados dos agendamentos (no maximo 10 agendamentos, mas se houver 10 agendamentos, o sistema adapta para mais agendamentos, mas para isso, é necessário alterar o valor da constante MAX)
Consulta consultas[MAX];


// funcao para salvar os dados de um agendamento no fim do arquivo atendimentos.txt, sendo passado como parametro a struct consulta
void salvando_atendimentos(Consulta c){
	FILE *arq;
	arq = fopen("atendimentos.txt", "a");
	fprintf(arq, "%d %d %d %d %d %d %d %d %d\n", c.id, c.idMedico, c.idPaciente, c.data.dia, c.data.mes, c.data.ano, c.inicio.hora, c.inicio.minuto, c.fim.hora, c.fim.minuto);
	fclose(arq);
}


//preencher o cadastro de novos atendimentos, funcao chamada no main.c no meu menu, para cadastrar novos atendimentos
void cadastrar_atendimentos(){
    // struct declarada para armazenar os dados do novo agendamento
    Consulta novo;
    
}


// funcao para salvar os dados de um medico no fim do arquivo medicos.txt, sendo passado como parametro a struct medico
void salvando_medicos(Medico m){
	FILE *arq;
	arq = fopen("medicos.txt", "a");
	fprintf(arq, "%d %s %d %d %d %d %d %d\n", m.id, m.nome, m.especialidade, m.inicioManha.hora, m.inicioManha.minuto, m.fimManha.hora, m.fimManha.minuto, m.inicioTarde.hora, m.inicioTarde.minuto, m.fimTarde.hora, m.fimTarde.minuto);
	fclose(arq);
}


// cadastrar novos medicos, funcao chamada no meu menu do main.c, para cadastrar novos medicos
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

// salvando o cadastro de pacientes no arquivo sendo passado como parametro a struct paciente
void salvando_pacientes(Paciente p){
	FILE *arq;
	arq = fopen("pacientes.txt", "a");
	fprintf(arq, "%d %s %s\n", p.id, p.nome, p.contato);
	fclose(arq);
}

// cadastrar novos pacientes, função que é chamada no main.c no meu menu, para cadastrar novos pacientes
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
