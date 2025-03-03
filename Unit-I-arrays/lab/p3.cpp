// Program -3 : To print the average of given array
#include <stdio.h>
#include <conio.h>

int main()
{
    int x[] = {10, 20, 30, 40, 50, 60, 70};
    int z = sizeof(x) / sizeof(x[0]);
    printf("%d", z);
    int sum = 0;
    for (int i = 0; i < z; i++)
    {
        sum = sum + x[i];
    }
    printf("\n The sum of the array = %d", sum);
    printf("\n The Average of the array = %d", sum / z);
    return 0;
}

