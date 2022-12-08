#include <stdio.h>
#include <conio.h>

void main()
{
    int user;
    printf("Enter the size of the arrya : ");
    scanf("%d", &user);

    int arr[user];

    for (int i = 0; i < user; i++)
    {
        printf("Enter the %d element : ", i + 1);
        scanf("%d", &arr[i]);
    }

    int min;

    for (int i = 0; i < user - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < user; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }

    for (int i = 0; i < user; i++)
    {
        printf("%d ", arr[i]);
    }
}