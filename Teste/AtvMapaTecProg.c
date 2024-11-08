#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

struct consulta{
    char nome[100];
    int dia;
    int hora;
};

struct consulta agenda[300];
int qtdAgendamento;

bool verificarDisponibilidade(int horaAgenda){
    if(horaAgenda < 8 && horaAgenda > 20){
        printf("Clínica fechada nesse horário.\n");
        return false;
    }
    return true;
}

void agendarConsulta(){
    int diaAgenda;
    int horaAgenda;

    printf("qual dia do mês você quer agendar?\n");
    fflush(stdin);
    scanf("%d", &diaAgenda);

    printf("qual hora do dia você quer agendar?\n");
    fflush(stdin);
    scanf("%d", &horaAgenda);

    if(verificarDisponibilidade(horaAgenda)){
        printf("Horário disponível.\n");
        printf("Vamos confirmar seu agendamento.\n");
        agenda[qtdAgendamento].dia = diaAgenda;
        agenda[qtdAgendamento].hora = horaAgenda;
        printf("Qual seu nome?\n");
        fflush(stdin);
        gets(agenda[qtdAgendamento].nome);
        qtdAgendamento = qtdAgendamento + 1;
        printf("Agendamento realizado.\n");
    }else{
        printf("Horário indisponível\n");
    }
}

void listarConsulta(){
    int i;
    for(i =  0; i < qtdAgendamento; i++){
        printf("========================\n");
        printf("Nome: %s. \n", agenda[i].nome);
        printf("Dia: %d. \n", agenda[i].dia);
        printf("Horas: %d. \n", agenda[i].hora);
    }
}

int main(){

    setlocale(LC_ALL, "Portuguese_Brazil");

    int opc;
    qtdAgendamento = 0;

    do{
        printf("Escolha uma opção desejada:\n");
        printf("1 - Agendar\n");
        printf("2 - Listar\n");
        printf("3 - Sair\n");
        fflush(stdin);
        scanf("%d", &opc);

        switch(opc){
            case 1:{
                agendarConsulta();
                break;
            }
            case 2:{
                listarConsulta();
                break;
            }
            case 3:{
                printf("Saindo do porgrama.\n");
                break;
            }
            default:{
                printf("Opção inválida.\n");
                break;
            }    
        }
    }while(opc != 3);

    return 0;
}