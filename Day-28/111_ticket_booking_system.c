#include <stdio.h>

struct ticket
{
    int id;
    char n[100];
    int s;
};

int main()
{
    struct ticket t[100];
    int choice, id, n=0;
    do {
        printf("\nTicket Booking System");
        printf("\n1. Book Ticket");
        printf("\n2. Display All Tickets");
        printf("\n3. Search Ticket by ID");
        printf("\n4. Update Ticket Seats");
        printf("\n5. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                printf("Enter details as [ID] [NAME] [SEATS]: ");
                scanf("%d%s%d", &t[n].id, t[n].n, &t[n].s);
                n++;
                printf("Ticket Booked Successfully.");
                break;

            case 2:
                printf("\nAll Tickets");
                for(int i=0; i<n; i++)
                {
                    printf("\nID: %d | Name: %s | Seats: %d", t[i].id, t[i].n, t[i].s);
                }
                break;

            case 3: 
                printf("Enter Ticket ID to search: ");
                scanf("%d", &id);
                int flag=0;
                for (int i=0; i<n; i++)
                {
                    if (t[i].id==id) {
                        printf("ID: %d | Name: %s | Seats: %d", t[i].id, t[i].n, t[i].s);
                        flag=1;
                        break;
                    }
                }
                if (flag==0)
                    printf("Ticket not found.");
                break;
            
            case 4: 
                printf("Enter Ticket ID to update seats: ");
                scanf("%d", &id);
                flag=0;
                for (int i=0; i<n; i++)
                {
                    if (t[i].id==id) {
                        printf("Enter new seats: ");
                        scanf("%d", &t[i].s);
                        printf("Seats Updated Successfully.");
                        flag=1;
                        break;
                    }
                }
                if (flag==0)
                    printf("Ticket not found.");
                break;

            case 5:
                printf("Exiting Ticket Booking System.");
                break;

            default:
                printf("Invalid choice.");
        }
    } while (choice!=5);
    return 0;
}
