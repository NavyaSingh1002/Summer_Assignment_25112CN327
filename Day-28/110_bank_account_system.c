#include <stdio.h>

struct account
{
    int id;
    char n[100];
    float bal;
};

int main()
{
    struct account a[100];
    int choice, id, n=0;
    do {
        printf("\nBank Account System");
        printf("\n1. Add Account");
        printf("\n2. Display All Accounts");
        printf("\n3. Search Account by ID");
        printf("\n4. Update Account Balance");
        printf("\n5. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                printf("Enter details as [ID] [NAME] [BALANCE]: ");
                scanf("%d%s%f", &a[n].id, a[n].n, &a[n].bal);
                n++;
                printf("Account Added Successfully.");
                break;

            case 2:
                printf("\nAll Accounts");
                for (int i=0; i<n; i++)
                {
                    printf("\nID: %d | Name: %s | Balance: %.2f", a[i].id, a[i].n, a[i].bal);
                }
                break;

            case 3: 
                printf("Enter Account ID to search: ");
                scanf("%d", &id);
                int flag=0;
                for (int i=0; i<n; i++)
                {
                    if (a[i].id==id) {
                        printf("ID: %d | Name: %s | Balance: %.2f", a[i].id, a[i].n, a[i].bal);
                        flag=1;
                        break;
                    }
                }
                if (flag==0)
                    printf("Account not found.");
                break;
            
            case 4: 
                printf("Enter Account ID to update balance: ");
                scanf("%d", &id);
                flag=0;
                for (int i=0; i<n; i++)
                {
                    if (a[i].id==id) {
                        printf("Enter new balance: ");
                        scanf("%f", &a[i].bal);
                        printf("Balance Updated Successfully.");
                        flag=1;
                        break;
                    }
                }
                if (flag==0)
                    printf("Account not found.");
                break;

            case 5:
                printf("Exiting Bank Account System.");
                break;

            default:
                printf("Invalid choice.");
        }
    } while (choice!=5);
    return 0;
}
