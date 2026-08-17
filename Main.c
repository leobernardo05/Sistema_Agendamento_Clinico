#include <stdio.h>

// Sistema Inteligente para Agendamento  de Consultas Medica
int main(){
	int op, i;
	
	do{
		printf("\n\nDigite a opcao desejada: \n1 - Cadastrar novo agendamento\n2 - Listar todos os agendamentos\n3 - Procurar um agendamento específico\n4 - Atulizar um agendamento específico\n5- Excluir um agendamento específico\n0 - Para encerrar\n");
		scanf("%d", &op);
		
		switch(op){
			case 1:{
                    //adicionar um nome Agendamento 
					cadastrar_atendimentos();
			}break;

			case 2:{
                    // Listar todos os agendamentos
					listar_atendimentos();
			}break;
			
			case 3:{
                    // Ler um agendamento especifico a partir do seu ID
					procurar_atendimentos();	
			}break;
			
			case 4:{
                    // Atualizar um agendamento a partir do seu ID
				    atualizar_atendimentos();
			}break;

			case 5:{
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