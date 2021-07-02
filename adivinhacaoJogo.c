#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  
    
  int level;
  int maxTries;
  int tryNumber = 1;
  int guess;

  //DEFININDO NÚMERO ALEATÓRIO
  int seed = time(0);
  srand(seed);
  int secretNumber = rand() % 100;

  


  //PIKACHU WELCOMES YOU AND WANTS TO PLAY A GAME
  printf("\n\n░░░░░░░░▀████▀▄▄░░░░░░░░░░░░░░▄█");
  printf("\n░░░░░░░░░░█▀░░░░▀▀▄▄▄▄▄░░░░▄▄▀▀█");
  printf("\n░░▄░░░░░░░░█░░░░░░░░░░▀▀▀▀▄░░▄▀");
  printf("\n░▄▀░▀▄░░░░░░▀▄░░░░░░░░░░░░░░▀▄▀");
  printf("\n▄▀░░░░█░░░░░█▀░░░▄█▀▄░░░░░░▄█");
  printf("\n▀▄░░░░░▀▄░░█░░░░░▀██▀░░░░░██▄█");
  printf("\n░▀▄░░░░▄▀░█░░░▄██▄░░░▄░░▄░░▀▀░█");
  printf("\n░░█░░▄▀░░█░░░░▀██▀░░░░▀▀░▀▀░░▄▀");
  printf("\n░█░░░█░░█░░░░░░▄▄░░░░░░░░░░░▄▀");
  printf("\n\nVamos brincar de adivinhações!\n");

  //DIFICULDADE
  printf("\nQual a dificuldade?");
  printf("\n(1) Fácil");
  printf("\n(2) Médio");
  printf("\n(3) Difícil");
  printf("\nEscolha um número e aperte ENTER.\n");
  scanf("%d", &level);
  
  if(level == 1){
    printf("Vamos jogar no Fácil, então!\n");
  } else if(level == 2) {
    printf("Vamos jogar no Médio, então!\n");
  } else{
    printf("Vamos jogar no Difícil, então!\n");
  }
  
  switch(level) {
    case 1:
      maxTries = 20;
      break;
    case 2:
      maxTries = 15;
      break;
    default:
      maxTries = 6;
      break;
  }

  printf("\n\nTente adivinhar o número secreto!");
  printf("\n\nValendo os números de 1 a 99.\n\n");

  int acertou;
  double points = 1000;

  for(int i = 1; i <= maxTries; i++) {

    printf("\nTentativa %d de %d!", tryNumber, maxTries);
    printf("\nDigite seu chute \n");
    scanf("%d", &guess);
    



    if(guess < 0) {
      printf("\nVocê só pode chutar números positivos!");
      continue;
    }

    acertou = (guess == secretNumber);
    int maior = (guess > secretNumber);


    if(acertou) {
      break;
    } else if(maior) {
      printf("\nSeu chute foi maior que o número secreto!");
    } else {
      printf("\nSeu chute foi menor que o número secreto!");
    }
    tryNumber++;
    double lostPoints = abs(guess - secretNumber) / (double)2;
    points = (points - lostPoints);
  }


  if(acertou) {
    
    printf("\n\n⢀⣠⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⣠⣤⣶⣶");
    printf("\n⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⢰⣿⣿⣿⣿");
    printf("\n⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣧⣀⣀⣾⣿⣿⣿⣿");
    printf("\n⣿⣿⣿⣿⣿⡏⠉⠛⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⣿");
    printf("\n⣿⣿⣿⣿⣿⣿⠀⠀⠀⠈⠛⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⠛⠉⠁⠀⣿");
    printf("\n⣿⣿⣿⣿⣿⣿⣧⡀⠀⠀⠀⠀⠙⠿⠿⠿⠻⠿⠿⠟⠿⠛⠉⠀⠀⠀⠀⠀⣸⣿");
    printf("\n⣿⣿⣿⣿⣿⣿⣿⣷⣄⠀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⣿⣿");
    printf("\n⣿⣿⣿⣿⣿⣿⣿⣿⣿⠏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠠⣴⣿⣿⣿⣿");
    printf("\n⣿⣿⣿⣿⣿⣿⣿⣿⡟⠀⠀⢰⣹⡆⠀⠀⠀⠀⠀⠀⣭⣷⠀⠀⠀⠸⣿⣿⣿⣿");
    printf("\n⣿⣿⣿⣿⣿⣿⣿⣿⠃⠀⠀⠈⠉⠀⠀⠤⠄⠀⠀⠀⠉⠁⠀⠀⠀⠀⢿⣿⣿⣿");
    printf("\n⣿⣿⣿⣿⣿⣿⣿⣿⢾⣿⣷⠀⠀⠀⠀⡠⠤⢄⠀⠀⠀⠠⣿⣿⣷⠀⢸⣿⣿⣿");
    printf("\n⣿⣿⣿⣿⣿⣿⣿⣿⡀⠉⠀⠀⠀⠀⠀⢄⠀⢀⠀⠀⠀⠀⠉⠉⠁⠀⠀⣿⣿⣿");
    printf("\n⣿⣿⣿⣿⣿⣿⣿⣿⣧⠀⠀⠀⠀⠀⠀⠀⠈⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢹⣿⣿");
    printf("\n⣿⣿⣿⣿⣿⣿⣿⣿⣿⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿");
    printf("\nUau! Você acertou em %d tentativas!", tryNumber);
    printf("\nTotal de pontos: %.1f", points);
    printf("\nSe quiser brincar novamente, é só chamar!");

  } else {
      
      printf("\n\n────────▄███████████▄────────");
      printf("\n─────▄███▓▓▓▓▓▓▓▓▓▓▓███▄─────");
      printf("\n────███▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓███────");
      printf("\n───██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██───");
      printf("\n──██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██──");
      printf("\n─██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██─");
      printf("\n██▓▓▓▓▓▓▓▓▓███████▓▓▓▓▓▓▓▓▓██");
      printf("\n██▓▓▓▓▓▓▓▓██░░░░░██▓▓▓▓▓▓▓▓██");
      printf("\n██▓▓▓▓▓▓▓██░░███░░██▓▓▓▓▓▓▓██");
      printf("\n███████████░░███░░███████████");
      printf("\n██░░░░░░░██░░███░░██░░░░░░░██");
      printf("\n██░░░░░░░░██░░░░░██░░░░░░░░██");
      printf("\n██░░░░░░░░░███████░░░░░░░░░██");
      printf("\n─██░░░░░░░░░░░░░░░░░░░░░░░██─");
      printf("\n──██░░░░░░░░░░░░░░░░░░░░░██──");
      printf("\n───██░░░░░░░░░░░░░░░░░░░██───");
      printf("\n────███░░░░░░░░░░░░░░░███────");
      printf("\n─────▀███░░░░░░░░░░░███▀─────");
      printf("\n────────▀███████████▀────────\n");
      
      printf("\nQue pena, acabaram as tentativas!");
      printf("\nMas não desanime! Tente novamente!");

  }
  printf("\n\n-- Fim de jogo --\n\n");
}