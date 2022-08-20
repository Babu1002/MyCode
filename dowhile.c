#include<stdio.h>

int main()
{
// in the case of simple while loop it checks the condition and than runs the code
    int d=0;
    while(d<=5)
    {
        printf("I am Sourabh Kumar\n");
        d++;
    }

// do while loop runs the block of code first and than it cheaks the condition.
// as it cheks the condition later it runs the code atleat one time befor stoping
    int f=5;
    do{
        printf("sourabh is my name\n");
        f++;
    }while(f<=5);

    return 0;
}