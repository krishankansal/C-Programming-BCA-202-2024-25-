// Program 24 : Difference between strcture and union
#include<stdio.h>
int main(){
    struct Student{        
        float marks;
        int rollno;
    };
    struct Student s;

    union Employee{        
        float salary;
        int age;
    };

    union Employee e;

    printf("\n Size of structure = %d", sizeof(s));
    printf("\n Size of union = %d", sizeof(e));    
    printf("\n Size of int = %d", sizeof(int));  
    printf("\n Size of float = %d", sizeof(float)); 
}
