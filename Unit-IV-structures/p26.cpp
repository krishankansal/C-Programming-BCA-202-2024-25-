// Program 26 write a program to enter the name and marks of 5 students
// and display the name of students having marks greater then 70.
#include<stdio.h>
int main(){
    struct Student{
        char name[20];
        int marks;
    };
    struct Student arr[5];
    for(int i=0;i<5;i++){
        printf("\n Enter Name : ");
        scanf("%s",&arr[i].name);
        printf("\n Enter Marks : ");
        scanf("%d",&arr[i].marks);
    }

    for(int j=0;j<5;j++){
        if(arr[j].marks > 70){
            printf("\n %s", arr[j].name);
        }
    }  
    return 0;
}
