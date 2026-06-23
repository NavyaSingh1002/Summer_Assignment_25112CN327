#include <stdio.h>

struct student {
    int r, t, marks[5];
    char n[100];
    float p;
};

int main() {
    struct student s[100];
    int choice, r, n=0;

    do {
        printf("\nMarksheet Generation System");
        printf("\n1. Add Student Marksheet");
        printf("\n2. Display All Marksheets");
        printf("\n3. Search Marksheet by Roll Number");
        printf("\n4. Update Student Marks");
        printf("\n5. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                printf("\nEnter details as [ROLL NUMBER] [NAME]: ");
                scanf("%d%s", &s[n].r, s[n].n);
                s[n].t=0;
                printf("Enter marks: \n");
                for (int i=0; i<5; i++)
                {
                    printf("Subject %d: ", i+1);
                    scanf("%d", &s[n].marks[i]);
                    s[n].t=s[n].t+s[n].marks[i];
                }
                s[n].p=s[n].t/5.0;
                n++;
                printf("Marksheet added successfully.");
                break;

            case 2:
                printf("\nAll Marksheets");
                for (int i=0; i<n; i++)
                {
                    printf("\nRoll: %d | Name: %s | Total: %d | Percentage: %.2f%%",s[i].r, s[i].n, s[i].t, s[i].p);
                }
                break;

            case 3:
                printf("Enter Roll Number to search: ");
                scanf("%d", &r);
                int flag=0;
                for (int i=0; i<n; i++)
                {
                    if (s[i].r==r)
                    {
                        printf("Roll: %d | Name: %s\n", s[i].r, s[i].n);
                        for (int j=0; j<5; j++)
                        {
                            printf("\nSubject %d: %d", j+1, s[i].marks[j]);
                        }
                        printf("Total: %d | Percentage: %.2f%%", s[i].t, s[i].p);
                        flag=1;
                        break;
                    }
                }
                if (flag==0)
                    printf("Marksheet not found.");
                break;

            case 4: 
                printf("Enter Roll Number to update marks: ");
                scanf("%d", &r);
                flag=0;
                for (int i=0; i<n; i++)
                {
                    if (s[i].r==r)
                    {
                        int sub;
                        printf("Enter Subject Number to update (1-5): ");
                        scanf("%d", &sub);
                        if(sub>=1 && sub<=5)
                        {
                            printf("Enter new marks for subject %d: ", sub);
                            scanf("%d", &s[i].marks[sub-1]);
                            s[i].t=0;
                            for (int j=0; j<5; j++)
                            {
                                s[i].t=s[i].t+s[i].marks[j];
                            }
                            s[i].p=s[i].t/5.0;
                            printf("Marks updated successfully.");
                        }
                        else
                            printf("Invalid subject number.");
                        flag=1;
                        break;
                    }
                }
                if (flag==0)
                    printf("Marksheet not found.");
                break;

            case 5:
                printf("Exiting Marksheet Generation System.");
                break;

            default:
                printf("Invalid choice.");
        }
    } while (choice!=5);
    return 0;
}
