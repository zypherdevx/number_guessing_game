#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    srand(time(NULL));
    int random, guess;
    random = rand()%100+1;
    int no_of_guess=0;
    printf("WELCOME TO THE WORLD OF GUESSING\n");
    do
    {
      printf("Enter a number between 1 to 100\n");
      scanf("%d",&guess);
      no_of_guess++;
      if (guess > random)
      {
        printf("Enter a smaller number\n");
      }
      else if (guess < random)
      {
        printf("Enter a larger number\n");
      }
      else
      {
        printf("Congratulations you have guessed the correct number in %d attemps\n",no_of_guess);
        printf("BYE BYE !!!\n");
        printf("THANKS FOR PLAYING THE GAME !!!\n");
        printf("Devloped by : zypherdevx\n");
      }
        
    } while (guess != random);

return 0;
    
}