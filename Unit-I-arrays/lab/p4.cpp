// Program -4 : To find the largest element in a given array
#include <stdio.h>
#include <conio.h>

int main()
{
    int x[7] = {90, -1, 45, 67, 32, 101, 99};
    int max = x[0];
    for (int i = 1; i < 7; i++)
    {
        if (x[i] > max)
        {
            max = x[i];
        }
    }

    printf("The largest element in array = %d", max);
}