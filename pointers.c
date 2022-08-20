#include<stdio.h>

int main()
{
    int age = 30;     // intiger variable stors the intiger data
    char gpa='S';     // char variable stors the character data type
    double number=932;  // double variable stores the double data type
    char *tom="hi!";   
    char dem[]="HI!";

    printf("%s \n",tom);
    printf("%s\n",dem);
    // a pointer is like data type in which we store the memory address of another variable
    // similarly pointer variable stores the pointer datatype or the memory address of other variable

    int * pAge = &age;
    char * pGpa = &gpa;
    double * pNumber = &number;

    printf("memory address of age %p\n", pGpa);
    printf("memory address of gpa %p\n",pGpa);
    printf("memory adderss of number %p\n",pNumber);

    return 0;
}