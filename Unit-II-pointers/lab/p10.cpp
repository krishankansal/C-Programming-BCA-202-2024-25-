// Program-10 : To print the elements of 2-D array using pointer
#include<stdio.h>
int main(){
int arr[3][4] = {{3,7,99,1},{8,34,56,-9},{66,23,89,76}};
int (*p)[4] = arr;

for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        printf("%d ",*(*(p+i)+j));
    }
    printf("\n");
}
return 0;
}


