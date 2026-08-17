#include <stdio.h>
#include <stdlib.h>
#include "Bibliotecas.h"

// Sistema Inteligente para Agendamento  de Consultas Medica
int main(){
	int op, i;
	
	do{
		printf("\n\nDigite a opcao desejada: \n1 - Cadastrar novo agendamento\n2- Cadastrar novo medico\n3-Cadastrar novo paciente\n4 - Listar todos os agendamentos\n5 - Procurar um agendamento específico\n6 - Atulizar um agendamento específico\n7- Excluir um agendamento específico\n0 - Para encerrar\n");
		scanf("%d", &op);
		
		switch(op){
			case 1:{
                    //adicionar um nome Agendamento 
					cadastrar_atendimentos();
			}break;

			case 2:{
                    //adicionar um nome Agendamento 
					cadastrar_medico();
			}break;

			case 3:{
                    //adicionar um nome Agendamento 
					cadastrar_paciente();
			}break;

			case 4:{
                    // Listar todos os agendamentos
					listar_atendimentos();
			}break;
			
			case 5:{
                    // Ler um agendamento especifico a partir do seu ID
					procurar_atendimentos();	
			}break;
			
			case 6:{
                    // Atualizar um agendamento a partir do seu ID
				    atualizar_atendimentos();
			}break;

			case 7:{
                    // Atualizar um agendamento a partir do seu ID
				    excluir_atendimentos();
			}break;
			
			default:{
				printf("\n\nEscolha uma opcao valida!!");
			}break;
		}
	}while(op!=0);
	
    return 0;
}