//C program to input all sides of a triangle and check whether triangle is valid or not
#include<stdio.h>
void clrscr()                        
{
 system("clear");
}

void main()
{ 
 int a,b,c;                          
 clrscr();                            
 printf("\nEnter 3 side of the triangle  :");
 scanf("%d %d %d",&a,&b,&c);
 if ((a+b+c)==180 )                   
   {
    printf("\nTriangle is valid");
   }
 else
   {
    printf("\nTriangle is not valid");
   }
 getch();
}
