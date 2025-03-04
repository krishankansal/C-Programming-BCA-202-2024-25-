// Program 9 : Program to print the elements of 1-D array
// using pointer
#include<stdio.h>
#include<conio.h>
int main(){
    int x[7] = {10, -7, 9, 102, -78, 5, 35};
    int *p = x;  // here you can also write &x[0]
    for(int i=0; i<=6; i++){
        printf("\n Address = %x and Value = %d",(p+i),*(p+i));
    }    
    printf("\n Base address of array x = %x", x);
    printf("\n Base address of array &x[0] = %x", &x[0]);
    return 0;
}