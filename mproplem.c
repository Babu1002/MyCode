#include<stdio.h>
#include<math.h> // with math library program needs to run with command "gcc mproplem.c -o test -lm"

int main()
{
        //problem 3
    float l1,l2,l3,su,areat;
    printf("side lenght of triangle consecutivly");
    scanf("%f%f%f",&l1,&l2,&l3);
    su=(l1+l2+l3)/2;
    areat=sqrt(su*(su-l1)*(su-l2)*(su-l3));
    printf("Area=%f",areat);






    return 0;
}