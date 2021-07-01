#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
        
    // imprime o cabeçalho do nosso jogo
    printf("*******************************************\n");
    printf("* Bem vindos ao nosso jogo de adivinhação *\n");
    printf("*******************************************\n");

    // GERANDO NÚMEROS RANDOMICOS
    int segundos = time(0);
    srand(segundos);
    int numerogrande = rand();
    int numerosecreto = numerogrande % 100;

    
    int chute;
    int tentativas = 1;
    double pontos = 1000;

    // loop condicional
    while(1) {

        printf("\n**Tentativa %d**\n", tentativas);
        printf("Qual é o seu chute? :D \n\n");
        scanf("\n%d", &chute);
        printf("\nSeu chute foi %d!\n", chute);

        if(chute < 0) {
            printf("Você não pode chutar números negativos!\n");
            // AVISA O "FOR" que deve ir para a próxima interação.
            continue;
        }


        
        int acertou = (chute == numerosecreto);
        int maior = (chute > numerosecreto);


            // CONDICIONAL
        if(acertou) {
        printf("\nParabéns! Você acertou!\n");
        printf("Jogue de novo, você é um bom jogador!\n");
        
            // ORDENAR O while a parar
        break;
        }

        else if(maior) {
                printf("Seu chute foi maior que o número secreto!\n");   
            
        } 

        else {
                printf("Seu chute foi menor que o número secreto!\n");
                
            }
        
        tentativas++;

        double pontosperdidos = abs(chute - numerosecreto) / (double)2;
        pontos = pontos - pontosperdidos;
    }
    printf("\n--Fim de jogo--\n");
    printf("Você acertou em %d tentativas!\n", tentativas);
    printf("Total de pontos: %.1f\n", pontos);
}