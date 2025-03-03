// Program -2 :  To initialize and print array elements using for loop.
#include <stdio.h>
#include <conio.h>

int main()
{
    int arr[5];
    arr[0] = 101;
    arr[1] = 102;
    arr[2] = 103;
    arr[3] = 104;
    arr[4] = 105;
    for (int i = 0; i < 5; i++)
    {
        printf("%d   ", arr[i]);
    }
    arr[1] = arr[2] + arr[3];
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d   ", arr[i]);
    }
    return 0;
}
