#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    int n, guess, attempt=0;
    srand(time(0));
    n=rand()%100+1;    //random number
    printf("Welcome to the Number Guessing Game!");
    printf("\nTry and guess it.");
    do{
        printf("\nEnter your guess: ");
        scanf("%d", &guess);
        attempt++;
        if(guess>n)
            printf("Too high.");
        else if(guess<n)
            printf("Too low");
        else
            printf("Correct Guess.");
    } while(guess!=n);
    return 0;
}
