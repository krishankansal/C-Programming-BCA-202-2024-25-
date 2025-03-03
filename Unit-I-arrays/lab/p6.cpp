// Program 5 : To insert an element in an array
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
    int elemToBeInserted, position;
    printf("\n Enter the element to be inserted : ");
    scanf("%d", &elemToBeInserted);
    printf("\n Index of insertion : ");
    scanf("%d", &position);

    for (int i = 5; i >= position; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[position] = elemToBeInserted;
    printf("\n Array After Insertion : ");
    for (int i = 0; i < 7; i++)
    {
        printf("%d  ", arr[i]);
    }
}
