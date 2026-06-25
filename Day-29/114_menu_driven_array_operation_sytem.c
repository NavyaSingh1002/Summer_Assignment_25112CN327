#include<stdio.h>
int main()
{
    int a[100], n=0, choice, k, pos;
    do{
        printf("\n1. Insert Element");
        printf("\n2. Display Array");
        printf("\n3. Search Element in Array");
        printf("\n4. Update Element");
        printf("\n5. Delete Element from Array");
        printf("\n6. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                printf("Enter element to insert: ");
                scanf("%d", &k);
                a[n]=k;
                n++;
                printf("Element Inserted Successfully.");
                break;

            case 2:
                printf("\nArray Elements");
                for(int i=0; i<n; i++)
                {
                    printf(" %d", a[i]);
                }
                break;

            case 3:
                printf("Enter element to search: ");
                scanf("%d", &k);
                int flag=0;
                for(int i=0; i<n; i++)
                {
                    if(a[i]==k)
                    {
                        printf("Element found at position %d", i+1);
                        flag=1;
                        break;
                    }
                }
                if(flag==0)
                    printf("Element not found.");
                break;

            case 4:
                printf("Enter position to update: ");
                scanf("%d", &pos);
                if(pos<n)
                {
                    printf("Enter new value: ");
                    scanf("%d", &k);
                    a[pos-1]=k;
                    printf("Element Updated Successfully.");
                }
                else
                    printf("Invalid position.");
                break;

            case 5:
                printf("Enter position to delete: ");
                scanf("%d", &pos);
                if(pos<n)
                {
                    for(int i=pos; i<n-1; i++)
                    {
                        a[i]=a[i+1];
                    }
                    n--;
                    printf("Element Deleted Successfully.");
                }
                else
                    printf("Invalid position.");
                break;

            case 6:
                printf("Exiting.");
                break;

            default:
                printf("Invalid choice.");
        }
    }while(choice!=6);
    return 0;
}
