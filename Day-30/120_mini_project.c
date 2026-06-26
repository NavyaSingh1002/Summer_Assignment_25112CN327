#include<stdio.h>
#include<string.h>

struct patient
{
    int id, age;
    char n[100], d[100];
};

int main()
{
    struct patient p[100];
    int choice, n=0;
    do{
        printf("\nMini Hospital Management System");
        printf("\n1. Add Patient");
        printf("\n2. Display All Patients");
        printf("\n3. Search Patient by ID");
        printf("\n4. Update Patient Disease");
        printf("\n5. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1: 
                addPatient(p, &n); 
                break;
            case 2: 
                displayPatients(p, n); 
                break;
            case 3: 
                searchPatient(p, n); 
                break;
            case 4: 
                updateDisease(p, n); 
                break;
            case 5: 
                printf("Exiting Hospital Management System.\n"); break;
            default: 
                printf("Invalid choice.\n");
        }
    }while(choice!=5);
    return 0;
}


void addPatient(struct patient p[], int *n)
{
    printf("Enter details as [ID] [NAME] [AGE] [DISEASE]: ");
    scanf("%d%s%d%s", &p[*n].id, p[*n].n, &p[*n].age, p[*n].d);
    (*n)++;
    printf("Patient Added Successfully.");
}

void displayPatients(struct patient p[], int n)
{
    printf("\nAll Patients:\n");
    for(int i=0; i<n; i++)
    {
        printf("ID: %d | Name: %s | Age: %d | Disease: %s\n", p[i].id, p[i].n, p[i].age, p[i].d);
    }
}

void searchPatient(struct patient p[], int n)
{
    int id, flag=0;
    printf("Enter Patient ID to search: ");
    scanf("%d", &id);
    for(int i=0; i<n; i++)
    {
        if(p[i].id==id)
        {
            printf("ID: %d | Name: %s | Age: %d | Disease: %s\n", p[i].id, p[i].n, p[i].age, p[i].d);
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("Patient not found.\n");
}

void updateDisease(struct patient p[], int n)
{
    int id, flag=0;
    printf("Enter Patient ID to update disease: ");
    scanf("%d", &id);
    for(int i=0; i<n; i++)
    {
        if(p[i].id==id)
        {
            printf("Enter new disease: ");
            scanf("%s", p[i].d);
            printf("Disease Updated Successfully.\n");
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("Patient not found.\n");
}