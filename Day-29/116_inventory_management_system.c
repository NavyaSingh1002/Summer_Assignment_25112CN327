#include<stdio.h>
#include<string.h>
struct item
{
    int id;
    char name[100];
    int qty;
    float price;
};

int main()
{
    struct item i[100];
    int choice, id, n=0;
    do{
        printf("\nInventory Management System");
        printf("\n1. Add Item");
        printf("\n2. Display All Items");
        printf("\n3. Search Item by ID");
        printf("\n4. Update Item Quantity");
        printf("\n5. Delete Item");
        printf("\n6. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                printf("Enter details as [ID] [NAME] [QUANTITY] [PRICE]: ");
                scanf("%d%s%d%f", &i[n].id, i[n].name, &i[n].qty, &i[n].price);
                n++;
                printf("Item Added Successfully.");
                break;

            case 2:
                printf("\nAll Items");
                for(int j=0; j<n; i++)
                {
                    printf("\nID: %d | Name: %s | Quantity: %d | Price: %.2f", i[j.id, i[i].name, i[i].qty, i[i].price);
                }
                break;

            case 3:
                printf("Enter Item ID to search: ");
                scanf("%d", &id);
                int flag=0;
                for(int i=0; i<n; i++)
                {
                    if(inv[i].id==id)
                    {
                        printf("ID: %d | Name: %s | Quantity: %d | Price: %.2f", inv[i].id, inv[i].name, inv[i].qty, inv[i].price);
                        flag=1;
                        break;
                    }
                }
                if(flag==0)
                    printf("Item not found.");
                break;

            case 4:
                printf("Enter Item ID to update quantity: ");
                scanf("%d", &id);
                flag=0;
                for(int i=0; i<n; i++)
                {
                    if(inv[i].id==id)
                    {
                        printf("Enter new quantity: ");
                        scanf("%d", &inv[i].qty);
                        printf("Quantity Updated Successfully.");
                        flag=1;
                        break;
                    }
                }
                if(flag==0)
                    printf("Item not found.");
                break;

            case 5:
                printf("Enter Item ID to delete: ");
                scanf("%d", &id);
                flag=0;
                for(int i=0; i<n; i++)
                {
                    if(inv[i].id==id)
                    {
                        for(int j=i; j<n-1; j++)
                        {
                            inv[j]=inv[j+1];
                        }
                        n--;
                        printf("Item Deleted Successfully.");
                        flag=1;
                        break;
                    }
                }
                if(flag==0)
                    printf("Item not found.");
                break;

            case 6:
                printf("Exiting Inventory Management System.");
                break;

            default:
                printf("Invalid choice.");
        }
    }while(choice!=6);
    return 0;
}
