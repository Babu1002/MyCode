#include<stdio.h>

int main(){
    double s1,s2;
    char operation;
    printf("number<space>operator<operator>number:");
    scanf("%lf %c %lf",&s1,&operation,&s2);
    /*printf("operation :");
    scanf("%s",&operation);*/
    if(operation=='+'){
        printf("%lf",s1+s2);
    }
    else if(operation=='-'){
        printf("%lf",s1-s2);
    }
    else if(operation=='*'){
        printf("%lf",s2*s1);
    }
    else if(operation=='/'){
        printf("%lf",s1/s2);
    }



    return 0;
}