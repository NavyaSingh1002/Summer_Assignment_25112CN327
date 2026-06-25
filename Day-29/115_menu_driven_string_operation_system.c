#include<stdio.h>
#include<string.h>
int main()
{
    char a[100], b[100];
    int choice;
    do{
        printf("\n1. Input Strings");
        printf("\n2. Display Strings");
        printf("\n3. Compare Strings");
        printf("\n4. Combine Strings");
        printf("\n5. Find Length of Strings");
        printf("\n6. Copy String");
        printf("\n7. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                printf("Enter first string: ");
                scanf("%s", a);
                printf("Enter second string: ");
                scanf("%s", b);
                printf("Strings Entered Successfully.");
                break;

            case 2:
                printf("\nString 1: %s", a);
                printf("\nString 2: %s", b);
                break;

            case 3:
                if(strcmp(a,b)==0)
                    printf("Strings are equal.");
                else
                    printf("Strings are not equal.");
                break;

            case 4:
                char c[200]="";
                strcat(c,a);
                strcat(c,b);
                printf("Combined String: %s", c);
                break;

            case 5:
                printf("Length of String 1: %d", strlen(a));
                printf("\nLength of String 2: %d", strlen(b));
                break;

            case 6:
                strcpy(a,b);
                printf("String 2 copied into String 1: %s", a);
                break;

            case 7:
                printf("Exiting.");
                break;

            default:
                printf("Invalid choice.");
        }
    }while(choice!=7);
    return 0;
}
