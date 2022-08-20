#include<stdio.h>
int main()
{
    //problem 1
    int bsalary,gsalary,dallownce,rallownce;
    printf("Please enter the basic salary ");
    scanf("%d",&bsalary);
    dallownce=bsalary*40/100;
    printf("\nDearness allownce is %d \n",dallownce);
    rallownce=bsalary*20/100;
    printf("Rent Allownce is %d\n",rallownce);
    gsalary=bsalary+dallownce+rallownce;
    printf("His gross pay is %d \n ",gsalary);


    //problem 2
    float km,m,f,in,cm;
    printf("\nDistance in kilometer  ");
    scanf("%f",&km);
    m=km*1000;
    f=m*3.37;
    in=f*12;
    cm=m*100;
    printf("%f km \n%f meter \n%f feet \n%f inches \n%f centimeter\n",km,m,f,in,cm);
    

    //problem 3
    int s1,s2,s3;
    int marks;
    float percentage;
    printf("\nmarks in s1--");
    scanf("%d",&s1);
    printf("marks in s2--");
    scanf("%d",&s2);
    printf("marks in s3--");
    scanf("%d",&s3);
    marks=s1+s2+s3;
    printf("\nTotal-%d",marks);
    percentage=marks/3.00;
    printf("\nPercentage is %f \n",percentage);
    


    //problem 2.2
    int no,d1,d2,d3,d4,d5;
    printf("5 digit no.-");
    scanf("%d",&no);
    d1=no%10;
    no=no-d1;
    d2=no%100;
    no=no-d2;
    d3=no%1000;
    no=no-d3;
    d4=no%10000;
    no=no-d4;
    d5=no/10000+d4/100+d3+d2*100+d1*10000;
    printf("%d \n",d5);


    //problem 

    









    return 0;
}