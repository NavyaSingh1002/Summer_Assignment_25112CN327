#include <stdio.h>

struct book
{
    int id;
    char t[100], au[100];
    int y;
};

int main()
{
    struct book b[100];
    int choice, id, n=0;
    do {
        printf("\nLibrary Management System");
        printf("\n1. Add Book");
        printf("\n2. Display All Books");
        printf("\n3. Search Book by ID");
        printf("\n4. Update Book Title");
        printf("\n5. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                printf("Enter details as [ID] [TITLE] [AUTHOR] [YEAR]: ");
                scanf("%d%s%s%d", &b[n].id, b[n].t, b[n].au, &b[n].y);
                n++;
                printf("Book Added Successfully.");
                break;

            case 2:
                printf("\nAll Books");
                for (int i = 0; i < n; i++) {
                    printf("\nID: %d | Title: %s | Author: %s | Year: %d", b[i].id, b[i].t, b[i].au, b[i].y);
                }
                break;

            case 3: 
                printf("Enter Book ID to search: ");
                scanf("%d", &id);
                int flag=0;
                for (int i=0; i<n; i++)
                {
                    if (b[i].id==id) {
                        printf("ID: %d | Title: %s | Author: %s | Year: %d", b[i].id, b[i].t, b[i].au, b[i].y);
                        flag=1;
                        break;
                    }
                }
                if (flag==0)
                    printf("Book not found.");
                break;
            
            case 4: 
                printf("Enter Book ID to update title: ");
                scanf("%d", &id);
                flag=0;
                for (int i=0; i<n; i++)
                {
                    if (b[i].id==id) {
                        printf("Enter new title: ");
                        scanf("%s", b[i].t);
                        printf("Title Updated Successfully.");
                        flag=1;
                        break;
                    }
                }
                if (flag==0)
                    printf("Book not found.");
                break;

            case 5:
                printf("Exiting Library Management System.");
                break;

            default:
                printf("Invalid choice.");
        }
    } while (choice!=5);
    return 0;
}
