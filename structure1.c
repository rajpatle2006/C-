#include <stdio.h>
int main(){

    struct student{
        char name[50];
        int rolln;
        int age;
    };
    struct student s1;
    printf("Enter name: ");
    fgets(s1.name, sizeof(s1.name), stdin);
    printf("Enter roll number: ");
    scanf("%d", &s1.rolln);
    printf("Enter age: ");
    scanf("%d", &s1.age);
    printf("Name: %s", s1.name);
    printf("Roll Number: %d\n", s1.rolln);
    printf("Age: %d\n", s1.age);
    return 0;
}
      
    
     