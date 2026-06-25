#include<stdio.h>
int main()
{
    int a, b, choice;
    do{
        printf("\n1. Addition");
        printf("\n2. Subtrtaction");
        printf("\n3. Multiplication");
        printf("\n4. Division");
        printf("\n5. Remainder");
        printf("\n6. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                printf("Enter number 1: ");
                scanf("%d", &a);
                printf("Enter number 2: ");
                scanf("%d", &b);
                printf("Answer = %d", a+b);
                break;

            case 2:
                printf("Enter number 1: ");
                scanf("%d", &a);
                printf("Enter number 2: ");
                scanf("%d", &b);
                printf("Answer = %d", a-b);
                break;

            case 3:
                printf("Enter number 1: ");
                scanf("%d", &a);
                printf("Enter number 2: ");
                scanf("%d", &b);
                printf("Answer = %d", a*b);
                break;

            case 4:
                float d;
                printf("Enter number 1: ");
                scanf("%d", &a);
                printf("Enter number 2: ");
                scanf("%d", &b);
                d=(float)a/b;
                printf("Answer = %f", d);
                break;

            case 5:
                printf("Enter number 1: ");
                scanf("%d", &a);
                printf("Enter number 2: ");
                scanf("%d", &b);
                printf("Answer = %d", a%b);
                break;

            case 6:
                printf("Exiting.");
            
            default:
                printf("Invalid choice.");
        }
    }while(choice!=6);
    return 0;
}
