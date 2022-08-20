#include<stdio.h>

int main()
{
    char *n="ri";
    char *m=n;
    printf("%p\n",n);
    printf("%p\n",m);

    // m=20;

    // printf("%p\n",&n);
    // printf("%p\n",&m);
    
    return 0;
}