#include <stdio.h>
#include <conio.h>

void main()
{
    int user;
    printf("Enter the size of array : ");
    scanf("%d", &user);
    int arr[user], i, j, temp;

    for (int i = 0; i < user; i++)
    {
        printf("Enter the %d element : ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < user - 1; i++)
    {
        for (int j = 0; j < user - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    // for desending order
    // for (int i = 0; i < user-1; i++)
    // {
    //     for (int j = 0; j < user-i-1; j++)
    //     {
    //         if (arr[j] > arr[j+1])
    //         {
    //             temp = arr[j];
    //             arr[j] = arr[j+1];
    //             arr[j+1] = temp;
    //         }
    //     }
    // }

    for (int i = 0; i < user; i++)
    {
        printf("%d ", arr[i]);
    }
}