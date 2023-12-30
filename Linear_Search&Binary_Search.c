#include<stdio.h>

int LinearSearch(int arr[],int n, int data)

{
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == data)
        {
            printf("Element is Found at index: %d\n",i);
            printf("Element is Found at Position: %d",i+1);
            break;
        }
        
    }
    if (i==n)
    {
        printf("Element Not Found!!!");
    }
    return 0;
}


int BinarySearch(int arr[],int n, int data)
{
    int l,r,mid;
    l = 0, r = n - 1;
    

    while(l<=r)
    {
        mid = (l+r)/2;
        if (data == arr[mid])
        {
            return mid;
        }
        else if (data<arr[mid])
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
        
    }
    return -1;
}


int main()
{
    int arr[10], n, i,data;

    printf("Enter the number of Elements: ");
    scanf("%d", &n);
    printf("Enter the Elements You want to search: ");
    scanf("%d", &data);

    for (i = 0; i <n; i++)
    {
        printf(" arr[%d]:",i);
        scanf("%d", &arr[i]);
    }
    
    //LinearSearch(arr,n,data);
    int result = BinarySearch(arr,n,data);
    if (result == -1)
        printf("Not found");
    else
        printf("Element is found at index %d", result);
    
    
    return 0;
}