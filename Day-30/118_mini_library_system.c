#include<stdio.h>
#include<string.h>

struct issuedate
{
    int d, m, y;
};

struct returndate
{
    int d, m, y;
};

struct book
{
    int id;
    char t[100], au[100];
    struct issuedate idate;
    struct returndate rdate;
};

int main()
{
    struct book b[100];
    int choice, id, n=0;
    do{
        printf("\nMini Library Management System");
        printf("\n1. Add Book");
        printf("\n2. Display All Books");
        printf("\n3. Search Book by ID");
        printf("\n4. Update Issue/Return Date");
        printf("\n5. Delete Book");
        printf("\n6. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                printf("Enter details as [ID] [TITLE] [AUTHOR] [ISSUE DATE] [RETURN DATE]: ");
                scanf("%d%s%s%d%d%d%d%d%d", &b[n].id, b[n].t, b[n].au, &b[n].idate.d, &b[n].idate.m, &b[n].idate.y, &b[n].rdate.d, &b[n].rdate.m, &b[n].rdate.y);
                n++;
                printf("Book Added Successfully.");
                break;

            case 2:
                printf("\nAll Books");
                for(int i=0; i<n; i++)
                {
                    printf("\n[ID: %d | Title: %s | Author: %s | Issue Date: %d/%d/%d | Return Date: %d/%d/%d]", b[i].id, b[i].t, b[i].au, b[i].idate.d, b[i].idate.m, b[i].idate.y, b[i].rdate.d, b[i].rdate.m, b[i].rdate.y);
                }
                break;

            case 3:
                printf("Enter Book ID to search: ");
                scanf("%d", &id);
                int flag=0;
                for(int i=0; i<n; i++)
                {
                    if(b[i].id==id)
                    {
                        printf("ID: %d | Title: %s | Author: %s | Issue Date: %d/%d/%d | Return Date: %d/%d/%d", b[i].id, b[i].t, b[i].au, b[i].idate.d, b[i].idate.m, b[i].idate.y, b[i].rdate.d, b[i].rdate.m, b[i].rdate.y);
                        flag=1;
                        break;
                    }
                }
                if(flag==0)
                    printf("Book not found.");
                break;

            case 4:
                printf("Enter Book ID to update dates: ");
                scanf("%d", &id);
                flag=0;
                for(int i=0; i<n; i++)
                {
                    if(b[i].id==id)
                    {
                        printf("Enter new Issue Date: ");
                        scanf("%d%d%d", &b[i].idate.d, &b[i].idate.m, &b[i].idate.y);
                        printf("Enter new Return Date: ");
                        scanf("%d%d%d", &b[i].rdate.d, &b[i].rdate.m, &b[i].rdate.y);
                        printf("Dates Updated Successfully.");
                        flag=1;
                        break;
                    }
                }
                if(flag==0)
                    printf("Book not found.");
                break;

            case 5:
                printf("Enter Book ID to delete: ");
                scanf("%d", &id);
                flag=0;
                for(int i=0; i<n; i++)
                {
                    if(b[i].id==id)
                    {
                        for(int j=i; j<n-1; j++)
                        {
                            b[j]=b[j+1];
                        }
                        n--;
                        printf("Book Deleted Successfully.");
                        flag=1;
                        break;
                    }
                }
                if(flag==0)
                    printf("Book not found.");
                break;

            case 6:
                printf("Exiting Library Management System.");
                break;

            default:
                printf("Invalid choice.");
        }
    }while(choice!=6);
    return 0;
}
