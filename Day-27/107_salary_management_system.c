#include <stdio.h>

struct salary {
    int id;            
    char name[100];    
    float basic, hra, da, gross;       
};

int main() {
    struct salary s[100];
    int choice, id, n=0;

    do {
        printf("\nSalary Management System");
        printf("\n1. Add Salary Record");
        printf("\n2. Display All Salary Records");
        printf("\n3. Search Salary Record by ID");
        printf("\n4. Update Basic Salary");
        printf("\n5. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                printf("Enter details as [ID] [NAME] [BASIC] [HRA] [DA]: ");
                scanf("%d%s%f%f%f", &s[n].id, s[n].name, &s[n].basic, &s[n].hra, &s[n].da);
                s[n].gross=s[n].basic+s[n].hra+s[n].da;
                n++;
                printf("Salary record added successfully.\n");
                break;

            case 2:
                printf("\nSalary Records");
                for (int i=0; i<n; i++) {
                    printf("\nID: %d | Name: %s | Basic: %.2f | HRA: %.2f | DA: %.2f | Gross: %.2f", s[i].id, s[i].name, s[i].basic, s[i].hra, s[i].da, s[i].gross);
                }
                break;

            case 3: {
                printf("Enter Employee ID to search: ");
                scanf("%d", &id);
                int flag=0;
                for (int i=0; i<n; i++) {
                    if (s[i].id==id) {
                        printf("\nID: %d | Name: %s | Basic: %.2f | HRA: %.2f | DA: %.2f | Gross: %.2f",s[i].id, s[i].name, s[i].basic, s[i].hra, s[i].da, s[i].gross);
                        flag=1;
                        break;
                    }
                }
                if (flag==0)
                    printf("Salary record not found.");
                break;
            }

            case 4: {
                printf("Enter Employee ID to update basic salary: ");
                scanf("%d", &id);
                int flag=0;
                for (int i=0; i<n; i++) {
                    if (s[i].id==id) {
                        printf("Enter new basic salary: ");
                        scanf("%f", &s[i].basic);
                        s[i].gross = s[i].basic+s[i].hra+s[i].da;
                        printf("Basic salary updated successfully.");
                        flag=1;
                        break;
                    }
                }
                if (flag==9)
                    printf("Salary record not found.");
                break;
            }

            case 5:
                printf("Exiting Salary Management System.");
                break;

            default:
                printf("Invalid choice.");
        }
    } while (choice!=5);

    return 0;
}
