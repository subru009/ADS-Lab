       #include <stdio.h>
#include <stdlib.h>
void insert(int arr[], int *n)
{
    int i;
    printf("Enter the size of the array: ");
    scanf("%d", n);
    printf("Enter the elements in ascending order:\n");
    for(i = 0; i < *n; i++)
    {
        scanf("%d", &arr[i]);
    }
}
void display(int arr[], int n)
{
    int i;
    printf("Array elements are:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void linearSearch(int arr[], int n)
{
    int i, key, found = 0;
    printf("Enter the element to be searched: ");
    scanf("%d", &key);
    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            printf("Element %d found at position %d.\n", key, i + 1);
            found = 1;
            break;
        }
    }
    if(found == 0)
    {
        printf("Element %d is not present.\n", key);
    }
}
void binarySearch(int arr[], int n)
{
    int key;
    int low = 0, high = n - 1, mid;
    int found = 0;
    printf("Enter the element to be searched: ");
    scanf("%d", &key);
    while(low <= high)
    {
        mid = (low + high) / 2;
        if(arr[mid] == key)
        {
            printf("Element %d found at position %d.\n", key,mid+1);
            found=1;
            break;
        }
        else if(arr[mid]<key)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    if(found==0)
    {
        printf("Element %d is not present.\n",key);
    }
}
void deleteElement(int arr[], int *n)
{
    int i, key, pos = -1;
    printf("Enter the element to be deleted: ");
    scanf("%d", &key);
    for(i = 0; i < *n; i++)
    {
        if(arr[i] == key)
        {
            pos = i;
            break;
        }
    }
    if(pos == -1)
    {
        printf("element %d is not present.\n",key);
        return;
    }
    for(i = pos; i < *n - 1; i++)
    { 
        arr[i] = arr[i + 1];
    }
    (*n)--;
    printf("element %d deleted.\n",key);
}
int main()
{
    int arr[100];
    int n = 0;
    int choice;
    do
    {
        printf("menu\n");
        printf("1. insert\n");
        printf("2. display\n");
        printf("3. linear Search\n");
        printf("4. binary Search\n");
        printf("5. delete an Element\n");
        printf("6. exit\n");
        printf("enter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                insert(arr,&n);
                break;
            case 2:
                display(arr,n);
                break;
            case 3:
                linearSearch(arr,n);
                break;
            case 4:
                binarySearch(arr,n);
                break;
            case 5:
                deleteElement(arr,&n);
                break;
            case 6:
                printf("exit\n");
                break;
            default:
                printf("invalid choice!\n");
        }
    } while(choice != 6);
    return 0;
}

