// recebe as structs e o prototipo da funções

// -------------- escopo das funções --------
void cadastrar_atendimentos();
void listar_atendimentos();
void procurar_atendimentos();
void atualizar_atendimentos();
void excluir_atendimentos();



// ----------- minhas structs ( estruturas) --------------
typedef enum { // enumeração de especialidades médicas - só podem ser essas
ESPEC_CLINICO, ESPEC_PEDIATRA, ESPEC_DERMATO, ESPEC_CARDIO,
ESPEC_OUTRA
} Especialidade;

typedef struct {
int dia, mes, ano;
} Data;

typedef struct {
int hora, minuto;
} Horario;


typedef struct {
int id;
char nome[64];
Especialidade especialidade;
// Janela típica de atendimento (ex.: 08:00–12:00 / 14:00–18:00)
Horario inicioManha, fimManha;
Horario inicioTarde, fimTarde;
} Medico;

typedef struct {
int id;
char nome[64];
char contato[64]; // telefone/email
} Paciente;

typedef enum { // enumeração de status de consulta
CONS_AGENDADA, CONS_CONCLUIDA, CONS_CANCELADA,
CONS_FALTA
} StatusConsulta;

// Slot de 1 consulta
typedef struct {
int id;
int idMedico;
int idPaciente;
Data data;
Horario inicio;
Horario fim;
StatusConsulta status;
int prioridade; // 0 normal; 1 urgente (para “inteligente”/fila)
} Consulta;

typedef struct {
Medico *itens; int qtd, cap;
} VetMedicos;

typedef struct {
Paciente *itens; int qtd, cap;
} VetPacientes;

typedef struct {
Consulta *itens; int qtd, cap;
} VetConsultas;
