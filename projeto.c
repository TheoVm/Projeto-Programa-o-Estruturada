#include <stdio.h>
#include <string.h>
#include <ctype.h>

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
