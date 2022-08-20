#include<stdio.h>
// this is the structure of user define funcation
int cube(int number)
{
    int result=number*number*number;
    return result;
}

int main()
{
    // for loop 
    for(int i=0; i<=2; i++)
{
    printf("i am %d, my cube is %d\n",i,cube(i));
}


int i,j;
for(i=0; i<+5; i++)
{
    for(j=0;j<=i;j++)
    {
        printf("*");

    }
    printf("\n");
}


int arr[2][2]={{2,5}, {2, 9}};
printf("%d",arr[1][1]);


    return 0;
}