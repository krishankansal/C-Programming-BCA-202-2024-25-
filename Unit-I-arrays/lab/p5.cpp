// Program 5 : To insert an element 72 at index 1 in given array
#include <stdio.h>
#include <conio.h>

int main()
{
    int arr[10] = {-2, 45, 78, 29, 100, 94};
    printf("Array Before Insertion : ");
    for (int i = 0; i < 6; i++)
    {
        printf("%d  ", arr[i]);
    }
    for (int i = 5; i >= 1; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[1] = 72;
    printf("\n Array After Insertion : ");
    for (int i = 0; i < 7; i++)
    {
        printf("%d  ", arr[i]);
    }
}
