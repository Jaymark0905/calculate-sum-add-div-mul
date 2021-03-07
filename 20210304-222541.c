#include<stdio.h>
#include <conio.h>
void main()
{
   int a,b,c;
   clrscr();
   printf("enter first integer:\n");
   scanf("%d",&a);
   printf("enter Second integer:\n");
   scanf("%d",&b);
   c=a+b;
   printf("ADD=%d\n",c);
   c=a*b;
   printf("MUL=%d\n",c);
   c=a/b;
   printf("DIV=%d\n",c);
   c=a-b;
   printf("SUB=%d",c);
    return 0;
}