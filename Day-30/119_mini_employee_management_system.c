#include<stdio.h>

struct date
{
    int d, m, y;
};

struct employee
{
    int id;
    char n[100], dept[100];
    float sal;
    struct date doj;
};

int main()
{
    struct employee e[100];
    int choice, id, n=0;
    do
    {
       printf("\nEmployee Management System");
       printf("\n1. Add Employee Details");
       printf("\n2. Display All Employee Details");
       printf("\n3. Search Employee by ID");
       printf("\n4. Update Employee Salary");
       printf("\n5. Exit");
       printf("\nEnter your choice: ");
       scanf("%d", &choice);
       switch (choice)
       {
        case 1:
            printf("Enter details of employee as [ID] [NAME] [DEPARTMENT] [SALARY] [DATE OF JOINING]: ");
            scanf("%d%s%s%f%d%d%d", &e[n].id, e[n].n, e[n].dept, &e[n].sal, &e[n].doj.d, &e[n].doj.m, &e[n].doj.y);
            n++;
            printf("Employee added successfully.");
            break;

        case 2:
            printf("Employee Deatils: ");
            for(int i=0; i<n; i++)
            {
                printf("ID: %d | Name: %s | Department: %s | Salary: %.2f | Date Of Joining: %d/%d/%d", e[i].id, e[i].n, e[i].dept, e[i].sal, e[i].doj.d, e[i].doj.m, e[i].doj.y);
            }
            break;

        case 3:
            printf("Enter employee ID to search: ");
            scanf("%d", &id);
            int flag=0;
            for(int i=0; i<n; i++)
            {
                if(e[i].id==id)
                {
                    printf("ID: %d | Name: %s | Department: %s | Salary: %.2f | Date Of Joining: %d/%d/%d", e[i].id, e[i].n, e[i].dept, e[i].sal, e[i].doj.d, e[i].doj.m, e[i].doj.y);
                    flag=1;
                    break;
                }
            }
            if(flag==0)
                printf("Employee Details Not Found.");
            break;

        case 4:
            printf("Enter Employee ID to update salary: ");
            scanf("%d", &id);
            flag=0;
            for(int i=0; i<n; i++)
            {
                if(e[i].id==id)
                {
                    printf("Enter new salary: ");
                    scanf("%f", &e[i].sal);
                    printf("Salary Updated Successfully.");
                    flag=1;
                    break;
                }
            }
            if(flag==0)
                printf("Employee Not Found.");
            break;

        case 5:
            printf("Exiting Employeee Management System.");
            break;

        default:
            printf("Invalid choice.");
       }
    } while (choice!=5);
    return 0;
}