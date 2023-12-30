#include <stdio.h>
//Insertion Sort......
int main()
{
    int arr[10], n, i,temp;

    printf("Enter the number of Elements: ");
    scanf("%d", &n);

    for (i = 0; i<n; i++)
    {
        printf("arr[%d]:",i);
        scanf("%d", &arr[i]);
    }

    for (i = 1; i < n; i++)
    {
        temp = arr[i];
        int j = i - 1;

        while (j>=0 && arr[j]>temp)
        {
            arr[j+1] = arr[j];
            j = j - 1;
        }
        arr[j+1] = temp;
        
    }
    
    printf("The Sorted Array...\n");
    for (i = 0; i < n; i++)
    {
        printf("%d \n",arr[i]);
    }
    
    return 0;

}