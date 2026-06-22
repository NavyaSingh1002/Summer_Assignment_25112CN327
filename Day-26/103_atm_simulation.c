#include <stdio.h>
int main()
{
    int choice, pin, p, newpin;
    float bal=1000.00, amt;
    pin=1234;    //just a pin for demo
    printf("Enetr pin: ");
    scanf("%d", &p);
    if(p!=pin)
    {
        printf("Invalid pin. Access denied.");
        return 0;
    }
    do{
        printf("\tATM Menu");
        printf("\n1. Check Balance");
        printf("\n2. Deposit Money");
        printf("\n3. Withdraw Money");
        printf("\n4. Change PIN.");
        printf("\n5. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                printf("Your balance is %.2f", bal);
                break;
            case 2:
                printf("Enter amount to deposit: ");
                scanf("%f", &amt);
                bal=bal+amt;
                printf("Deposited Successfully.");
                printf("\nNew Balance: %.2f", bal);
                break;
            case 3: 
                printf("Enter amout to withdraw: ");
                scanf("%f", &amt);
                if(amt>bal)
                    printf("Insufficient Amount.");
                else
                {
                    bal=bal-amt;
                    printf("Withdrawal Successful.");
                    printf("\nNew Balance: %.2f", bal);
                }
                break;
            case 4:
                printf("Enter current PIN: ");
                scanf("%d", &p);
                if(p==pin)
                {
                    printf("Enter new PIN: ");
                    scanf("%d", &newpin);
                    pin=newpin;
                    printf("PIN changed successfully.");
                }
                else
                    printf("Incorrect PIN. \nTry Again.");
                break;
            case 5:
                printf("Thank You for using ATM.");
                break;
            default:
                printf("Invalid choice. Try again.");
        }
    }while(choice!=5);
    return 0;
}