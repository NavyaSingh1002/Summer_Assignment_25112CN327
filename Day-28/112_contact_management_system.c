#include <stdio.h>

struct contact
{
    int id;
    char n[100], p[100];
};

int main()
{
    struct contact c[100];
    int choice, id, n=0;
    do {
        printf("\nContact Management System");
        printf("\n1. Add Contact");
        printf("\n2. Display All Contacts");
        printf("\n3. Search Contact by ID");
        printf("\n4. Update Phone Number");
        printf("\n5. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                printf("Enter details as [ID] [NAME] [PHONE NUMBER]: ");
                scanf("%d%s%s", &c[n].id, c[n].n, c[n].p);
                n++;
                printf("Contact Added Successfully.");
                break;

            case 2:
                printf("\nAll Contacts");
                for(int i=0; i<n; i++)
                {
                    printf("\nID: %d | Name: %s | Phone: %s", c[i].id, c[i].n, c[i].p);
                }
                break;

            case 3: 
                printf("Enter Contact ID to search: ");
                scanf("%d", &id);
                int flag=0;
                for (int i=0; i<n; i++)
                {
                    if (c[i].id==id) {
                        printf("ID: %d | Name: %s | Phone: %s", c[i].id, c[i].n, c[i].p);
                        flag=1;
                        break;
                    }
                }
                if (flag==0)
                    printf("Contact not found.");
                break;
            
            case 4: 
                printf("Enter Contact ID to update phone: ");
                scanf("%d", &id);
                flag=0;
                for (int i=0; i<n; i++)
                {
                    if (c[i].id==id) {
                        printf("Enter new phone: ");
                        scanf("%s", c[i].p);
                        printf("Phone Updated Successfully.");
                        flag=1;
                        break;
                    }
                }
                if (flag==0)
                    printf("Contact not found.");
                break;

            case 5:
                printf("Exiting Contact Management System.");
                break;

            default:
                printf("Invalid choice.");
        }
    } while (choice!=5);
    return 0;
}
