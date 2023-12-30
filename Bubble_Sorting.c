#include <stdio.h>
//Modified Bubble Sort......
int main()
{
    int arr[10], n, i;

    printf("Enter the number of Elements: ");
    scanf("%d", &n);

    for (i = 0; i <n; i++)
    {
        printf(" arr[%d]:",i);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        int flag = 0;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = 1;
            }
        }
        if (flag == 0)
        {
            break;
        }
    }

    printf("The Sorted Array...\n");
    for (i = 0; i < n; i++)
    {
        printf("%d \n",arr[i]);
    }

    return 0;

}