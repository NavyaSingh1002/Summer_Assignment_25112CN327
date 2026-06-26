#include<stdio.h>
#include<string.h>
struct student
{
    int id, age, m;
    char n[100];
};

int main()
{
    struct student s[100];
    int choice, id, n=0;
    do{
        printf("\nStudent Record System");
        printf("\n1. Add Student");
        printf("\n2. Display All Students");
        printf("\n3. Search Student by ID");
        printf("\n4. Update Student Marks");
        printf("\n5. Delete Student");
        printf("\n6. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                printf("Enter details as [ID] [NAME] [AGE] [TOTAL MARKS]: ");
                scanf("%d%s%d%d", &s[n].id, s[n].n, &s[n].age, &s[n].m);
                n++;
                printf("Student Added Successfully.");
                break;

            case 2:
                printf("\nAll Students");
                for(int i=0; i<n; i++)
                {
                    printf("\n[ID: %d | Name: %s | Age: %d | Marks: %d]", s[i].id, s[i].n, s[i].age, s[i].m);
                }
                break;

            case 3:
                printf("Enter Student ID to search: ");
                scanf("%d", &id);
                int flag=0;
                for(int i=0; i<n; i++)
                {
                    if(s[i].id==id)
                    {
                        printf("ID: %d | Name: %s | Age: %d | Marks: %d", s[i].id, s[i].n, s[i].age, s[i].m);
                        flag=1;
                        break;
                    }
                }
                if(flag==0)
                    printf("Student not found.");
                break;

            case 4:
                printf("Enter Student ID to update marks: ");
                scanf("%d", &id);
                flag=0;
                for(int i=0; i<n; i++)
                {
                    if(s[i].id==id)
                    {
                        printf("Enter new marks: ");
                        scanf("%d", &s[i].m);
                        printf("Marks Updated Successfully.");
                        flag=1;
                        break;
                    }
                }
                if(flag==0)
                    printf("Student not found.");
                break;

            case 5:
                printf("Enter Student ID to delete: ");
                scanf("%d", &id);
                flag=0;
                for(int i=0; i<n; i++)
                {
                    if(s[i].id==id)
                    {
                        for(int j=i; j<n-1; j++)
                        {
                            s[j]=s[j+1];
                        }
                        n--;
                        printf("Student Deleted Successfully.");
                        flag=1;
                        break;
                    }
                }
                if(flag==0)
                    printf("Student not found.");
                break;

            case 6:
                printf("Exiting Student Record System.");
                break;

            default:
                printf("Invalid choice.");
        }
    }while(choice!=6);
    return 0;
}
