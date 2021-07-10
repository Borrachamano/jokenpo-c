#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main(){
    // Especificando o idioma
    setlocale(LC_ALL, "Portuguese");
    
    // Atualizando os valores sorteados

    // Declarando variáveis
    int user;
    int computador = rand() % 2;

    printf("======================\n");
    printf("0 - Pedra\n");
    printf("1 - Papel\n");
    printf("2 - Tesoura\n");
    printf("======================\n");
    
    // Lendo a jogada
    printf("Escolha uma opção: ");
    scanf("%d", &user);
    
    printf("====================\n");
    printf("Usuário: Opção %d.\n", user);
    printf("Computador: Opção %d.\n", computador);
    printf("====================\n");
    
    // Testando resultados
    if(user == 0){
        if(computador == 0){
            printf("Empate!\n");
        }
        else if(computador == 1){
            printf("Computador venceu!\n");
        }
        else if(computador == 2){
            printf("Usuário venceu!\n");
        }
    }
    
    else if(user == 1){
        if(computador == 0){
            printf("Jogador venceu!\n");
        }
        else if(computador == 1){
            printf("Empate!\n");
        }
        else if(computador == 2){
            printf("Computador venceu!\n");
        }
    }
    
    else if(user == 2){
        if(computador == 0){
            printf("Computador venceu!\n");
        }
        else if(computador == 1){
            printf("Jogador venceu!");
        }
        else if(computador == 2){
            printf("Empate!");
        }
    }
    
    else{
        printf("Jogada inválida.\n");
    }
    
    // Finalizando a execução
    return 0;
    
}
