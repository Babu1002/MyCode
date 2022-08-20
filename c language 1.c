#include <stdio.h>

int main()
{
    
    printf("orld\n"); // \n is used to bring the coursor in new line

    /* \n are the escape sequences
       \t  for horizontal tab
       \b  for backspace
       \\  for backslash
       \"  for double quote
       \r  for carrige return
    */

   //getch()   is a funation used to get any character from the user
   //crlscr()   is a function used to clear the terminal

   int a=4,b=6;
   printf("%d\n",a); // this is a pre defined function in c


   /* format specifer (these specifers don't get printed itself but prints the value of the variable)
    %d  used  for int
    %f  used  for float
    %c  used  for char
    %lf used  for double
    */

   int k;
   printf("enter the to get sq ");
   scanf("%d",&k);

   printf("square of %d is %d \n",k,k*k);

   /*  scanf is a pre defined function
       scanf("format specifer",adress of variable) 
       adress of = &
       scanf("")

    */

   int arith;
   arith=6+3*2;
   printf("%d \n",arith);

   /*  arethmetic operators
       c language do not follow BODMAS rule

       # unery operator
       # arithmatic operator
       # bitwise operator
       # relational operator
       # logical operator
       # conditional operator
       # assingment operator

       there are some exception present in this sequence also

    */

   /*unery operator require only one one operent to work with
     +,- are the sign of the operator
     ++,-- increment operator
     x++ is the post increment operator with least priority even less than assingment operator
     ++x is pre increment operator which has normal priority as unery operator 
     also -- works in the same way

   */
  int s,r=3;
  printf("old value of r is %d \n",r);
  s=r++;       //  post increment(x++) has les priority than assingment operator(=)
  printf("value of s is %d and of r is %d \n",s,r);
  printf("firstly s took the value of k and than kgot incrimented by one \n");

  //  sizeof() operator
  int int1,qw,we,er,rt;
  float float1;
  double double1;
  char char1;

  qw=sizeof(int1);
  we=sizeof(3.23);  // float or decimal no. are by default of double data typr in c
  er=sizeof("a");   // 'a' is treated as int internally ASCII coding
  rt=sizeof(char1);

  //sizeof() operator provides the no. of bits covred by that data type \n");
  // l5p3
  printf("memory occupied by int data type %d byte\n",qw);
  printf("memory occupied by 3.23 is %d byte \n",we);
  printf("memory ocuupied by 'a' is %d \n",er); 




  /*  arithmetic operator

      *,/,%
      +,-
      for same level priority c give left to right priority order

      these are the arithmetic operators
      l5p5
  */

  /*  bitwise operator

      it deals with the 0,1 
      AND &, OR | , XOR ^, NOT ~, right shift >>, left shift <<

  */

 int and,or,xor,rshift,lshift;
 and=57&27;           /* firstly all the no. will be converted into there binery form and than 
                         and operation will be per formed after that again it will be converted
                          into there decimal form*/
 or=57|27;
 xor=57^27;
 rshift=57>>2;
 lshift=57<<2;
 printf("57 & 27 is %d \n",and);
printf("57 | 27 is %d \n" ,or);
printf("57 ^ 27 is %d \n" ,xor);
printf("57 >> 2 is %d \n",rshift);
printf("57 << 2 is %d \n",lshift);

//  --------------------------------------------l5p6--------------------------------











    return 0;
}