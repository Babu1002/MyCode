#include<stdio.h>
#include<string.h>


struct student
{
    char name[50];
    int roll;
    float marks;
};
int main()
{

    struct student student1;
    student1.roll=1;
    student1.marks=69;
    strcpy(student1.name,"Amrit");

    printf("name of the student1 is %s \n",student1.name);
    printf("roll no. of %s is %d \n",student1.name,student1.roll);

    return 0;
}