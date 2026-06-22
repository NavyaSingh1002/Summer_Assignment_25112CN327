#include <stdio.h>
int main()
{
    int score=0, c;
    printf("Welcome to the Quiz");
    printf("\n-------------------");
    char ques[5][200]={
        "1. What is the capital of India?",
        "2. Which is the longest day on earth?",
        "3. Which planet is known as the Red Planet?",
        "4. What is the largest ocean in the world?",
        "5. Who wrote the play 'The Merchant Of Venice'?"
    };
    //options
    char opt[5][4][200]={
        {"Mumbai", "Delhi", "Kolkata", "Chennai"},
        {"21 June", "21 December", "21 July", "21 October"},
        {"Earth", "Mars", "Jupiter", "Venus"},
        {"Indian Ocean", "Atlantic Ocean", "Pacific Ocean", "Arctic Ocean"},
        {"William Shakespeare", "Charles Dickens", "J. K. Rowling", "Mark Twain"}
    };
    //answers
    int ans[5] = {2, 1, 2, 3, 1};
    for(int i=0; i<5; i++)
    {
        printf("\n%s", ques[i]);
        for(int j=0; j<4; j++)
        {
            printf("\n%d. %s",j+1, opt[i][j]);
        }
        printf("\nEnter your choice: ");
        scanf("%d", &c);
        if(c==ans[i])
        {
            printf("Correct!");
            score++;
        }
        else
            printf("Wrong! \nCorrect answer is: %s", opt[i][ans[i]-1]);
    }
    printf("\nQuiz Over!");
    printf("\nFinal Score: %d", score);
    return 0;
}