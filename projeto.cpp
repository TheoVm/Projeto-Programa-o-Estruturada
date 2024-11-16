#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct clientes{
    char nome[30];
    int cpf;
    int telefone;
    int statusRegistro;
    char email[30];
}Clientes;

void cadastarClientes(Clientes* vet){
    int i;
    printf("Informe o nome: \n");
    fgets(vet[i].nome, 30, stdin);
    printf("Informe o cpf: \n"); 
    scanf("%d", &vet[i].cpf);
    printf("Informe o numero de telefone: \n"); 
    scanf("%d", &vet[i].telefone);
    printf("Informe o status de registro: \n");
    scanf("%d", &vet[i].statusRegistro);
    printf("Informe o email: \n");
    fgets(vet[i].email,30,stdin);
}

void criarArquivo(){
    
}

void funcClientes(){
    printf("foi1 \n");
}

void funcVoos(){
    printf("foi2 \n");
    
}

void funcControle(){
    printf("foi3 \n");
    
}

int main() {
    int escolha, continuar = 1;
    
    criarArquivo(){
        
    }
    
    while (continuar == 1){
        printf("Qual funcionalidades deseja acessar? \n");
        printf("1 - Cliente \n");
        printf("2 - Voos \n");
        printf("3 - Controle de Voos \n");
        printf("4 - Sair \n");
        printf("Digite sua escolha: ");
        scanf("%d", &escolha);
        
        switch (escolha){
            case 1:
                funcClientes();
                break;
            case 2:
                funcVoos();
                break;
            case 3:
                funcControle();
                break;
            case 4:
                continuar = 0;
                break;
            default:
                printf("Digite uma opção válida. \n");
        }
    }
    

    return 0;
}
