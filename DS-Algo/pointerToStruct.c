#include<stdio.h>
/*defining the structure*/
struct student{
    int rollNo;
    char* firstName;
    char* lastName;
};
/*defining the main function*/
/* -> is known as the indirection operator*/
int main(){
    int i=0;
    struct student stud;
    struct student *ptrStud;
    ptrStud=&stud;
    ptrStud->firstName="john";
    ptrStud->lastName="smith";
    ptrStud->rollNo=1;
    printf("Roll No. : %d ; Student Name : %s %s ",ptrStud->rollNo,ptrStud->firstName,ptrStud->lastName);
    return 0;
}