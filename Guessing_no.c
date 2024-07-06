#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){
     int random,guess;
     int no_of_guess=0;
     //Seed fxn
     srand(time(NULL));

  printf("Welcome to the world of Guessing numbers\n");
  random=(rand()%100)+1;//Generating betwen 0 to 100
 // printf("Number generated is %d ",random);

  do{
    printf("\nplease enetr your guess between (1 to 100)  ");
    scanf("%d",&guess);
    no_of_guess++;

    if(guess<random)
    {
      printf(" Guess larger Number  \n");
    }
    else if(guess>random)
    {
      printf("Guess smaller Number \n");
      }
      else
      {
        printf("\nCongratulations !!! : You have succesfully guessed the Number in %d attempts",no_of_guess);
        }
  }while(guess!=random);
  printf("\nBye Bye, Thanks For Playing ");
  printf("\nDeveloped by: Pratham_Bansal");
}