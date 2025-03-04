// Program 7 : To initialize and print 2-D array usimg nested for loop
#include<stdio.h>
#include<conio.h>
int main(){
    int arr[5][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,15,16,17},{18,19,20,21}};
    for(int i=0;i<=4;i++){
        for(int j=0;j<=3;j++){
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}


