// Program 25 : To use union
#include<stdio.h>
int main(){  

    union Employee{  
        char x;     
        float salary;
        int age;
    };
     union Employee e;
     e.salary = 27000;
     e.age = 23;
     e.x = 'A';
     

     printf("\n Salary = %f", e.salary);
     printf("\n age = %d", e.age);
     printf("\n char = %c", e.x);
    return 0;
}